// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149edd4d0

UClass * __cdecl UPCGGraphInputOutputSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInputOutputSettings",
               &Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton,
               StaticRegisterNativesUPCGGraphInputOutputSettings,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphInputOutputSettings>,
               InternalVTableHelperCtorCaller<UPCGGraphInputOutputSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton;
}

// UPCGGraphInputOutputSettings @ 149eeecc0

UPCGGraphInputOutputSettings * __thiscall
UPCGGraphInputOutputSettings::UPCGGraphInputOutputSettings
          (UPCGGraphInputOutputSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGraphInputOutputSettings__6B_;
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  *(undefined8 *)&(this->PinLabels_DEPRECATED).Elements = 0;
  *(undefined8 *)&(this->PinLabels_DEPRECATED).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PinLabels_DEPRECATED).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x30 = 0xffffffff;
  (this->PinLabels_DEPRECATED).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PinLabels_DEPRECATED).HashSize = 0;
  (this->CustomPins_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPins_DEPRECATED).ArrayNum = 0;
  (this->CustomPins_DEPRECATED).ArrayMax = 0;
  this->bHasAddedDefaultPin = false;
  this->bIsInput = false;
  return this;
}

// UPCGGraphInputOutputSettings @ 149eeed50

UPCGGraphInputOutputSettings * __thiscall
UPCGGraphInputOutputSettings::UPCGGraphInputOutputSettings
          (UPCGGraphInputOutputSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGraphInputOutputSettings__6B_;
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  *(undefined8 *)&(this->PinLabels_DEPRECATED).Elements = 0;
  *(undefined8 *)&(this->PinLabels_DEPRECATED).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PinLabels_DEPRECATED).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x30 = 0xffffffff;
  (this->PinLabels_DEPRECATED).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PinLabels_DEPRECATED).HashSize = 0;
  (this->CustomPins_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPins_DEPRECATED).ArrayNum = 0;
  (this->CustomPins_DEPRECATED).ArrayMax = 0;
  this->bHasAddedDefaultPin = false;
  this->bIsInput = false;
  return this;
}

// ~UPCGGraphInputOutputSettings @ 149eeff00

void __thiscall
UPCGGraphInputOutputSettings::~UPCGGraphInputOutputSettings(UPCGGraphInputOutputSettings *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UPCGGraphInputOutputSettings__6B_;
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->CustomPins_DEPRECATED).AllocatorInstance.Data,
             (this->CustomPins_DEPRECATED).ArrayNum);
  pFVar1 = (this->CustomPins_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PinLabels_DEPRECATED).HashSize = 0;
  FVar2 = (this->PinLabels_DEPRECATED).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PinLabels_DEPRECATED).Elements);
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->Pins).AllocatorInstance.Data,(this->Pins).ArrayNum);
  pFVar1 = (this->Pins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// AddPin @ 149ef4200

FPCGPinProperties * __thiscall
UPCGGraphInputOutputSettings::AddPin(UPCGGraphInputOutputSettings *this,FPCGPinProperties *param_1)

{
  int *piVar1;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FPCGPinProperties *pFVar8;
  FName *pFVar9;
  
  pTVar2 = &this->Pins;
  pFVar8 = (FPCGPinProperties *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->Pins).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPCGPinProperties *)(*pcVar4)();
      return pFVar8;
    }
  }
  uVar6 = (this->Pins).ArrayNum;
  piVar1 = &(this->Pins).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->Pins).ArrayNum = uVar6 + 1;
  pFVar9 = (FName *)(pFVar3 + (longlong)(int)uVar6 * 0x30);
  *pFVar9 = param_1->Label;
  *(EPCGPinUsage *)&pFVar9[1].ComparisonIndex.Value = param_1->Usage;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            ((FPCGDataTypeIdentifier *)(pFVar9 + 2),&param_1->AllowedTypes);
  *(bool *)&pFVar9[5].ComparisonIndex.Value = param_1->bAllowMultipleData;
  *(EPCGPinStatus *)((longlong)&pFVar9[5].ComparisonIndex.Value + 1) = param_1->PinStatus;
  *(bool *)((longlong)&pFVar9[5].ComparisonIndex.Value + 2) = param_1->bInvisiblePin;
  *(bool *)((longlong)&pFVar9[5].ComparisonIndex.Value + 3) = param_1->bAllowMultipleConnections;
  FixPinProperties(this);
  uVar7 = 0;
  if ((int)uVar6 < (this->Pins).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPCGPinProperties *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FPCGPinProperties *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x30);
}

