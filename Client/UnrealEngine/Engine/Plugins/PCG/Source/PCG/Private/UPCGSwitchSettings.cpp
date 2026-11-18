// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 26

// StaticClass @ 1499001c0

UClass * __cdecl UPCGSwitchSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSwitchSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSwitchSettings",
               &Z_Registration_Info_UClass_UPCGSwitchSettings.InnerSingleton,
               StaticRegisterNativesUPCGSwitchSettings,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSwitchSettings>,
               InternalVTableHelperCtorCaller<UPCGSwitchSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSwitchSettings.InnerSingleton;
}

// UPCGSwitchSettings @ 1499c52f0

UPCGSwitchSettings * __thiscall
UPCGSwitchSettings::UPCGSwitchSettings(UPCGSwitchSettings *this,FVTableHelper *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  pTVar1 = &this->IntOptions;
  this->SelectionMode = Integer;
  this->_padding_ = (longlong)&___7UPCGSwitchSettings__6B_;
  this->IntegerSelection = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->IntOptions).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&pTVar1->AllocatorInstance,1,&(this->IntOptions).ArrayMax);
  *(undefined4 *)(pTVar1->AllocatorInstance).Data = 0;
  (this->StringSelection).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringSelection).Data.ArrayNum = 0;
  (this->StringSelection).Data.ArrayMax = 0;
  (this->StringOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringOptions).ArrayNum = 0;
  (this->StringOptions).ArrayMax = 0;
  (this->EnumSelection).Class.field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->EnumSelection).Value = 0;
  *(undefined8 *)&this->EnumValueToPinLabelMapping = 0;
  *(undefined8 *)&(this->EnumValueToPinLabelMapping).field_0x8 = 0;
  *(undefined8 *)&(this->EnumValueToPinLabelMapping).field_0x20 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x28 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x34 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EnumValueToPinLabelMapping).field_0x40 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x48 = 0;
  (this->CachedPinLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPinLabels).ArrayNum = 0;
  (this->CachedPinLabels).ArrayMax = 0;
  return this;
}

// UPCGSwitchSettings @ 1499c5400

UPCGSwitchSettings * __thiscall
UPCGSwitchSettings::UPCGSwitchSettings(UPCGSwitchSettings *this,FObjectInitializer *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  pTVar1 = &this->IntOptions;
  this->SelectionMode = Integer;
  this->_padding_ = (longlong)&___7UPCGSwitchSettings__6B_;
  this->IntegerSelection = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->IntOptions).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&pTVar1->AllocatorInstance,1,&(this->IntOptions).ArrayMax);
  *(undefined4 *)(pTVar1->AllocatorInstance).Data = 0;
  (this->StringSelection).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringSelection).Data.ArrayNum = 0;
  (this->StringSelection).Data.ArrayMax = 0;
  (this->StringOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringOptions).ArrayNum = 0;
  (this->StringOptions).ArrayMax = 0;
  (this->EnumSelection).Class.field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->EnumSelection).Value = 0;
  *(undefined8 *)&this->EnumValueToPinLabelMapping = 0;
  *(undefined8 *)&(this->EnumValueToPinLabelMapping).field_0x8 = 0;
  *(undefined8 *)&(this->EnumValueToPinLabelMapping).field_0x20 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x28 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x34 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EnumValueToPinLabelMapping).field_0x40 = 0;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x48 = 0;
  (this->CachedPinLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPinLabels).ArrayNum = 0;
  (this->CachedPinLabels).ArrayMax = 0;
  return this;
}

// ~UPCGSwitchSettings @ 1499c7120

