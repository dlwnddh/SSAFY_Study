select employees.first_name, employees.last_name, departments.dept_name
from employees
left join dept_emp on employees.emp_no = dept_emp.emp_no
left join departments on dept_emp.dept_no = departments.dept_no
limit 100;