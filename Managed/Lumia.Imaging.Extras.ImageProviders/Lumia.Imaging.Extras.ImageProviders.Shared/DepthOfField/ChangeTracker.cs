namespace Lumia.Imaging.Extras
{

	public class ChangeTracker<T>
	{
		private T m_value;
		private bool m_isDirty;

		public ChangeTracker() : this(default(T), true)
		{
		}

		public ChangeTracker(T value) : this(value, false)
		{
		}

		public ChangeTracker(T value, bool isDirty)
		{
			m_value = value;
			m_isDirty = isDirty;
		}

		public T Value
		{
			get
			{
				return m_value;
			}

			set
			{
				var hasChanged = m_value != null ? !m_value.Equals(value) : (value == null);
				
				if (hasChanged)
				{
					m_isDirty = true;
				}

				m_value = value;
			}
		}

		public bool IsDirty
		{
			get { return m_isDirty; }
		}

		public void Reset()
		{
			m_isDirty = false;
		}
	}

}