void __thiscall UPCGSwitchSettings::~UPCGSwitchSettings(UPCGSwitchSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSwitchSettings__6B_;
  pFVar1 = (this->CachedPinLabels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EnumValueToPinLabelMapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnumValueToPinLabelMapping);
  DestructItems<FString,int>
            ((FString *)(this->StringOptions).AllocatorInstance.Data,(this->StringOptions).ArrayNum)
  ;
  pFVar1 = (this->StringOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StringSelection).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGControlFlowSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CacheEnumValueToPinLabelsMapping @ 1499d3e40

void __thiscall UPCGSwitchSettings::CacheEnumValueToPinLabelsMapping(UPCGSwitchSettings *this)

{
  undefined1 *puVar1;
  TMap<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_> *this_00;
  UEnum *pUVar2;
  code *pcVar3;
  bool bVar4;
  FText *this_01;
  FName *pFVar5;
  TTuple<FName,__int64> *pTVar6;
  int iVar7;
  int iVar8;
  TPairInitializer<__int64_&&,FName_&&> local_res8;
  FName local_res18;
  FName local_res20;
  FString local_68;
  FName **local_58;
  FName *local_50;
  longlong *local_48 [2];
  TTuple<FName,__int64> local_38;
  
  this_00 = &this->EnumValueToPinLabelMapping;
  bVar4 = 1 < *(int *)&(this->EnumValueToPinLabelMapping).field_0x48;
  if (!bVar4) {
    TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->EnumValueToPinLabelMapping).field_0xc;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x34 = 0;
  iVar8 = *(int *)&(this->EnumValueToPinLabelMapping).field_0x2c;
  *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->EnumValueToPinLabelMapping).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->EnumValueToPinLabelMapping).field_0x48 = 1;
    TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>
            *)this_00);
  }
  if (this->SelectionMode == Enum) {
    pUVar2 = (this->EnumSelection).Class.field0_0x0.DebugPtr;
    for (iVar8 = 0; (pUVar2 != (UEnum *)0x0 && (iVar8 < (pUVar2->Names).NumValues + -1));
        iVar8 = iVar8 + 1) {
      this_01 = (FText *)(**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,local_48,iVar8);
      FText::BuildSourceString(this_01,&local_68);
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      iVar7 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      pFVar5 = ::FName::FName(&local_res20,iVar7,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pUVar2 = (this->EnumSelection).Class.field0_0x0.DebugPtr;
      local_res18 = *pFVar5;
      if (((iVar8 < 0) || ((pUVar2->Names).NumValues <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar6 = UEnum::FNameData::operator[](&pUVar2->Names,&local_38,iVar8);
      local_res8.Value = *(FName **)&pTVar6->field_0x8;
      local_58 = &local_res8.Value;
      local_50 = &local_res18;
      TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<__int64_&&,FName_&&>_>
                ((TSet<TTuple<__int64,FName>,TDefaultMapHashableKeyFuncs<__int64,FName,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)&local_58);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pUVar2 = (this->EnumSelection).Class.field0_0x0.DebugPtr;
    }
  }
  return;
}

// CachePinLabels @ 1499d41b0

void __thiscall UPCGSwitchSettings::CachePinLabels(UPCGSwitchSettings *this)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  FPCGPinProperties *local_30;
  int local_28;
  
  pTVar2 = &this->CachedPinLabels;
  piVar1 = &(this->CachedPinLabels).ArrayMax;
  (this->CachedPinLabels).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x458))(this,&local_30);
  lVar5 = plVar8[1];
  puVar10 = (undefined8 *)*plVar8;
  puVar9 = puVar10 + (longlong)(int)lVar5 * 6;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar10 == puVar9) break;
    local_38 = *puVar10;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->CachedPinLabels).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    puVar10 = puVar10 + 6;
    (this->CachedPinLabels).ArrayNum = iVar7 + 1;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
  }
  DestructItems<FPCGPinProperties,int>(local_30,local_28);
  if (local_30 != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// CreateElement @ 1499dc610

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSwitchSettings::CreateElement
          (UPCGSwitchSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPCGSwitchElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSwitchElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAdditionalTitleInformation @ 1499f3bf0

FString * __thiscall
UPCGSwitchSettings::GetAdditionalTitleInformation
          (UPCGSwitchSettings *this,FString *__return_storage_ptr__)

{
  EPCGControlFlowSelectionMode EVar1;
  FScriptContainerElement *pFVar2;
  UEnum *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FString *pFVar7;
  FName *pFVar8;
  FText *this_00;
  longlong lVar9;
  int iVar10;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FString local_168;
  FString local_158;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FName local_d0;
  FName *local_c8;
  undefined4 local_c0;
  FName local_b8;
  FName local_b0;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FString local_48;
  FString local_38;
  
  EVar1 = this->SelectionMode;
  if (EVar1 == Integer) {
    pFVar7 = FText::ToString(&PCGControlFlowConstants::SubtitleInt);
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    lVar9 = (longlong)local_158.Data.ArrayNum;
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    if (local_158.Data.ArrayNum == 0) {
      local_158.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)&local_158,
                 local_158.Data.ArrayNum,&local_158.Data.ArrayMax);
      memcpy(local_158.Data.AllocatorInstance.Data,pFVar2,lVar9 * 2);
    }
    pcVar4 = *(code **)(this->_padding_ + 1000);
    pFVar8 = ::FName::FName(&local_b0,0x10,L"IntegerSelection",FNAME_Add);
    cVar6 = (*pcVar4)(this,*pFVar8);
    if (cVar6 == '\0') {
      FStringFormatArg::FStringFormatArg(&local_68,this->IntegerSelection);
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_128.AllocatorInstance.Data,&local_68,1);
      ::FString::FormatImpl(&local_e8,L": {0}",&local_128);
      iVar10 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_158,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar10);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
      if ((FStringFormatArg *)local_128.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_158.Data.ArrayNum;
    local_168.Data.ArrayMax = local_158.Data.ArrayMax;
LAB_1499f4133:
    (__return_storage_ptr__->Data).ArrayMax = local_168.Data.ArrayMax;
  }
  else {
    if (EVar1 == Enum) {
      pUVar3 = (this->EnumSelection).Class.field0_0x0.DebugPtr;
      if (pUVar3 != (UEnum *)0x0) {
        local_res8 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res8,&local_118);
        pcVar4 = *(code **)(this->_padding_ + 0x3e0);
        pFVar8 = ::FName::FName(&local_res20,0xd,L"EnumSelection",FNAME_Add);
        local_d8 = *pFVar8;
        pFVar8 = ::FName::FName(&local_b8,5,L"Value",FNAME_Add);
        local_d0 = *pFVar8;
        local_c8 = &local_d8;
        local_c0 = 2;
        cVar6 = (*pcVar4)(this,&local_c8);
        if (cVar6 == '\0') {
          pFVar8 = TMapBase<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_>
                   ::Find((TMapBase<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_>
                           *)&this->EnumValueToPinLabelMapping,(this->EnumSelection).Value);
          if (pFVar8 != (FName *)0x0) {
            pFVar7 = ::FName::ToString(pFVar8,&local_38);
            FStringFormatArg::FStringFormatArg(&local_88,pFVar7);
            local_138.ArrayNum = 1;
            local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_138.AllocatorInstance.Data,&local_88,1);
            ::FString::FormatImpl(&local_f8,L": {0}",&local_138);
            iVar10 = local_f8.Data.ArrayNum + -1;
            if (local_f8.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            ::FString::AppendChars
                      (&local_118,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar10);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
            if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_138.AllocatorInstance.Data);
            }
            if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
            }
          }
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             local_118.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_118.Data.ArrayNum;
        local_168.Data.ArrayMax = local_118.Data.ArrayMax;
        goto LAB_1499f4133;
      }
      this_00 = &PCGControlFlowConstants::SubtitleEnum;
    }
    else {
      if (EVar1 == String) {
        pFVar7 = FText::ToString(&PCGControlFlowConstants::SubtitleString);
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        lVar9 = (longlong)local_168.Data.ArrayNum;
        pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
        if (local_168.Data.ArrayNum == 0) {
          local_168.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_168.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
                     local_168.Data.ArrayNum,&local_168.Data.ArrayMax);
          memcpy(local_168.Data.AllocatorInstance.Data,pFVar2,lVar9 * 2);
        }
        pcVar4 = *(code **)(this->_padding_ + 1000);
        pFVar8 = ::FName::FName(&local_res18,0xf,L"StringSelection",FNAME_Add);
        cVar6 = (*pcVar4)(this,*pFVar8);
        if (cVar6 == '\0') {
          pFVar7 = ::FString::FString(&local_48,&this->StringSelection);
          FStringFormatArg::FStringFormatArg(&local_a8,pFVar7);
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_148.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_148.AllocatorInstance,1,&local_148.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_148.AllocatorInstance.Data,&local_a8,1);
          ::FString::FormatImpl(&local_108,L": {0}",&local_148);
          iVar10 = local_108.Data.ArrayNum + -1;
          if (local_108.Data.ArrayNum == 0) {
            iVar10 = 0;
          }
          ::FString::AppendChars(&local_168,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar10)
          ;
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
          if ((FStringFormatArg *)local_148.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_148.AllocatorInstance.Data);
          }
          if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
          }
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             local_168.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_168.Data.ArrayNum;
        goto LAB_1499f4133;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGSwitch.cpp"
                         ,0xa9,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      this_00 = &PCGSwitchConstants::NodeTitleBase;
    }
    pFVar7 = FText::ToString(this_00);
    ::FString::FString(__return_storage_ptr__,pFVar7);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fc4d0

