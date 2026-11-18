// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 16

// StaticStruct @ 14ad789b0

UScriptStruct * __cdecl FMetasoundFrontendGraphClass::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendGraphClass.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendGraphClass.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendGraphClass,(UObject *)pUVar1,
                         L"MetasoundFrontendGraphClass");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendGraphClass.OuterSingleton;
}

// FMetasoundFrontendGraphClass @ 14ad9a870

FMetasoundFrontendGraphClass * __thiscall
FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass(FMetasoundFrontendGraphClass *this)

{
  FGuid FVar1;
  
  this->_padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  FVar1 = Metasound::FrontendInvalidID;
  this->_padding_ = (longlong)&___7FMetasoundFrontendGraphClass__6B_;
  *(FGuid *)&this->_padding_ = FVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PagedGraphs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PagedGraphs).ArrayNum = 0;
  (this->PagedGraphs).ArrayMax = 0;
  (this->PresetOptions).bIsPreset = false;
  *(undefined8 *)&(this->PresetOptions).InputsInheritingDefault.Elements = 0;
  *(undefined8 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x34 = 0;
  (this->PresetOptions).InputsInheritingDefault.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PresetOptions).InputsInheritingDefault.HashSize = 0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~FMetasoundFrontendGraphClass @ 14ad9e4a0

void __thiscall
FMetasoundFrontendGraphClass::~FMetasoundFrontendGraphClass(FMetasoundFrontendGraphClass *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMetasoundFrontendGraphClass__6B_;
  (this->PresetOptions).InputsInheritingDefault.HashSize = 0;
  FVar1 = (this->PresetOptions).InputsInheritingDefault.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PresetOptions).InputsInheritingDefault.Elements);
  DestructItems<FMetasoundFrontendGraph,int>
            ((FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data,
             (this->PagedGraphs).ArrayNum);
  pFVar2 = (this->PagedGraphs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// operator= @ 14ad9f730

FMetasoundFrontendGraphClass * __thiscall
FMetasoundFrontendGraphClass::operator=
          (FMetasoundFrontendGraphClass *this,FMetasoundFrontendGraphClass *param_1)

{
  int *piVar1;
  TArray<FMetasoundFrontendGraph,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMetasoundFrontendGraph *pFVar4;
  longlong lVar5;
  
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  FMetasoundFrontendClassInterface::operator=
            ((FMetasoundFrontendClassInterface *)&this->_padding_,
             (FMetasoundFrontendClassInterface *)&param_1->_padding_);
  pTVar2 = &this->PagedGraphs;
  if (pTVar2 != &param_1->PagedGraphs) {
    DestructItems<FMetasoundFrontendGraph,int>
              ((FMetasoundFrontendGraph *)(pTVar2->AllocatorInstance).Data,
               (this->PagedGraphs).ArrayNum);
    iVar3 = (param_1->PagedGraphs).ArrayNum;
    piVar1 = &(this->PagedGraphs).ArrayMax;
    pFVar4 = (FMetasoundFrontendGraph *)(param_1->PagedGraphs).AllocatorInstance.Data;
    (this->PagedGraphs).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FMetasoundFrontendGraph,FMetasoundFrontendGraph,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  (this->PresetOptions).bIsPreset = (param_1->PresetOptions).bIsPreset;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&(this->PresetOptions).InputsInheritingDefault,
             &(param_1->PresetOptions).InputsInheritingDefault);
  return this;
}

// ContainsGraphPage @ 14ada8150

bool __thiscall
FMetasoundFrontendGraphClass::ContainsGraphPage(FMetasoundFrontendGraphClass *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->PagedGraphs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->PagedGraphs).ArrayNum * 0x40;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)(pFVar1 + 0x3c) && param_1->C == *(uint *)(pFVar1 + 0x38)) &&
          param_1->B == *(uint *)(pFVar1 + 0x34)) && param_1->A == *(uint *)(pFVar1 + 0x30))
      goto LAB_14ada81aa;
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar2);
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14ada81aa:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// FindConstGraph @ 14adb8c70