// CreateElement @ 149efa5e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGraphInputOutputSettings::CreateElement
          (UPCGGraphInputOutputSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &
         ___7__TIntrusiveReferenceController_VFPCGInputOutputElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGInputOutputElement__6B_;
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

// DefaultInputPinProperties @ 149efb430

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraphInputOutputSettings::DefaultInputPinProperties
          (UPCGGraphInputOutputSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  DefaultPinProperties(this,__return_storage_ptr__,this->bIsInput);
  return __return_storage_ptr__;
}

// DefaultOutputPinProperties @ 149efb460

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraphInputOutputSettings::DefaultOutputPinProperties
          (UPCGGraphInputOutputSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  DefaultPinProperties(this,__return_storage_ptr__,this->bIsInput == false);
  return __return_storage_ptr__;
}

// DefaultPinProperties @ 149efb490

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraphInputOutputSettings::DefaultPinProperties
          (UPCGGraphInputOutputSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1
          )

{
  <lambda_1> <Var1;
  TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_> *pTVar2;
  EPCGDataType EVar3;
  undefined4 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EVar3 = Any;
  if (this->bIsInput == false) {
    pTVar2 = PCGInputOutputPrivate::GetStaticOutLabels();
  }
  else {
    pTVar2 = PCGInputOutputPrivate::GetStaticInLabels();
    EVar3 = Spatial;
  }
  local_res8 = CONCAT31(local_res8._1_3_,param_1);
  <Var1.DefaultPinDataType = EVar3;
  <Var1._0_4_ = local_res8;
  Algo::
  Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGGraphInputOutputSettings::DefaultPinProperties_::__l2::<lambda_1>_>
            (pTVar2,__return_storage_ptr__,<Var1);
  return __return_storage_ptr__;
}

// FixPinProperties @ 149efd250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGGraphInputOutputSettings::FixPinProperties(UPCGGraphInputOutputSettings *this)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  int iVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  FName *this_00;
  FName *pFVar9;
  uint uVar10;
  FName *pFVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [4];
  uint local_d4;
  UPCGGraphInputOutputSettings *local_c8;
  FString local_c0;
  FString local_b0;
  FSparseArrayAllocationInfo local_a0;
  FName local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d4 = (this->Pins).ArrayNum;
  uVar7 = (ulonglong)(int)local_d4;
  if (local_d4 != 0) {
    this_00 = (FName *)(this->Pins).AllocatorInstance.Data;
    pFVar11 = this_00 + uVar7 * 6;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (ForElementType<unsigned_int>)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = -1;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_c8 = this;
    while( true ) {
      pFVar9 = (FName *)0x0;
      if ((local_c8->Pins).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if (this_00 == pFVar11) break;
      if (*this_00 == (FName)0x0) {
        *this_00 = PCGInputOutputConstants::DefaultNewCustomPinName;
      }
      ::FName::ToString(this_00,&local_b0);
      while( true ) {
        FVar1 = *this_00;
        uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
        if (local_88._8_4_ == local_54) break;
        FVar8 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_48;
        }
        iVar6 = *(int *)((longlong)FVar8 + (ulonglong)(local_40 - 1U & FVar1.Number + uVar3) * 4);
        while( true ) {
          if (iVar6 == -1) goto LAB_149efd37a;
          if (*(FName *)(local_88._0_8_ + (longlong)iVar6 * 0x10) == FVar1) break;
          iVar6 = *(int *)(local_88._0_8_ + (longlong)iVar6 * 0x10 + 8);
        }
        ::FString::PrintfImpl(&local_c0,L"%s%d");
        iVar6 = local_c0.Data.ArrayNum + -1;
        if (local_c0.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        pFVar5 = ::FName::FName(&local_90,iVar6,(wchar_t *)local_c0.Data.AllocatorInstance.Data,
                                FNAME_Add);
        *this_00 = *pFVar5;
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
LAB_149efd37a:
      if (local_54 == 0) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                           (int *)(local_88 + 0xc));
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),false);
        iVar6 = local_58;
      }
      else {
        local_54 = local_54 + -1;
        iVar6 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
        iVar4 = local_58;
        if (local_54 != 0) {
          *(undefined4 *)(local_88._0_8_ + (longlong)iVar6 * 0x10) = 0xffffffff;
        }
      }
      local_58 = iVar6;
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,&local_a0,iVar4);
      iVar6 = local_a0.Index;
      if (local_a0.Pointer != (FName *)0x0) {
        *(FName *)local_a0.Pointer = *this_00;
        (((FName *)((longlong)local_a0.Pointer + 8))->ComparisonIndex).Value = 0xffffffff;
        pFVar9 = local_a0.Pointer;
      }
      FVar1 = *pFVar9;
      uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      uVar3 = uVar3 + FVar1.Number;
      if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
        FVar8 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_48;
        }
        for (iVar4 = *(int *)((longlong)FVar8 + (ulonglong)(local_40 - 1U & uVar3) * 4); iVar4 != -1
            ; iVar4 = *(int *)(local_88._0_8_ + (longlong)iVar4 * 0x10 + 8)) {
          if (*(FName *)(local_88._0_8_ + (longlong)iVar4 * 0x10) == *pFVar9) {
            if (iVar4 != -1) {
              *(FName *)(local_88._0_8_ + (longlong)iVar4 * 0x10) = *pFVar9;
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_88,iVar6,1);
              goto LAB_149efd5aa;
            }
            break;
          }
        }
      }
      uVar10 = local_88._8_4_ - local_54;
      if (uVar10 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((int)uVar10 < 1) || (iVar4 <= local_40)) {
        uVar3 = local_40 - 1U & uVar3;
        pFVar9[1].Number = uVar3;
        FVar8 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_48;
        }
        uVar7 = (longlong)local_40 - 1U & (longlong)(int)uVar3;
        pFVar9[1].ComparisonIndex.Value = *(uint *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar6;
      }
      else {
        local_40 = iVar4;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88);
      }