UClass * __cdecl UPCGSwitchSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSwitchSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSwitchSettings",
               &Z_Registration_Info_UClass_UPCGSwitchSettings.InnerSingleton,
               StaticRegisterNativesUPCGSwitchSettings,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSwitchSettings>,
               InternalVTableHelperCtorCaller<UPCGSwitchSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSwitchSettings.InnerSingleton;
}

// GetSelectedOutputPinIndex @ 1499fced0

int __thiscall UPCGSwitchSettings::GetSelectedOutputPinIndex(UPCGSwitchSettings *this)

{
  EPCGControlFlowSelectionMode EVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  EVar1 = this->SelectionMode;
  if (EVar1 == Integer) {
    pFVar2 = (this->IntOptions).AllocatorInstance.Data;
    iVar3 = (this->IntOptions).ArrayNum;
    if (pFVar2 != pFVar2 + (longlong)iVar3 * 4) {
      pFVar6 = pFVar2;
      do {
        if (*(int *)pFVar6 == this->IntegerSelection) {
          iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar2 >> 2);
          if (iVar5 == -1) {
            iVar5 = iVar3;
          }
          return iVar5;
        }
        pFVar6 = pFVar6 + 4;
      } while (pFVar6 != pFVar2 + (longlong)iVar3 * 4);
    }
    return iVar3;
  }
  if (EVar1 == String) {
    iVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                      (&this->StringOptions,&this->StringSelection);
    if (iVar3 == -1) {
      return (this->StringOptions).ArrayNum;
    }
  }
  else if (EVar1 == Enum) {
    pFVar4 = TMapBase<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_>
             ::Find((TMapBase<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_>
                     *)&this->EnumValueToPinLabelMapping,(this->EnumSelection).Value);
    if ((pFVar4 == (FName *)0x0) ||
       (iVar3 = TArray<FName,TSizedDefaultAllocator<32>_>::IndexOfByKey<FName>
                          (&this->CachedPinLabels,pFVar4), iVar3 == -1)) {
      return *(int *)&(this->EnumValueToPinLabelMapping).field_0x8 -
             *(int *)&(this->EnumValueToPinLabelMapping).field_0x34;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

// GetSelectedPinLabel @ 1499fd1b0

bool __thiscall UPCGSwitchSettings::GetSelectedPinLabel(UPCGSwitchSettings *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  UEnum *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  if ((this->CachedPinLabels).ArrayNum == 0) {
    return false;
  }
  if (this->SelectionMode == Integer) {
    pFVar8 = (this->IntOptions).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)(this->IntOptions).ArrayNum * 4;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 4) {
      if (*(int *)pFVar8 == this->IntegerSelection) goto LAB_1499fd271;
    }
  }
  else if ((this->SelectionMode == String) &&
          (bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                             (&this->StringOptions,&this->StringSelection), bVar3))
  goto LAB_1499fd271;
  if ((((this->SelectionMode != Enum) ||
       (this_00 = (this->EnumSelection).Class.field0_0x0.DebugPtr, this_00 == (UEnum *)0x0)) ||
      (iVar5 = UEnum::GetIndexByValue(this_00,(this->EnumSelection).Value), iVar5 == -1)) ||
     ((((this->EnumSelection).Class.field0_0x0.DebugPtr)->Names).NumValues + -1 <= iVar5)) {
    *param_1 = PCGControlFlowConstants::DefaultPathPinLabel;
    return true;
  }
LAB_1499fd271:
  uVar6 = GetSelectedOutputPinIndex(this);
  if (((int)uVar6 < 0) || ((this->CachedPinLabels).ArrayNum <= (int)uVar6)) {
    return false;
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->CachedPinLabels).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  *param_1 = *(FName *)((this->CachedPinLabels).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  return true;
}

// HasDynamicPins @ 1499fe510

bool __thiscall UPCGSwitchSettings::HasDynamicPins(UPCGSwitchSettings *this)

{
  return true;
}

// HasFlippedTitleLines @ 1499fe570

bool __thiscall UPCGSwitchSettings::HasFlippedTitleLines(UPCGSwitchSettings *this)

{
  return true;
}

// InputPinProperties @ 149a00210

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSwitchSettings::InputPinProperties
          (UPCGSwitchSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FText local_38;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FPCGSwitchElement",L"OutputPinTooltip",
                      L"All input will be forwarded directly to the selected output pin.");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    pFVar5->PinStatus = Required;
    return __return_storage_ptr__;
  }
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// IsPinStaticallyActive @ 149a00c10

