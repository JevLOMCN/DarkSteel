// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 41

// TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_> @ 14ad922d0

TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_>::
TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_>
          (TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_> *this,
          initializer_list<Audio::FParameterInterface::FClassOptions> *param_1)

{
  FClassOptions *_Src;
  FClassOptions *pFVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pFVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(((longlong)pFVar1 - (longlong)_Src) / 0x14);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x14);
  return this;
}

// operator= @ 14ad9ede0

TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_>
           *this,initializer_list<Audio::FParameterInterface::FEnvironmentVariable> *param_1)

{
  int *piVar1;
  FEnvironmentVariable *pFVar2;
  int iVar3;
  
  DestructItems<Audio::FParameterInterface::FEnvironmentVariable,int>
            ((FEnvironmentVariable *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  pFVar2 = param_1->_First;
  iVar3 = (int)(((longlong)param_1->_Last - (longlong)pFVar2) / 0x38);
  this->ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar3,*piVar1,&this->AllocatorInstance,iVar3,piVar1);
  ConstructItems<Audio::FParameterInterface::FEnvironmentVariable,Audio::FParameterInterface::FEnvironmentVariable,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar3);
  return this;
}

// operator= @ 14ad9eea0

TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *this,
          TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 5);
    }
  }
  return this;
}

// operator= @ 14ad9ef40

TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *this,
          initializer_list<Audio::FParameterInterface::FOutput> *param_1)

{
  int *piVar1;
  FOutput *pFVar2;
  longlong lVar3;
  int iVar4;
  
  DestructItems<Audio::FParameterInterface::FOutput,int>
            ((FOutput *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  pFVar2 = param_1->_First;
  lVar3 = (longlong)param_1->_Last - (longlong)pFVar2;
  lVar3 = lVar3 / 0x12 + (lVar3 >> 0x3f);
  iVar4 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  this->ArrayNum = iVar4;
  if ((iVar4 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x48,8,iVar4,*piVar1,&this->AllocatorInstance,iVar4,piVar1);
  ConstructItems<Audio::FParameterInterface::FOutput,Audio::FParameterInterface::FOutput,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar4);
  return this;
}

// operator= @ 14ad9f000

TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *this,
          TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAnalyzerAddress *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FAnalyzerAddress *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<Metasound::Frontend::FAnalyzerAddress,Metasound::Frontend::FAnalyzerAddress,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// RemoveAtSwapImpl @ 14adcecd0

void __thiscall
TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  FScriptContainerElement *pFVar1;
  FMetasoundFrontendLiteral *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FMetasoundFrontendLiteral *)(pFVar1 + (longlong)param_1 * 0x68);
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x68,(longlong)iVar2 * 0x68);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14adced50

void __thiscall
TArray<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  
  pFVar1 = (this->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 8,
            (longlong)iVar3 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// CopyToEmpty<FMetasoundFrontendVertexLiteral,int> @ 14add6660

void __thiscall
TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FMetasoundFrontendVertexLiteral,int>
          (TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_> *this,
          FMetasoundFrontendVertexLiteral *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x68,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FMetasoundFrontendVertexLiteral,FMetasoundFrontendVertexLiteral,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID> @ 14add9890

int __thiscall
TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>
          (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *this,
          FIsClassWithID *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0xf8) {
    pFVar3 = pFVar1;
    do {
      if ((((param_1->ClassID).A == *(uint *)(pFVar3 + 8) &&
           (param_1->ClassID).D == *(uint *)(pFVar3 + 0x14)) &&
          (param_1->ClassID).C == *(uint *)(pFVar3 + 0x10)) &&
          (param_1->ClassID).B == *(uint *)(pFVar3 + 0xc)) {
        lVar2 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar3 - (longlong)pFVar1),8
                      ) + ((longlong)pFVar3 - (longlong)pFVar1);
        return (int)(lVar2 >> 7) - (int)(lVar2 >> 0x3f);
      }
      pFVar3 = pFVar3 + 0xf8;
    } while (pFVar3 != pFVar1 + (longlong)this->ArrayNum * 0xf8);
  }
  return -1;
}

// IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo> @ 14add9930