LAB_149efd5aa:
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 6;
      uVar7 = (ulonglong)local_d4;
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  return;
}

// GetPrivateStaticClass @ 149f04610

UClass * __cdecl UPCGGraphInputOutputSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInputOutputSettings",
               &Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton,
               StaticRegisterNativesUPCGGraphInputOutputSettings,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGraphInputOutputSettings>,
               InternalVTableHelperCtorCaller<UPCGGraphInputOutputSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInputOutputSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 149f068c0

bool __thiscall
UPCGGraphInputOutputSettings::HasExecutionDependencyPin(UPCGGraphInputOutputSettings *this)

{
  return false;
}

// InputPinProperties @ 149f075d0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraphInputOutputSettings::InputPinProperties
          (UPCGGraphInputOutputSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FPCGPinProperties *pFVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  if (this->bIsInput == false) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->Pins).ArrayNum;
    pFVar2 = (FPCGPinProperties *)(this->Pins).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
    }
  }
  else {
    iVar1 = (this->Pins).ArrayNum;
    pFVar2 = (FPCGPinProperties *)(this->Pins).AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
      ConstructItems<FPCGPinProperties,FPCGPinProperties,int>(local_28.Data,pFVar2,iVar1);
    }
    iVar1 = (int)local_20;
    pFVar4 = local_28.Data + (longlong)(int)local_20 * 0x30;
    FVar3.Data = local_28.Data;
    while( true ) {
      if ((int)local_20 != iVar1) {
        `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar3.Data == pFVar4) break;
      FVar3.Data[0x2a] = (FScriptContainerElement)0x1;
      FVar3.Data = FVar3.Data + 0x30;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
    __return_storage_ptr__->ArrayNum = (int)local_20;
    __return_storage_ptr__->ArrayMax = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)0x0,0);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149f09ce0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGraphInputOutputSettings::OutputPinProperties
          (UPCGGraphInputOutputSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FPCGPinProperties *pFVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  if (this->bIsInput == false) {
    iVar1 = (this->Pins).ArrayNum;
    pFVar2 = (FPCGPinProperties *)(this->Pins).AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
      ConstructItems<FPCGPinProperties,FPCGPinProperties,int>(local_28.Data,pFVar2,iVar1);
    }
    iVar1 = (int)local_20;
    pFVar4 = local_28.Data + (longlong)(int)local_20 * 0x30;
    FVar3.Data = local_28.Data;
    while( true ) {
      if ((int)local_20 != iVar1) {
        `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar3.Data == pFVar4) break;
      FVar3.Data[0x2a] = (FScriptContainerElement)0x1;
      FVar3.Data = FVar3.Data + 0x30;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
    __return_storage_ptr__->ArrayNum = (int)local_20;
    __return_storage_ptr__->ArrayMax = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
    DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)0x0,0);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->Pins).ArrayNum;
    pFVar2 = (FPCGPinProperties *)(this->Pins).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
    }
  }
  return __return_storage_ptr__;
}