bool __thiscall UPCGSwitchSettings::IsPinStaticallyActive(UPCGSwitchSettings *this,FName *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FName local_res8;
  
  if ((char)this->_padding_ == '\0') {
    iVar1 = (this->CachedPinLabels).ArrayNum;
    if (iVar1 == 0) {
      return *param_1 == PCGPinConstants::DefaultInputLabel;
    }
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return *param_1 == *(FName *)(this->CachedPinLabels).AllocatorInstance.Data;
  }
  cVar5 = (**(code **)(this->_padding_ + 0x4f0))();
  if (cVar5 != '\0') {
    return true;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  bVar3 = GetSelectedPinLabel(this,&local_res8);
  if (!bVar3) {
    return false;
  }
  return *param_1 == local_res8;
}

// IsPinUsedByNodeExecution @ 149a00e80

bool __thiscall
UPCGSwitchSettings::IsPinUsedByNodeExecution(UPCGSwitchSettings *this,UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = UPCGPin::IsOutputPin(param_1);
  if (!bVar2) {
    bVar2 = UPCGSettings::IsPinUsedByNodeExecution((UPCGSettings *)this,param_1);
    return bVar2;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x4f0))();
  if ((cVar3 == '\0') && ((this->CachedPinLabels).ArrayNum != 0)) {
    uVar5 = GetSelectedOutputPinIndex(this);
    if ((-1 < (int)uVar5) && ((int)uVar5 < (this->CachedPinLabels).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar5 < (this->CachedPinLabels).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      return (param_1->Properties).Label ==
             *(FName *)((this->CachedPinLabels).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3703635292448620941>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\ControlFlow\\PCGSwitch.cpp"
                       ,0x18d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return true;
}

// IsSwitchDynamic @ 149a01240

bool __thiscall UPCGSwitchSettings::IsSwitchDynamic(UPCGSwitchSettings *this)

{
  code *pcVar1;
  char cVar2;
  FName *pFVar3;
  byte bVar4;
  byte bVar5;
  FName local_res8;
  FName local_38;
  FName local_30;
  FName *local_28;
  undefined4 local_20;
  
  if (this->SelectionMode == Integer) {
    pcVar1 = *(code **)(this->_padding_ + 1000);
    pFVar3 = ::FName::FName(&local_res8,0x10,L"IntegerSelection",FNAME_Add);
    cVar2 = (*pcVar1)(this,*pFVar3);
    bVar5 = 1;
    if (cVar2 != '\0') goto LAB_149a012ae;
  }
  bVar5 = 0;
LAB_149a012ae:
  bVar4 = 0;
  if (this->SelectionMode == String) {
    pcVar1 = *(code **)(this->_padding_ + 1000);
    pFVar3 = ::FName::FName(&local_res8,0xf,L"StringSelection",FNAME_Add);
    cVar2 = (*pcVar1)(this,*pFVar3);
    bVar4 = 0;
    if (cVar2 != '\0') {
      bVar4 = 1;
    }
  }
  if (this->SelectionMode == Enum) {
    pcVar1 = *(code **)(this->_padding_ + 0x3e0);
    pFVar3 = ::FName::FName(&local_res8,0xd,L"EnumSelection",FNAME_Add);
    local_38 = *pFVar3;
    pFVar3 = ::FName::FName(&local_res8,5,L"Value",FNAME_Add);
    local_30 = *pFVar3;
    local_28 = &local_38;
    local_20 = 2;
    cVar2 = (*pcVar1)(this,&local_28);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return (bool)(bVar4 | bVar5);
}

// IsValuePresent @ 149a01550

bool __thiscall UPCGSwitchSettings::IsValuePresent(UPCGSwitchSettings *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (&this->StringOptions,param_1);
  return bVar1;
}

// IsValuePresent @ 149a01570

bool __thiscall UPCGSwitchSettings::IsValuePresent(UPCGSwitchSettings *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->IntOptions).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->IntOptions).ArrayNum * 4;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return true;
}

// IsValuePresent @ 149a015a0

bool __thiscall UPCGSwitchSettings::IsValuePresent(UPCGSwitchSettings *this,long64 param_1)

{
  UEnum *this_00;
  int iVar1;
  
  this_00 = (this->EnumSelection).Class.field0_0x0.DebugPtr;
  if (this_00 != (UEnum *)0x0) {
    iVar1 = UEnum::GetIndexByValue(this_00,param_1);
    if ((iVar1 != -1) &&
       (iVar1 < (((this->EnumSelection).Class.field0_0x0.DebugPtr)->Names).NumValues + -1)) {
      return true;
    }
  }
  return false;
}

// OnOverrideSettingsDuplicatedInternal @ 149a03030

void __thiscall
UPCGSwitchSettings::OnOverrideSettingsDuplicatedInternal(UPCGSwitchSettings *this,bool param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStackX_8 [8];
  undefined8 uStack_38;
  FPCGPinProperties *pFStack_30;
  int iStack_28;
  
  if (!param_1) {
    return;
  }
  pTVar2 = &this->CachedPinLabels;
  piVar1 = &(this->CachedPinLabels).ArrayMax;
  (this->CachedPinLabels).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x458))(this,&pFStack_30);
  lVar5 = plVar8[1];
  puVar10 = (undefined8 *)*plVar8;
  puVar9 = puVar10 + (longlong)(int)lVar5 * 6;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar10 == puVar9) break;
    uStack_38 = *puVar10;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&uStack_38) &&
       ((FScriptContainerElement *)&uStack_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->CachedPinLabels).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    puVar10 = puVar10 + 6;
    (this->CachedPinLabels).ArrayNum = iVar7 + 1;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = uStack_38;
  }
  DestructItems<FPCGPinProperties,int>(pFStack_30,iStack_28);
  if (pFStack_30 != (FPCGPinProperties *)0x0) {
    FMemory::Free(pFStack_30);
  }
  return;
}