int __thiscall
TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
          (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *this,
          FIsClassWithNodeInfo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar4 = pFVar2;
  while( true ) {
    if (pFVar4 == pFVar2 + (longlong)iVar1 * 0x90) {
      return -1;
    }
    bVar3 = Metasound::Frontend::NodeClassRegistryKey::IsEqual
                      (&param_1->NodeInfo,(FMetasoundFrontendClassMetadata *)(pFVar4 + 0x18));
    if (bVar3) break;
    pFVar4 = pFVar4 + 0x90;
  }
  return (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x90);
}

// IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo> @ 14add99c0

int __thiscall
TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>
          (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *this,
          FIsClassWithNodeInfo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar2;
  while( true ) {
    if (pFVar5 == pFVar2 + (longlong)iVar1 * 0xf8) {
      return -1;
    }
    bVar3 = Metasound::Frontend::NodeClassRegistryKey::IsEqual
                      (&param_1->NodeInfo,(FMetasoundFrontendClassMetadata *)(pFVar5 + 0x18));
    if (bVar3) break;
    pFVar5 = pFVar5 + 0xf8;
  }
  lVar4 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar5 - (longlong)pFVar2),8) +
          ((longlong)pFVar5 - (longlong)pFVar2);
  return (int)(lVar4 >> 7) - (int)(lVar4 >> 0x3f);
}

// IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey> @ 14add9a50

int __thiscall
TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
          (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *this,
          FIsClassWithNodeRegistryKey *param_1)

{
  EMetasoundFrontendClassType EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FNodeClassRegistryKey *pFVar4;
  FScriptContainerElement *pFVar5;
  FNodeClassRegistryKey local_38;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar2 = this->ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar2 * 0x90) {
    EVar1 = (param_1->RegistryKey).Type;
    pFVar5 = pFVar3;
    do {
      pFVar4 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
                         (&local_38,(FMetasoundFrontendClassMetadata *)(pFVar5 + 0x18));
      if ((((EVar1 == pFVar4->Type) &&
           ((param_1->RegistryKey).ClassName.Namespace == (pFVar4->ClassName).Namespace)) &&
          ((param_1->RegistryKey).ClassName.Name == (pFVar4->ClassName).Name)) &&
         ((((param_1->RegistryKey).ClassName.Variant == (pFVar4->ClassName).Variant &&
           ((param_1->RegistryKey).Version.Major == (pFVar4->Version).Major)) &&
          ((param_1->RegistryKey).Version.Minor == (pFVar4->Version).Minor)))) {
        return (int)(((longlong)pFVar5 - (longlong)pFVar3) / 0x90);
      }
      pFVar5 = pFVar5 + 0x90;
    } while (pFVar5 != pFVar3 + (longlong)iVar2 * 0x90);
  }
  return -1;
}

// IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey> @ 14add9b30

int __thiscall
TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_>::
IndexOfByPredicate<Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>
          (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *this,
          FIsClassWithNodeRegistryKey *param_1)

{
  EMetasoundFrontendClassType EVar1;
  int iVar2;
  FMetasoundFrontendGraphClass *pFVar3;
  FNodeClassRegistryKey *pFVar4;
  longlong lVar5;
  FMetasoundFrontendGraphClass *pFVar6;
  FNodeClassRegistryKey local_38;
  
  pFVar3 = (FMetasoundFrontendGraphClass *)(this->AllocatorInstance).Data;
  iVar2 = this->ArrayNum;
  if (pFVar3 != pFVar3 + iVar2) {
    EVar1 = (param_1->RegistryKey).Type;
    pFVar6 = pFVar3;
    do {
      pFVar4 = Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar6);
      if ((((EVar1 == pFVar4->Type) &&
           ((param_1->RegistryKey).ClassName.Namespace == (pFVar4->ClassName).Namespace)) &&
          ((param_1->RegistryKey).ClassName.Name == (pFVar4->ClassName).Name)) &&
         ((((param_1->RegistryKey).ClassName.Variant == (pFVar4->ClassName).Variant &&
           ((param_1->RegistryKey).Version.Major == (pFVar4->Version).Major)) &&
          ((param_1->RegistryKey).Version.Minor == (pFVar4->Version).Minor)))) {
        lVar5 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pFVar6 - (longlong)pFVar3),8
                      ) + ((longlong)pFVar6 - (longlong)pFVar3);
        return (int)(lVar5 >> 7) - (int)(lVar5 >> 0x3f);
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar3 + iVar2);
  }
  return -1;
}

