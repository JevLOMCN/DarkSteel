// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// FDataEdge @ 14ad37ea0

FDataEdge * __thiscall Metasound::FDataEdge::FDataEdge(FDataEdge *this,FDataEdge *param_1)

{
  (this->From).Node = (param_1->From).Node;
  *(undefined ***)&(this->From).Vertex = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&(this->From).Vertex.field_0x8 = *(undefined8 *)&(param_1->From).Vertex.field_0x8;
  *(undefined8 *)&(this->From).Vertex.field_0x10 = *(undefined8 *)&(param_1->From).Vertex.field_0x10
  ;
  *(undefined4 *)&(this->From).Vertex.field_0x18 = *(undefined4 *)&(param_1->From).Vertex.field_0x18
  ;
  *(undefined ***)&(this->From).Vertex = &___7FOutputDataVertex_Metasound__6B_;
  (this->To).Node = (param_1->To).Node;
  (this->To).Vertex._padding_ = (longlong)&___7FDataVertex_Metasound__6B_;
  (this->To).Vertex._padding_ = (param_1->To).Vertex._padding_;
  (this->To).Vertex._padding_ = (param_1->To).Vertex._padding_;
  *(int *)&(this->To).Vertex._padding_ = (int)(param_1->To).Vertex._padding_;
  (this->To).Vertex._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&(this->To).Vertex.Literal.Value,&(param_1->To).Vertex.Literal.Value);
  return this;
}