// OutputPinProperties @ 149a03ee0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSwitchSettings::OutputPinProperties
          (UPCGSwitchSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  EPCGControlFlowSelectionMode EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  TMap<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  FName *pFVar13;
  FText *pFVar14;
  FPCGDataTypeIdentifier *pFVar15;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar16;
  EFindName EVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint local_res8 [2];
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_res18;
  undefined8 local_res20;
  FString local_140;
  TMap<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_> *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  FName local_100;
  TMap<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_> *local_f8;
  FName local_f0;
  TMap<__int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FName,0>_> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FName local_b8;
  FName local_b0;
  FPCGDataTypeIdentifier local_a8;
  FPCGDataTypeIdentifier local_90;
  FPCGDataTypeIdentifier local_78;
  FPCGDataTypeIdentifier local_60;
  
  iVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EVar2 = this->SelectionMode;
  iVar11 = 0;
  if (EVar2 == Integer) {
    local_res8[0] = (this->IntOptions).ArrayNum;
    uVar12 = (ulonglong)(int)local_res8[0];
    pFVar24 = (this->IntOptions).AllocatorInstance.Data;
    local_res20 = 1;
    local_res10 = pFVar24 + uVar12 * 4;
    while( true ) {
      uVar7 = local_res20;
      pFVar4 = local_res10;
      if ((this->IntOptions).ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (pFVar24 == pFVar4) break;
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_140,*(int *)pFVar24);
      iVar10 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar10 = iVar11;
      }
      pFVar13 = ::FName::FName(&local_b0,iVar10,(wchar_t *)local_140.Data.AllocatorInstance.Data,
                               (EFindName)uVar7);
      local_f0 = *pFVar13;
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar14 = FText::GetEmpty();
      pFVar15 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_78,Any);
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar4 + (longlong)iVar10 * 0x30),&local_f0,pFVar15,true,true
                 ,pFVar14);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)local_res8[0];
      pFVar24 = pFVar24 + 4;
    }
  }
  else if (EVar2 == Enum) {
    if (*(int *)&(this->EnumValueToPinLabelMapping).field_0x8 ==
        *(int *)&(this->EnumValueToPinLabelMapping).field_0x34) {
      CacheEnumValueToPinLabelsMapping(this);
    }
    puVar1 = &(this->EnumValueToPinLabelMapping).field_0x10;
    uStack_124 = 1;
    iVar20 = *(int *)&(this->EnumValueToPinLabelMapping).field_0x28;
    local_130 = &this->EnumValueToPinLabelMapping;
    iVar19 = 0;
    iStack_114 = iVar11;
    if (iVar20 != 0) {
      puVar23 = *(uint **)&(this->EnumValueToPinLabelMapping).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar21 = *puVar23;
      iVar11 = 0;
      iVar10 = 0;
      while (uVar21 == 0) {
        lVar18 = (longlong)iVar10;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar10 + 1;
        if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) {
          iVar19 = *(int *)&(this->EnumValueToPinLabelMapping).field_0x28;
          iStack_114 = iVar20;
          goto LAB_149a040d8;
        }
        uVar21 = puVar23[lVar18 + 1];
      }
      iVar19 = *(int *)&(this->EnumValueToPinLabelMapping).field_0x28;
      uStack_124 = -uVar21 & uVar21;
      uVar12 = (ulonglong)uStack_124 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iStack_114 = iVar11 + -1 + (int)lVar18;
      local_res20 = CONCAT44(local_res20._4_4_,(int)lVar18);
      if (iVar19 < iStack_114) {
        iStack_114 = iVar20;
      }
    }