// Remove @ 14ae04960

int __thiscall
TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *this,
          FMetasoundFrontendVersion *param_1)

{
  FMetasoundFrontendVersion *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  
  pFVar1 = (FMetasoundFrontendVersion *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar8 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (FName *)(this->AllocatorInstance).Data;
  iVar12 = 0;
  if (((*pFVar2 == param_1->Name) && (pFVar2[1].ComparisonIndex.Value == (param_1->Number).Major))
     && (pFVar2[1].Number == (param_1->Number).Minor)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  lVar9 = 0;
  iVar10 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar11 = iVar10 + 1;
    if (lVar9 < lVar8) {
      puVar6 = &pFVar2[lVar9 * 2 + 1].Number;
      do {
        if (((*(FName *)(puVar6 + -3) == param_1->Name) &&
            ((((FName *)(puVar6 + -1))->ComparisonIndex).Value == (param_1->Number).Major)) &&
           (*puVar6 == (param_1->Number).Minor)) {
          bVar7 = 0;
        }
        else {
          bVar7 = 1;
        }
        if (bVar13 != bVar7) break;
        iVar11 = iVar11 + 1;
        lVar9 = lVar9 + 1;
        puVar6 = puVar6 + 4;
      } while (lVar9 < lVar8);
    }
    if (bVar13 != 0) {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 2,pFVar2 + (longlong)iVar10 * 2,
                (longlong)(iVar11 - iVar10) << 4);
      }
      iVar12 = iVar12 + (iVar11 - iVar10);
    }
    bVar13 = bVar13 ^ 1;
    iVar10 = iVar11;
    if (lVar8 <= lVar9) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 14ae04b70

void __thiscall
TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x50;
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            (*(FMetasoundFrontendClassInputDefault **)(_Dst + 0x38),*(int *)(_Dst + 0x40));
  if (*(void **)(_Dst + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x38));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x50,(longlong)iVar2 * 0x50);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ae04c10

void __thiscall
TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x90;
  if (*(void **)(_Dst + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x70));
  }
  if (*(void **)(_Dst + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x60));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)(_Dst + 0x50),*(int *)(_Dst + 0x58));
  if (*(void **)(_Dst + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x50));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x90,(longlong)iVar2 * 0x90);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ae04cd0

void __thiscall
TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x48;
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            (*(FMetasoundFrontendClassInputDefault **)(_Dst + 0x38),
             *(int *)(pFVar1 + (longlong)param_1 * 0x48 + 0x40));
  if (*(void **)(_Dst + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x38));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x48,(longlong)iVar2 * 0x48);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ae04d70

void __thiscall
TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FMetasoundFrontendNode *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FMetasoundFrontendNode *)(pFVar1 + (longlong)param_1 * 0x88);
  FMetasoundFrontendNode::~FMetasoundFrontendNode(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x88,(longlong)iVar2 * 0x88);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ae04e00

void __thiscall
TArray<FMetasoundFrontendVariable,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMetasoundFrontendVariable,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0xb8;
  if (*(void **)(_Dst + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0xa8));
  }
  if (*(void **)(_Dst + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x98));
  }
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral((FMetasoundFrontendLiteral *)(_Dst + 0x10));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0xb8,(longlong)iVar2 * 0xb8);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ae04eb0

void __thiscall
TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x68;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral((FMetasoundFrontendLiteral *)(_Dst + 0x10));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x68,(longlong)iVar2 * 0x68);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// operator=<FGuid_const_,int> @ 14ae0d0a0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=<FGuid_const_,int>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,TArrayView<FGuid_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FGuid *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  }
  return this;
}

// InsertUninitializedImpl @ 14ae3ecf0

void __thiscall
TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x14;
  memmove(_Src + (longlong)param_2 * 0x14,_Src,(longlong)(iVar1 - param_1) * 0x14);
  return;
}

// InsertUninitializedImpl @ 14ae3ed70

