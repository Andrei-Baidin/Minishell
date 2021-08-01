/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnamor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 10:02:27 by nnamor            #+#    #+#             */
/*   Updated: 2021/07/31 16:57:53 by nnamor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_H
# define TOKEN_H

typedef enum e_kind
{
	ERROR,
	WORD,
	GREAT,
	DGREAT,
	LESS,
	DLESS,
	QUOTE,
	DQUOTE,
	PIPE,
	ENV,
	AND,
	OR,
	WILDCARD
}	t_kind;

typedef struct s_token
{
	char	*value;
	t_kind	kind;
}	t_token;

t_token *token_create(char *value, t_kind kind);
t_token	*get_token(char **line_read);
void	token_free(t_token *token);

#endif	/*TOKEN_H*/
