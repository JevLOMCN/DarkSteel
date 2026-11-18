// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 6

// FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_> @ 14afe1280

FOutputVertexInterface * __thiscall
Metasound::FOutputVertexInterface::
FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
          (FOutputVertexInterface *this,TOutputDataVertex<Metasound::FAudioBuffer> *param_1,
          TOutputDataVertex<Metasound::FAudioBuffer> *param_2)

{
  FOutputVertexInterfaceDeclarationBuilder local_38;
  
  FOutputVertexInterface(this);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_1);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_2);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<int>_> @ 14b1bcf10

FOutputVertexInterface * __thiscall
Metasound::FOutputVertexInterface::
FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<int>_>
          (FOutputVertexInterface *this,TOutputDataVertex<Metasound::FTrigger> *param_1,
          TOutputDataVertex<Metasound::FTrigger> *param_2,TOutputDataVertex<int> *param_3)

{
  FOutputVertexInterfaceDeclarationBuilder local_38;
  
  FOutputVertexInterface(this);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_1);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_2);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<float>_> @ 14b1bcfd0

FOutputVertexInterface * __thiscall
Metasound::FOutputVertexInterface::
FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<float>_>
          (FOutputVertexInterface *this,TOutputDataVertex<Metasound::FTrigger> *param_1,
          TOutputDataVertex<Metasound::FTrigger> *param_2,TOutputDataVertex<float> *param_3)

{
  FOutputVertexInterfaceDeclarationBuilder local_38;
  
  FOutputVertexInterface(this);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_1);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_2);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTime>_> @ 14b1bd090

FOutputVertexInterface * __thiscall
Metasound::FOutputVertexInterface::
FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTime>_>
          (FOutputVertexInterface *this,TOutputDataVertex<Metasound::FTrigger> *param_1,
          TOutputDataVertex<Metasound::FTrigger> *param_2,
          TOutputDataVertex<Metasound::FTime> *param_3)

{
  FOutputVertexInterfaceDeclarationBuilder local_38;
  
  FOutputVertexInterface(this);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_1);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_2);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<bool>_> @ 14b1bd150

FOutputVertexInterface * __thiscall
Metasound::FOutputVertexInterface::
FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<bool>_>
          (FOutputVertexInterface *this,TOutputDataVertex<Metasound::FTrigger> *param_1,
          TOutputDataVertex<Metasound::FTrigger> *param_2,TOutputDataVertex<bool> *param_3)

{
  FOutputVertexInterfaceDeclarationBuilder local_38;
  
  FOutputVertexInterface(this);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_1);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_2);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>_> @ 14b2187d0

FOutputVertexInterface * __thiscall
Metasound::FOutputVertexInterface::
FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>_>
          (FOutputVertexInterface *this,TOutputDataVertex<Metasound::FTrigger> *param_1,
          TOutputDataVertex<Metasound::FTrigger> *param_2)

{
  FOutputVertexInterfaceDeclarationBuilder local_38;
  
  FOutputVertexInterface(this);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_1);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FOutputDataVertex *)param_2);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

