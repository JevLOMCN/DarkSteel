// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FWaveAsset>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputConstructorVertex<bool>_> @ 14b304ff0

FInputVertexInterface * __thiscall
Metasound::FInputVertexInterface::
FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FWaveAsset>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputConstructorVertex<bool>_>
          (FInputVertexInterface *this,TInputDataVertex<Metasound::FTrigger> *param_1,
          TInputDataVertex<Metasound::FTrigger> *param_2,
          TInputDataVertex<Metasound::FWaveAsset> *param_3,
          TInputDataVertex<Metasound::FTime> *param_4,TInputDataVertex<float> *param_5,
          TInputDataVertex<bool> *param_6,TInputDataVertex<Metasound::FTime> *param_7,
          TInputDataVertex<Metasound::FTime> *param_8,TInputConstructorVertex<bool> *param_9)

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
  if ((local_38.Vertices)->ArrayMax < 9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,9,&(local_38.Vertices)->AllocatorInstance,(local_38.Vertices)->ArrayNum,
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
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_38);
  return this;
}

