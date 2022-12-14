
using std::cout;
using std::endl;

template <typename T> 
MutantStack<T>::MutantStack(void)
{
	cout << "Mutant stack constructor called" << endl;
}

template <typename T> 
MutantStack<T>::~MutantStack(void)
{
	cout << "Mutant stack destructor called" << endl;
}

template <typename T> 
MutantStack<T>::MutantStack(MutantStack &a)
{
	*this = a;
}

template <typename T> 
MutantStack<T>&	MutantStack<T>::operator=(MutantStack &a)
{
	*this = a;
	return (*this);
}
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin(void) const
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend(void) const
{
	return (this->c.rend());
}