FMetasoundFrontendGraph * __thiscall
FMetasoundFrontendGraphClass::FindConstGraph(FMetasoundFrontendGraphClass *this,FGuid *param_1)

{
  FMetasoundFrontendGraph *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  
  pFVar1 = (FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PagedGraphs).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->A == (pFVar1->PageID).A && param_1->D == (pFVar1->PageID).D) &&
          param_1->C == (pFVar1->PageID).C) && param_1->B == (pFVar1->PageID).B) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FMetasoundFrontendGraph *)0x0;
}

// FindConstGraphChecked @ 14adb8ce0

FMetasoundFrontendGraph * __thiscall
FMetasoundFrontendGraphClass::FindConstGraphChecked
          (FMetasoundFrontendGraphClass *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendGraph *pFVar3;
  FMetasoundFrontendGraph *pFVar4;
  
  pFVar3 = (FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->PagedGraphs).ArrayNum;
  if (pFVar3 != pFVar4) {
    do {
      if (((param_1->A == (pFVar3->PageID).A && param_1->D == (pFVar3->PageID).D) &&
          param_1->C == (pFVar3->PageID).C) && param_1->B == (pFVar3->PageID).B) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundGraph",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                     ,0x66f,L"");
  if (!bVar2) {
    return (FMetasoundFrontendGraph *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMetasoundFrontendGraph *)(*pcVar1)();
  return pFVar3;
}

// FindGraph @ 14adb9000

FMetasoundFrontendGraph * __thiscall
FMetasoundFrontendGraphClass::FindGraph(FMetasoundFrontendGraphClass *this,FGuid *param_1)

{
  FMetasoundFrontendGraph *pFVar1;
  FMetasoundFrontendGraph *pFVar2;
  
  pFVar1 = (FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PagedGraphs).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->A == (pFVar1->PageID).A && param_1->D == (pFVar1->PageID).D) &&
          param_1->C == (pFVar1->PageID).C) && param_1->B == (pFVar1->PageID).B) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FMetasoundFrontendGraph *)0x0;
}

// FindGraphChecked @ 14adb9070

