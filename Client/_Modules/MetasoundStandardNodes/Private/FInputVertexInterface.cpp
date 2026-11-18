// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 14

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>_> @ 14afe0f70

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FAudioBuffer> *param_1,
          TInputDataVertex<float> *param_2)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_> @ 14afe1020

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTrigger> *param_1,
          TInputDataVertex<Metasound::FTrigger> *param_2,TInputDataVertex<Metasound::FTime> *param_3
          ,TInputDataVertex<Metasound::FTime> *param_4,TInputDataVertex<float> *param_5,
          TInputDataVertex<Metasound::FTime> *param_6,TInputDataVertex<float> *param_7,
          TInputDataVertex<float> *param_8,TInputDataVertex<float> *param_9,
          TInputDataVertex<bool> *param_10)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,10,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_4)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_5)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_6)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_7)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_8)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_9)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add
            (&local_38,(FInputDataVertex *)param_10);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>,Metasound::TInputDataVertex<bool>_> @ 14afe1170

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>,Metasound::TInputDataVertex<bool>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTrigger> *param_1,
          TInputDataVertex<Metasound::FTime> *param_2,TInputDataVertex<Metasound::FTime> *param_3,
          TInputDataVertex<float> *param_4,TInputDataVertex<float> *param_5,
          TInputDataVertex<bool> *param_6,TInputDataVertex<bool> *param_7)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,7,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_4)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_5)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_6)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_7)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_> @ 14b045670

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
          (FInputVertexInterface *this,TInputDataVertex<float> *param_1,
          TInputDataVertex<float> *param_2,TInputDataVertex<float> *param_3)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_> @ 14b045740

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FAudioBuffer> *param_1,
          TInputDataVertex<float> *param_2,TInputDataVertex<float> *param_3)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<int>,Metasound::TInputDataVertex<int>_> @ 14b09be70

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<int>,Metasound::TInputDataVertex<int>_>
          (FInputVertexInterface *this,TInputDataVertex<int> *param_1,TInputDataVertex<int> *param_2
          )

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_> @ 14b09bf20

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
          (FInputVertexInterface *this,TInputDataVertex<float> *param_1,
          TInputDataVertex<float> *param_2)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>_> @ 14b09bfd0

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FAudioBuffer> *param_1,
          TInputDataVertex<Metasound::FAudioBuffer> *param_2)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>_> @ 14b09c080

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTime> *param_1,
          TInputDataVertex<Metasound::FTime> *param_2)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>_> @ 14b09c130

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTime> *param_1,
          TInputDataVertex<float> *param_2)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_> @ 14b1183e0

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FAudioBuffer> *param_1,
          TInputDataVertex<Metasound::FAudioBuffer> *param_2,TInputDataVertex<float> *param_3,
          TInputDataVertex<bool> *param_4)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,4,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_4)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<int>_> @ 14b1bce40

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<int>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTrigger> *param_1,
          TInputDataVertex<Metasound::FTrigger> *param_2,TInputDataVertex<int> *param_3)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>_> @ 14b218630

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTrigger> *param_1,
          TInputDataVertex<Metasound::FTrigger> *param_2,TInputDataVertex<Metasound::FTime> *param_3
          )

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<bool>_> @ 14b218700

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<bool>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTrigger> *param_1,
          TInputDataVertex<Metasound::FTrigger> *param_2,TInputDataVertex<bool> *param_3)

{
  FInputVertexInterfaceDeclarationBuilder local_38;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_38,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)this,
             &this->SubInterfaces);
  if ((local_38.Vertices)->ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,3,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
               &(local_38.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_1)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_2)
  ;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_38,(FInputDataVertex *)param_3)
  ;
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

