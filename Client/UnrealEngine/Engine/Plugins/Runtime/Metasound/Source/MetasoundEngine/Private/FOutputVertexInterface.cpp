// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<int>,Metasound::TOutputDataVertex<FString>,Metasound::TOutputDataVertex<float>,Metasound::TOutputDataVertex<float>,Metasound::TOutputDataVertex<Metasound::FTime>_> @ 14b305130

FOutputVertexInterface * __thiscall
Metasound::FOutputVertexInterface::
FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<int>,Metasound::TOutputDataVertex<FString>,Metasound::TOutputDataVertex<float>,Metasound::TOutputDataVertex<float>,Metasound::TOutputDataVertex<Metasound::FTime>_>
          (FOutputVertexInterface *this,TOutputDataVertex<Metasound::FTrigger> *param_1,
          TOutputDataVertex<Metasound::FTrigger> *param_2,
          TOutputDataVertex<Metasound::FTrigger> *param_3,
          TOutputDataVertex<Metasound::FTrigger> *param_4,
          TOutputDataVertex<Metasound::FTrigger> *param_5,TOutputDataVertex<int> *param_6,
          TOutputDataVertex<FString> *param_7,TOutputDataVertex<float> *param_8,
          TOutputDataVertex<float> *param_9,TOutputDataVertex<Metasound::FTime> *param_10)

{
  FOutputVertexInterfaceDeclarationBuilder local_38;
  
  FOutputVertexInterface(this);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,10,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_1);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_2);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_3);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_5);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_6);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_7);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_8);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_9);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_10);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