FMetasoundFrontendGraph * __thiscall
FMetasoundFrontendGraphClass::FindGraphChecked(FMetasoundFrontendGraphClass *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendGraph *pFVar3;
  FMetasoundFrontendGraph *pFVar4;
  
  pFVar3 = (FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->PagedGraphs).ArrayNum;
  if (pFVar3 != pFVar4) {
    do {
      if (((param_1->A == (pFVar3->PageID).A && param_1->D == (pFVar3->PageID).D) &&
          param_1->C == (pFVar3->PageID).C) && param_1->B == (pFVar3->PageID).B) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundGraph",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                     ,0x661,L"");
  if (!bVar2) {
    return (FMetasoundFrontendGraph *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMetasoundFrontendGraph *)(*pcVar1)();
  return pFVar3;
}

// GetConstDefaultGraph @ 14adbd470

FMetasoundFrontendGraph * __thiscall
FMetasoundFrontendGraphClass::GetConstDefaultGraph(FMetasoundFrontendGraphClass *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendGraph *pFVar3;
  FMetasoundFrontendGraph *pFVar4;
  
  pFVar3 = (FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->PagedGraphs).ArrayNum;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if ((((pFVar3->PageID).D == 0 && (pFVar3->PageID).C == 0) && (pFVar3->PageID).B == 0) &&
        (pFVar3->PageID).A == 0) {
      return pFVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundGraph",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                     ,0x66f,L"");
  if (!bVar2) {
    return (FMetasoundFrontendGraph *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMetasoundFrontendGraph *)(*pcVar1)();
  return pFVar3;
}

// GetDefaultGraph @ 14adbdd40

FMetasoundFrontendGraph * __thiscall
FMetasoundFrontendGraphClass::GetDefaultGraph(FMetasoundFrontendGraphClass *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendGraph *pFVar3;
  FMetasoundFrontendGraph *pFVar4;
  
  pFVar3 = (FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->PagedGraphs).ArrayNum;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
    if ((((pFVar3->PageID).D == 0 && (pFVar3->PageID).C == 0) && (pFVar3->PageID).B == 0) &&
        (pFVar3->PageID).A == 0) {
      return pFVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundGraph",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                     ,0x661,L"");
  if (!bVar2) {
    return (FMetasoundFrontendGraph *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMetasoundFrontendGraph *)(*pcVar1)();
  return pFVar3;
}

// InitDefaultGraphPage @ 14adc5190

FMetasoundFrontendGraph * __thiscall
FMetasoundFrontendGraphClass::InitDefaultGraphPage(FMetasoundFrontendGraphClass *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMetasoundFrontendGraph *pFVar5;
  
  if ((this->PagedGraphs).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PagedGraphs.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                       ,0x67f,
                       L"Attempting to initialize default page for graph class with existing graph implementation"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendGraph *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->PagedGraphs).ArrayNum;
  piVar1 = &(this->PagedGraphs).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&(this->PagedGraphs).AllocatorInstance,piVar1);
  }
  (this->PagedGraphs).ArrayNum = iVar4 + 1;
  pFVar5 = (FMetasoundFrontendGraph *)
           ((this->PagedGraphs).AllocatorInstance.Data + (longlong)iVar4 * 0x40);
  DefaultConstructItems<FMetasoundFrontendGraph,int>(pFVar5,1);
  pFVar5->PageID = Metasound::Frontend::DefaultPageID;
  return pFVar5;
}

// IterateGraphPages @ 14adc8580

void __thiscall
FMetasoundFrontendGraphClass::IterateGraphPages
          (FMetasoundFrontendGraphClass *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendGraph_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagedGraphs).ArrayNum;
  pFVar2 = (this->PagedGraphs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->PagedGraphs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendGraph,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x40;
  }
  return;
}

// IterateGraphPages @ 14adc8600

void __thiscall
FMetasoundFrontendGraphClass::IterateGraphPages
          (FMetasoundFrontendGraphClass *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PagedGraphs).ArrayNum;
  pFVar2 = (this->PagedGraphs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->PagedGraphs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendGraph_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x40;
  }
  return;
}

// ResetGraphs @ 14adcf9f0

void __thiscall FMetasoundFrontendGraphClass::ResetGraphs(FMetasoundFrontendGraphClass *this)

{
  int *piVar1;
  
  DestructItems<FMetasoundFrontendGraph,int>
            ((FMetasoundFrontendGraph *)(this->PagedGraphs).AllocatorInstance.Data,
             (this->PagedGraphs).ArrayNum);
  piVar1 = &(this->PagedGraphs).ArrayMax;
  (this->PagedGraphs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->PagedGraphs).AllocatorInstance,0,piVar1);
  }
  return;
}

// FMetasoundFrontendGraphClass @ 14ae1c1e0

FMetasoundFrontendGraphClass * __thiscall
FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass
          (FMetasoundFrontendGraphClass *this,FMetasoundFrontendGraphClass *param_1)

{
  int *piVar1;
  TArray<FMetasoundFrontendGraph,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  FMetasoundFrontendGraph *pFVar4;
  
  FMetasoundFrontendClass::FMetasoundFrontendClass
            ((FMetasoundFrontendClass *)this,(FMetasoundFrontendClass *)param_1);
  pTVar2 = &this->PagedGraphs;
  this->_padding_ = (longlong)&___7FMetasoundFrontendGraphClass__6B_;
  piVar1 = &(this->PagedGraphs).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->PagedGraphs).ArrayNum;
  pFVar4 = (FMetasoundFrontendGraph *)(param_1->PagedGraphs).AllocatorInstance.Data;
  (this->PagedGraphs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FMetasoundFrontendGraph,FMetasoundFrontendGraph,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this_00 = &(this->PresetOptions).InputsInheritingDefault;
  (this->PresetOptions).bIsPreset = (param_1->PresetOptions).bIsPreset;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PresetOptions).InputsInheritingDefault.Elements.field_0x34 = 0;
  (this->PresetOptions).InputsInheritingDefault.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PresetOptions).InputsInheritingDefault.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (this_00,&(param_1->PresetOptions).InputsInheritingDefault);
  return this;
}

