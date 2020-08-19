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
public class Pessoa {
    public String getNome(){
        return nome;
    }
    
    public void setNome(String nome){
        this.nome = nome;
    }
    
    public String getTelefone(){
        return telefone;
    }
    
    public void setTelefone(String telefone){
        this.telefone = telefone;
    }
    
    private String nome;
    private String telefone;
    
    public Pessoa(String nome, String telefone){
        this.nome = nome;
        this.telefone = telefone;
    }
    
    public void exibir(){
        System.out.println(getNome()+": :"+getTelefone());
    }
}
