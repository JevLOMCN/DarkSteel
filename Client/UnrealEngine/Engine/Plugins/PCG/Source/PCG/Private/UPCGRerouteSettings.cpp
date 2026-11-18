// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149b9c530

UClass * __cdecl UPCGRerouteSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRerouteSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRerouteSettings",
               &Z_Registration_Info_UClass_UPCGRerouteSettings.InnerSingleton,
               StaticRegisterNativesUPCGRerouteSettings,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRerouteSettings>,
               InternalVTableHelperCtorCaller<UPCGRerouteSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRerouteSettings.InnerSingleton;
}

// UPCGRerouteSettings @ 149be8040

UPCGRerouteSettings * __thiscall
UPCGRerouteSettings::UPCGRerouteSettings(UPCGRerouteSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGRerouteSettings__6B_;
  return this;
}

// UPCGRerouteSettings @ 149be8070

UPCGRerouteSettings * __thiscall UPCGRerouteSettings::UPCGRerouteSettings(UPCGRerouteSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  *(undefined ***)this = &___7UPCGRerouteSettings__6B_;
  return this;
}

// ~UPCGRerouteSettings @ 149bea180

void __thiscall UPCGRerouteSettings::~UPCGRerouteSettings(UPCGRerouteSettings *this)

{
  *(undefined ***)this = &___7UPCGRerouteSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CanBeDisabled @ 149c01850

bool __thiscall UPCGRerouteSettings::CanBeDisabled(UPCGRerouteSettings *this)

{
  return false;
}

// ConvertNode @ 149c03930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGRerouteSettings::ConvertNode(UPCGRerouteSettings *this,FPCGPreconfiguredInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  UPCGSettings *pUVar4;
  undefined4 uVar5;
  UPCGNode *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  FPCGSingleNodeConverter local_110;
  undefined1 local_d8 [136];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar6 = CastChecked<UPCGNode,UObject>(*(UObject **)&this->field_0x20);
  FVar3 = (FName)pUVar6->_padding_;
  if (FVar3 == (FName)0x0) {
    pFVar8 = GetTypeName<UPCGGraph>((FString *)local_130);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar7 = Z_Construct_UClass_UPCGGraph_NoRegister();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar7->_padding_)) {
    pFVar8 = GetTypeName<UPCGGraph>((FString *)(local_130 + 0x10));
    pwVar11 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UObject>((FString *)local_130,(UObject *)FVar3);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar12);
  }
  if (param_1->PreconfiguredIndex == 0) {
    GetCollisionFreeNodeName((UPCGGraph *)local_130,FVar3);
    if ((uint)local_130._0_8_ != 0xffffffff) {
      (pUVar6->NodeTitle).ComparisonIndex = (FNameEntryId)local_130._0_4_;
      (pUVar6->NodeTitle).Number = local_130._4_4_;
      local_130._0_8_ = UPCGNamedRerouteDeclarationSettings::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_130._0_8_ != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_130._0_8_);
      }
      FPCGSingleNodeConverter::FPCGSingleNodeConverter
                (&local_110,pUVar6,(TSubclassOf<UPCGSettings>)local_130);
      if (((~local_110._padding_._1_1_ & 1) == 0) && ((~local_110._padding_._1_1_ & 2) == 0)) {
        FPCGConverterBase::PrepareData((FPCGConverterBase *)&local_110);
        FPCGConverterBase::ApplyStructural((FPCGConverterBase *)&local_110);
        FPCGSingleNodeConverter::Finalize(&local_110);
        if (local_110._padding_._1_1_ == 0xf) {
          FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_110);
          return true;
        }
        local_130._0_8_ = (FScriptContainerElement *)0x0;
        (pUVar6->NodeTitle).ComparisonIndex = 0;
        (pUVar6->NodeTitle).Number = 0;
        FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_110);
        return false;
      }
      PCGLog::Settings::LogInvalidPreconfigurationWarning
                (param_1->PreconfiguredIndex,&PCGReroute::Constants::Conversion::ToRerouteLabel);
      FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_110);
      return false;
    }
  }
  else if ((param_1->PreconfiguredIndex == 1) &&
          (GetCollisionFreeNodeName((UPCGGraph *)local_130,FVar3),
          (uint)local_130._0_8_ != 0xffffffff)) {
    FPCGReroutePairNodeConverter::FPCGReroutePairNodeConverter
              ((FPCGReroutePairNodeConverter *)local_d8,pUVar6,(FName)local_130._0_8_);
    if (((~local_d8[0x11] & 1) == 0) && ((~local_d8[0x11] & 2) == 0)) {
      FPCGConverterBase::PrepareData((FPCGConverterBase *)local_d8);
      if ((UPCGSettings *)local_d8._40_8_ == (UPCGSettings *)0x0) {
        pFVar8 = GetTypeName<UPCGNamedRerouteDeclarationSettings>((FString *)local_130);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar11);
      }
      pUVar7 = UPCGNamedRerouteDeclarationSettings::StaticClass();
      uVar5 = local_d8._64_4_;
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)(local_d8._40_8_ + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)(local_d8._40_8_ + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        pFVar8 = GetTypeName<UPCGNamedRerouteDeclarationSettings>((FString *)(local_130 + 0x10));
        pwVar11 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UPCGSettings>
                           ((FString *)local_130,(UPCGSettings *)local_d8._40_8_);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar11,pwVar12);
      }
      uVar9 = (ulonglong)(int)local_d8._64_4_;
      pFVar1 = (FScriptContainerElement *)(local_d8._56_8_ + uVar9 * 8);
      pFVar10 = (FScriptContainerElement *)local_d8._56_8_;
      while( true ) {
        if ((uint)uVar9 != uVar5) {
          `TCheckedPointerIterator<UPCGSettings_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_138);
        }
        if (pFVar10 == pFVar1) break;
        pUVar4 = *(UPCGSettings **)pFVar10;
        if (pUVar4 == (UPCGSettings *)0x0) {
          pFVar8 = GetTypeName<UPCGNamedRerouteUsageSettings>((FString *)(local_130 + 0x10));
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar11);
        }
        pUVar7 = UPCGNamedRerouteUsageSettings::StaticClass();
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          pFVar8 = GetTypeName<UPCGNamedRerouteUsageSettings>((FString *)local_130);
          pwVar11 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pFVar8 = GetFullNameForCastLogError<UPCGSettings>((FString *)(local_130 + 0x10),pUVar4);
          if ((pFVar8->Data).ArrayNum != 0) {
            pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar11,pwVar12);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_d8._40_8_);
        }
        pUVar4[1]._padding_ = local_d8._40_8_;
        pFVar10 = pFVar10 + 8;
        uVar9 = (ulonglong)(uint)local_d8._64_4_;
      }
      FPCGConverterBase::ApplyStructural((FPCGConverterBase *)local_d8);
      FPCGReroutePairNodeConverter::Finalize((FPCGReroutePairNodeConverter *)local_d8);
      bVar13 = local_d8[0x11] == Complete;
    }
    else {
      PCGLog::Settings::LogInvalidPreconfigurationWarning
                (param_1->PreconfiguredIndex,&PCGReroute::Constants::Conversion::ToRerouteLabel);
      bVar13 = false;
    }
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UPCGNode_const_*,UPCGNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_d8 + 0x48));
    if ((FScriptContainerElement *)local_d8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._56_8_);
    }
    FPCGConverterBase::~FPCGConverterBase((FPCGConverterBase *)local_d8);
    return bVar13;
  }
  return false;
}

// CreateElement @ 149c060a0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGRerouteSettings::CreateElement
          (UPCGRerouteSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGRerouteElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGRerouteElement__6B_;
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

// GetCollisionFreeNodeName @ 149c237e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TOptional<FName> __cdecl
UPCGRerouteSettings::GetCollisionFreeNodeName(UPCGGraph *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGNode *pUVar3;
  TOptional<FName> TVar4;
  ulonglong uVar5;
  FName in_R8;
  FNameEntryId FVar6;
  undefined8 local_res18;
  FName local_res20;
  
  FVar6 = in_R8.ComparisonIndex.Value;
  local_res18 = 0;
  uVar5 = 1;
  local_res20 = in_R8;
  pUVar3 = UPCGGraph::FindNodeByTitleName
                     ((UPCGGraph *)param_2,in_R8,false,
                      (TSubclassOf<UPCGSettings_const_>)&local_res18);
  if (pUVar3 != (UPCGNode *)0x0) {
    FVar6.Value = local_res20.ComparisonIndex.Value;
    do {
      if (100 < uVar5) {
        *(undefined4 *)&param_1->_padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
        return (TOptional<FName>)(TOptional<FName>_u_0)param_1;
      }
      uVar5 = uVar5 + 1;
      local_res18 = 0;
      local_res20.Number = (uint)uVar5;
      in_R8 = local_res20;
      pUVar3 = UPCGGraph::FindNodeByTitleName
                         ((UPCGGraph *)param_2,local_res20,false,
                          (TSubclassOf<UPCGSettings_const_>)&local_res18);
    } while (pUVar3 != (UPCGNode *)0x0);
  }
  param_1->_padding_ = (longlong)in_R8;
  if ((FVar6.Value == 0xffffffff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4.field0_0x0 = (TOptional<FName>_u_0)(*pcVar1)();
    return (TOptional<FName>)TVar4.field0_0x0;
  }
  return (TOptional<FName>)(TOptional<FName>_u_0)param_1;
}

// GetCurrentPinTypesID @ 149c23b20

FPCGDataTypeIdentifier * __thiscall
UPCGRerouteSettings::GetCurrentPinTypesID
          (UPCGRerouteSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,UPCGPin *param_1
          )

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UPCGPin *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  FPCGDataTypeIdentifier *pFVar8;
  FPinTypeScopeHelper local_res18 [8];
  
  if (((param_1 != (UPCGPin *)0x0) && (bVar6 = UPCGPin::IsOutputPin(param_1), bVar6)) &&
     (lVar2 = *(longlong *)&this->field_0x20, lVar2 != 0)) {
    pUVar7 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar7->_padding_)) && (*(int *)(lVar2 + 0x70) != 0)) {
      if ((*(int *)(lVar2 + 0x70) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FPCGDataTypeIdentifier *)(*pcVar5)();
        return pFVar8;
      }
      pUVar3 = (UObject *)**(undefined8 **)(lVar2 + 0x68);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 == (UObject *)0x0) goto LAB_149c23cda;
        UE::GC::MarkAsReachable(pUVar3);
      }
      if ((pUVar3 != (UObject *)0x0) && (*(int *)&pUVar3[1].field_0x18 != 0)) {
        if ((*(int *)&pUVar3[1].field_0x18 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FPCGDataTypeIdentifier *)(*pcVar5)();
          return pFVar8;
        }
        if (**(longlong **)&pUVar3[1].field_0x10 != 0) {
          if ((*(int *)&pUVar3[1].field_0x18 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FPCGDataTypeIdentifier *)(*pcVar5)();
            return pFVar8;
          }
          pUVar4 = *(UPCGPin **)(**(longlong **)&pUVar3[1].field_0x10 + 0x48);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar4 == (UPCGPin *)0x0) goto LAB_149c23cda;
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          if (pUVar4 != (UPCGPin *)0x0) {
            PCGSettingsHelpers::FPinTypeScopeHelper::FPinTypeScopeHelper(local_res18);
            PCGSettingsHelpers::FPinTypeScopeHelper::GetCurrentPinTypeID
                      (local_res18,__return_storage_ptr__,pUVar4);
            PCGSettingsHelpers::FPinTypeScopeHelper::~FPinTypeScopeHelper(local_res18);
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
LAB_149c23cda:
  UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c26990

UClass * __cdecl UPCGRerouteSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRerouteSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRerouteSettings",
               &Z_Registration_Info_UClass_UPCGRerouteSettings.InnerSingleton,
               StaticRegisterNativesUPCGRerouteSettings,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRerouteSettings>,
               InternalVTableHelperCtorCaller<UPCGRerouteSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRerouteSettings.InnerSingleton;
}

// HasDynamicPins @ 149c27400

bool __thiscall UPCGRerouteSettings::HasDynamicPins(UPCGRerouteSettings *this)

{
  return true;
}

// HasExecutionDependencyPin @ 149c27460

bool __thiscall UPCGRerouteSettings::HasExecutionDependencyPin(UPCGRerouteSettings *this)

{
  return false;
}

// InputPinProperties @ 149c2ce20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGRerouteSettings::InputPinProperties
          (UPCGRerouteSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FPCGDataTypeIdentifier *pFVar1;
  FPCGPinProperties local_68;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  local_38.Label = PCGPinConstants::DefaultInputLabel;
  FPCGPinProperties::SetAllowMultipleConnections(&local_38,false);
  pFVar1 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier((FPCGDataTypeIdentifier *)&local_68,Any);
  if (&local_38.AllowedTypes != pFVar1) {
    if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
    }
    local_38.AllowedTypes.Ids.AllocatorInstance.Data = (pFVar1->Ids).AllocatorInstance.Data;
    (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.AllowedTypes.Ids.ArrayNum = (pFVar1->Ids).ArrayNum;
    local_38.AllowedTypes.Ids.ArrayMax = (pFVar1->Ids).ArrayMax;
    (pFVar1->Ids).ArrayNum = 0;
    (pFVar1->Ids).ArrayMax = 0;
  }
  local_38.AllowedTypes.CustomSubtype = pFVar1->CustomSubtype;
  if (local_68.Label != (FName)0x0) {
    FMemory::Free((void *)local_68.Label);
  }
  local_68.Label = local_38.Label;
  local_68.Usage = local_38.Usage;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_68.AllowedTypes,&local_38.AllowedTypes);
  local_68.bAllowMultipleData = local_38.bAllowMultipleData;
  local_68.PinStatus = local_38.PinStatus;
  local_68.bInvisiblePin = local_38.bInvisiblePin;
  local_68.bAllowMultipleConnections = local_38.bAllowMultipleConnections;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,&local_68,1);
  if (local_68.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2ee60

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGRerouteSettings::OutputPinProperties
          (UPCGRerouteSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FPCGDataTypeIdentifier *pFVar1;
  FPCGPinProperties local_68;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  local_38.Label = PCGPinConstants::DefaultOutputLabel;
  pFVar1 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier((FPCGDataTypeIdentifier *)&local_68,Any);
  if (&local_38.AllowedTypes != pFVar1) {
    if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
    }
    local_38.AllowedTypes.Ids.AllocatorInstance.Data = (pFVar1->Ids).AllocatorInstance.Data;
    (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.AllowedTypes.Ids.ArrayNum = (pFVar1->Ids).ArrayNum;
    local_38.AllowedTypes.Ids.ArrayMax = (pFVar1->Ids).ArrayMax;
    (pFVar1->Ids).ArrayNum = 0;
    (pFVar1->Ids).ArrayMax = 0;
  }
  local_38.AllowedTypes.CustomSubtype = pFVar1->CustomSubtype;
  if (local_68.Label != (FName)0x0) {
    FMemory::Free((void *)local_68.Label);
  }
  local_68.Label = local_38.Label;
  local_68.Usage = local_38.Usage;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_68.AllowedTypes,&local_38.AllowedTypes);
  local_68.bAllowMultipleData = local_38.bAllowMultipleData;
  local_68.PinStatus = local_38.PinStatus;
  local_68.bInvisiblePin = local_38.bInvisiblePin;
  local_68.bAllowMultipleConnections = local_38.bAllowMultipleConnections;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,&local_68,1);
  if (local_68.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGRerouteSettings @ 149c35600

void __cdecl UPCGRerouteSettings::StaticRegisterNativesUPCGRerouteSettings(void)

{
  return;
}