LAB_149a040d8:
    uVar21 = *(uint *)&(this->EnumValueToPinLabelMapping).field_0x28;
    iStack_108 = *(int *)&(this->EnumValueToPinLabelMapping).field_0x8 -
                 *(int *)&(this->EnumValueToPinLabelMapping).field_0x34;
    uStack_118 = 0xffffffff;
    uVar25 = uVar21 & 0xffffffe0;
    TStack_e0._padding_ = CONCAT44(uStack_124,iVar10);
    TStack_e0.CurrentBitIndex = iStack_114;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar21 >> 5;
    TStack_e0._28_4_ = iStack_114;
    TStack_e0.BaseBitIndex = iVar11;
    uStack_c0 = CONCAT44(uStack_104,iStack_108);
    iStack_128 = iVar10;
    local_120 = puVar1;
    local_110 = iVar11;
    iStack_10c = iStack_114;
    local_f8 = local_130;
    local_e8 = local_130;
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar21 < 0) || (iVar19 < (int)uVar21)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar16 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar16;
    }
    uVar3 = *(uint *)&(this->EnumValueToPinLabelMapping).field_0x28;
    if (uVar21 != uVar3) {
      puVar22 = *(undefined1 **)&(this->EnumValueToPinLabelMapping).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar1;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
      while (uVar21 == 0) {
        lVar18 = (longlong)iVar20;
        uVar25 = uVar25 + 0x20;
        iVar20 = iVar20 + 1;
        uVar21 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_149a041f0;
        uVar21 = *(uint *)(puVar22 + lVar18 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar21 = (int)lVar18 + -1 + uVar25;
      if ((int)uVar3 < (int)uVar21) {
        uVar21 = uVar3;
      }
    }
LAB_149a041f0:
    while( true ) {
      pTVar8 = local_e8;
      if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
        `TSparseArray<TSparseSetElement<TTuple<__int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
      }
      lVar18 = (longlong)TStack_e0.CurrentBitIndex;
      if (((TStack_e0.CurrentBitIndex == uVar21) &&
          (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == local_f8)) break;
      iVar11 = __return_storage_ptr__->ArrayNum;
      lVar5 = *(longlong *)pTVar8;
      if (iVar11 == __return_storage_ptr__->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      pFVar24 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar14 = FText::GetEmpty();
      pFVar15 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_90,Any);
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar24 + (longlong)iVar11 * 0x30),
                 (FName *)((lVar18 * 3 + 1) * 8 + lVar5),pFVar15,true,true,pFVar14);
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    }
  }
  else if (EVar2 == String) {
    iVar10 = (this->StringOptions).ArrayNum;
    uVar12 = (ulonglong)iVar10;
    pFVar24 = (this->StringOptions).AllocatorInstance.Data;
    local_res18 = pFVar24 + uVar12 * 0x10;
    local_res10 = (FScriptContainerElement *)CONCAT44(local_res10._4_4_,iVar10);
    local_res20 = 1;
    while( true ) {
      pFVar4 = local_res18;
      EVar17 = (EFindName)local_res20;
      if ((this->StringOptions).ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        EVar17 = (EFindName)local_res20;
      }
      if (pFVar24 == pFVar4) break;
      iVar10 = *(int *)(pFVar24 + 8) + -1;
      if (*(int *)(pFVar24 + 8) == 0) {
        iVar10 = iVar11;
      }
      pFVar13 = ::FName::FName(&local_b8,iVar10,*(wchar_t **)pFVar24,EVar17);
      local_100 = *pFVar13;
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar14 = FText::GetEmpty();
      pFVar15 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_a8,Any);
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar4 + (longlong)iVar10 * 0x30),&local_100,pFVar15,true,
                 true,pFVar14);
      uVar12 = (ulonglong)local_res10 & 0xffffffff;
      pFVar24 = pFVar24 + 0x10;
    }
  }
  iVar11 = __return_storage_ptr__->ArrayNum;
  if (iVar11 == __return_storage_ptr__->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&__return_storage_ptr__->AllocatorInstance,
                        &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar11 + 1;
  pFVar24 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar14 = FText::GetEmpty();
  pFVar15 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_60,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar24 + (longlong)iVar11 * 0x30),
             &PCGControlFlowConstants::DefaultPathPinLabel,pFVar15,true,true,pFVar14);
  return __return_storage_ptr__;
}

// OutputPinsCanBeDeactivated @ 149a045c0

bool __thiscall UPCGSwitchSettings::OutputPinsCanBeDeactivated(UPCGSwitchSettings *this)

{
  return true;
}

// PostLoad @ 149a04ca0

void __thiscall UPCGSwitchSettings::PostLoad(UPCGSwitchSettings *this)

{
  UPCGSettings::PostLoad((UPCGSettings *)this);
  CachePinLabels(this);
  return;
}

// StaticRegisterNativesUPCGSwitchSettings @ 149a101b0

void __cdecl UPCGSwitchSettings::StaticRegisterNativesUPCGSwitchSettings(void)

{
  return;
}

// UpdateSettings @ 149a11c20

void __thiscall UPCGSwitchSettings::UpdateSettings(UPCGSwitchSettings *this)

{
  CacheEnumValueToPinLabelsMapping(this);
  CachePinLabels(this);
  return;
}

