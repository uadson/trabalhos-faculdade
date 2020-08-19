/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exemplo010;

/**
 *
 * @author uadson
 */
public class Exemplo010a {
    public static void main(String[] args){
        Pessoa [] pessoas = {new Pessoa("João", "1111-1111"),
            new Pessoa("Maria", "2222-2222"),
            new Profissional("Luiz", "3333-3333", "Advogado")};
        
        for (int i=0; i<3; i++)
            pessoas[i].exibir();
        }
    }
    