// PostLoad @ 149f0c810

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall UPCGGraphInputOutputSettings::PostLoad(UPCGGraphInputOutputSettings *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  int *piVar2;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  int iVar12;
  FText *pFVar13;
  FPCGDataTypeIdentifier *pFVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  longlong local_res20;
  FPCGDataTypeIdentifier local_c8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  UPCGSettings::PostLoad((UPCGSettings *)this);
  iVar16 = *(int *)&(this->PinLabels_DEPRECATED).Elements.field_0x34;
  iVar18 = 0;
  iVar12 = *(int *)&(this->PinLabels_DEPRECATED).Elements.field_0x8;
  if (iVar12 != iVar16) {
    this_00 = &this->PinLabels_DEPRECATED;
    puVar1 = &(this->PinLabels_DEPRECATED).Elements.field_0x10;
    local_90 = 0;
    iVar6 = *(int *)&(this->PinLabels_DEPRECATED).Elements.field_0x28;
    uStack_a4 = 1;
    iStack_94 = 0;
    if (iVar6 != 0) {
      puVar20 = *(uint **)&(this->PinLabels_DEPRECATED).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar17 = *puVar20;
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar18;
        local_90 = local_90 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_94 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_149f0c8df;
        uVar17 = puVar20[lVar15 + 1];
      }
      uStack_a4 = -uVar17 & uVar17;
      uVar5 = (ulonglong)uStack_a4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res10 = (int)lVar15;
      iStack_94 = local_res10 + -1 + local_90;
      if (iVar6 < iStack_94) {
        iStack_94 = iVar6;
      }
    }
LAB_149f0c8df:
    iStack_88 = iVar12 - iVar16;
    uVar17 = *(uint *)&(this->PinLabels_DEPRECATED).Elements.field_0x28;
    uVar21 = uVar17 & 0xffffffe0;
    uStack_98 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_a4,iVar18);
    TStack_78.CurrentBitIndex = iStack_94;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._28_4_ = iStack_94;
    TStack_78.BaseBitIndex = local_90;
    uStack_58 = CONCAT44(uStack_84,iStack_88);
    iVar16 = (int)uVar17 >> 5;
    local_b0 = this_00;
    iStack_a8 = iVar18;
    local_a0 = puVar1;
    iStack_8c = iStack_94;
    local_80 = this_00;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar6 < (int)uVar17)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar7 = *(uint *)&(this->PinLabels_DEPRECATED).Elements.field_0x28;
    if (uVar17 != uVar7) {
      puVar19 = *(undefined1 **)&(this->PinLabels_DEPRECATED).Elements.field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar16;
        uVar21 = uVar21 + 0x20;
        iVar16 = iVar16 + 1;
        uVar17 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_149f0c9e0;
        uVar17 = *(uint *)(puVar19 + lVar15 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res18 = (int)lVar15;
      uVar17 = local_res18 + -1 + uVar21;
      if ((int)uVar7 < (int)uVar17) {
        uVar17 = uVar7;
      }
    }
LAB_149f0c9e0:
    while( true ) {
      pTVar10 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lVar15 = (longlong)TStack_78.CurrentBitIndex;
      if (((TStack_78.CurrentBitIndex == uVar17) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == this_00)) break;
      local_res20 = *(longlong *)&pTVar10->Elements;
      piVar2 = &(this->Pins).ArrayMax;
      iVar16 = (this->Pins).ArrayNum;
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&(this->Pins).AllocatorInstance,piVar2);
      }
      (this->Pins).ArrayNum = iVar16 + 1;
      pFVar8 = (this->Pins).AllocatorInstance.Data;
      pFVar13 = FText::GetEmpty();
      pFVar14 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_c8,Any);
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar8 + (longlong)iVar16 * 0x30),
                 (FName *)(lVar15 * 0x10 + local_res20),pFVar14,true,true,pFVar13);
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    if (*(int *)&(this->PinLabels_DEPRECATED).Elements.field_0x8 !=
        *(int *)&(this->PinLabels_DEPRECATED).Elements.field_0x34) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
      iVar16 = *(int *)&(this->PinLabels_DEPRECATED).Elements.field_0xc;
      *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x8 = 0;
      if (iVar16 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->PinLabels_DEPRECATED).Elements.field_0xc);
      }
      *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->PinLabels_DEPRECATED).Elements.field_0x28 = 0;
    }
  }
  if ((this->CustomPins_DEPRECATED).ArrayNum != 0) {
    pTVar3 = &this->Pins;
    pTVar4 = &this->CustomPins_DEPRECATED;
    if ((pTVar3 == pTVar4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar16 = (this->CustomPins_DEPRECATED).ArrayNum;
    if (iVar16 != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,8,iVar16,&pTVar3->AllocatorInstance,&(this->Pins).ArrayNum,
                          &(this->Pins).ArrayMax);
      ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x30,
                 (FPCGPinProperties *)(pTVar4->AllocatorInstance).Data,iVar16);
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)(pTVar4->AllocatorInstance).Data,
               (this->CustomPins_DEPRECATED).ArrayNum);
    (this->CustomPins_DEPRECATED).ArrayNum = 0;
    if ((this->CustomPins_DEPRECATED).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar4->AllocatorInstance,0,&(this->CustomPins_DEPRECATED).ArrayMax);
    }
  }
  return;
}

// SetInput @ 149f12110

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGGraphInputOutputSettings::SetInput(UPCGGraphInputOutputSettings *this,bool param_1)

{
  int iVar1;
  TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_> *pTVar2;
  <lambda_1> <Var3;
  
  this->bIsInput = param_1;
  if (this->bHasAddedDefaultPin == false) {
    iVar1 = (this->Pins).ArrayNum;
    this->bHasAddedDefaultPin = true;
    if (iVar1 == 0) {
      <Var3.DefaultPinDataType = Any;
      if (param_1) {
        pTVar2 = PCGInputOutputPrivate::GetStaticInLabels();
        <Var3.DefaultPinDataType = Spatial;
      }
      else {
        pTVar2 = PCGInputOutputPrivate::GetStaticOutLabels();
      }
      Algo::
      Transform<TArray<PCGInputOutputPrivate::FLabelAndTooltip,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGGraphInputOutputSettings::SetInput_::__l8::<lambda_1>_>
                (pTVar2,&this->Pins,<Var3);
    }
  }
  return;
}

// StaticRegisterNativesUPCGGraphInputOutputSettings @ 149f14030

void __cdecl UPCGGraphInputOutputSettings::StaticRegisterNativesUPCGGraphInputOutputSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