void __thiscall
TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xf0,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0xf0;
  memmove(_Src + (longlong)param_2 * 0xf0,_Src,(longlong)(iVar1 - param_1) * 0xf0);
  return;
}

// InsertUninitializedImpl @ 14ae3edf0

void __thiscall
TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14ae3ee70

void __thiscall
TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14ae3eef0

void __thiscall
TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14ae3ef70

void __thiscall
TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// RemoveAt @ 14ae42980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x28,(longlong)iVar4 * 0x28);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14ae42a60

void __thiscall
TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2
          )

{
  int iVar1;
  FMetasoundFrontendClass *_Dst;
  
  _Dst = (FMetasoundFrontendClass *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x90);
  DestructItems<FMetasoundFrontendClass,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x90);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14ae457b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar5,(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// Append<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 14ae4b080

void __thiscall
TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Append<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int iVar1;
  ForElementType<Metasound::FFrontendQueryEntry> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                      (0xb0,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      param_1 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      this = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
              ((void *)((longlong)iVar5 * 0xb0 + (longlong)this),(FFrontendQueryEntry *)param_1,
               iVar1);
  }
  return;
}

// operator= @ 14ae5c950

TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FMetaSoundClassVertexInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
    }
  }
  return this;
}

// InsertUninitializedImpl @ 14ae7a110

void __thiscall
TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0xe0;
  memmove(_Src + (longlong)param_2 * 0xe0,_Src,(longlong)(iVar1 - param_1) * 0xe0);
  return;
}

// RemoveAtImpl @ 14ae87230

void __thiscall
TArray<Metasound::Frontend::FInterfaceRegistryTransaction,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Metasound::Frontend::FInterfaceRegistryTransaction,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FInterfaceRegistryTransaction *_Dst;
  
  _Dst = (FInterfaceRegistryTransaction *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<Metasound::Frontend::FInterfaceRegistryTransaction,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14ae872b0

void __thiscall
TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<Metasound::Frontend::FNodeClassRegistry::FActiveRegistrationTaskInfo,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  puVar3 = *(undefined8 **)(pFVar2 + (longlong)param_1 * 0x28 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x28,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x28,
            (longlong)iVar4 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14ae87360

void __thiscall
TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x50;
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            (*(FMetasoundFrontendClassInputDefault **)(_Dst + 0x38),*(int *)(_Dst + 0x40));
  if (*(void **)(_Dst + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x38));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x50,(longlong)iVar2 * 0x50);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// Reset @ 14ae887c0

void __thiscall
TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Reset(TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  ForElementType<Metasound::FFrontendQueryEntry> FVar3;
  ForElementType<Metasound::FFrontendQueryEntry> FVar4;
  
  if (-1 < param_1) {
    FVar3 = (this->AllocatorInstance).SecondaryData;
    piVar1 = &this->ArrayMax;
    piVar2 = &this->ArrayNum;
    if (*piVar1 < param_1) {
      FVar4 = (ForElementType<Metasound::FFrontendQueryEntry>)this;
      if (FVar3 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar4 = FVar3;
      }
      DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)FVar4,*piVar2);
      *piVar2 = 0;
      if (*piVar1 != param_1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                  (0xb0,8,param_1,&this->AllocatorInstance,0,piVar1);
      }
    }
    else {
      if (FVar3 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        this = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)FVar3;
      }
      DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)this,*piVar2);
      *piVar2 = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// operator= @ 14af42f60

TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *this,
          TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FMetasoundParameterStorageWrapper,FMetasoundParameterStorageWrapper,int>
              ((this->AllocatorInstance).Data,(FMetasoundParameterStorageWrapper *)pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14af43000

TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *this,
          TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FSendAddress *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FSendAddress *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<Metasound::FSendAddress,Metasound::FSendAddress,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// operator= @ 14af43090

TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *this,
          TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<Metasound::FTime,Metasound::FTime,int>
              ((this->AllocatorInstance).Data,(FTime *)pFVar2,iVar1);
  }
  return this;
}

// Init @ 14afa9c90

void __thiscall
TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>::Init
          (TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_> *this,FNone *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (this->AllocatorInstance).Data;
      if (((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

