// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 47

// StaticClass @ 1498544d0

UClass * __cdecl UPCGPointData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointData",
               &Z_Registration_Info_UClass_UPCGPointData.InnerSingleton,
               StaticRegisterNativesUPCGPointData,0x280,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPointData>,
               InternalVTableHelperCtorCaller<UPCGPointData>,local_res8,
               UPCGBasePointData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointData.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14985b0e0

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
`UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  UPCGPointData::CreateStaticAccessor((FPCGAttributePropertySelector *)param_1,param_3);
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b1a0

TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> __cdecl
`UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  longlong lVar1;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar2;
  undefined8 *local_res8;
  
  TVar2 = UPCGPointData::CreateStaticAccessor((FPCGAttributePropertySelector *)&local_res8,param_3);
  lVar1 = (TVar2.Ptr)->_padding_;
  (TVar2.Ptr)->_padding_ = 0;
  param_1->_padding_ = lVar1;
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b2c0

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __cdecl
`UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> TVar6;
  FPCGAttributeAccessorKeysPoints *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_48 [4];
  int local_44;
  TArrayView<FPCGPoint,int> local_38;
  FString local_28;
  FString local_18;
  
  (**(code **)(param_2->_padding_ + 0x348))(param_2,local_48,CONCAT71(in_register_00000081,param_3))
  ;
  if ((local_48[0] == Default) ||
     ((local_48[0] == PCGMetadataDomainID::Elements.Flag &&
      (local_44 == PCGMetadataDomainID::Elements.CustomFlag)))) {
    pUVar5 = UPCGPointData::StaticClass();
    lVar2 = *(longlong *)&(param_2->DomainName).Number;
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       (((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar5->_padding_ || (param_2 == (FPCGAttributePropertySelector *)0x0)))) {
      pFVar8 = GetTypeName<UPCGPointData>(&local_28);
      pwVar10 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UPCGData>(&local_18,(UPCGData *)param_2);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar9);
    }
    (**(code **)(param_2->_padding_ + 0x648))(param_2);
    local_38.DataPtr = *(FPCGPoint **)&param_2[6].ExtraNames.ArrayNum;
    local_38.ArrayNum = *(int *)&param_2[6].ExtraProperty;
    if (local_38.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IPCGAttributeAccessorKeys *)(*pcVar3)();
        return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
               TVar6.Ptr;
      }
    }
    pFVar7 = ::operator_new(0x20);
    if (pFVar7 != (FPCGAttributeAccessorKeysPoints *)0x0) {
      pFVar7 = FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints(pFVar7,&local_38);
      goto LAB_14985b3ab;
    }
  }
  pFVar7 = (FPCGAttributeAccessorKeysPoints *)0x0;
LAB_14985b3ab:
  param_1->_padding_ = (longlong)pFVar7;
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// <lambda_invoker_cdecl> @ 14985b570

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__cdecl `UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_4>::<lambda_invoker_cdecl>
                  (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FPCGAttributeAccessorKeysPoints *this;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar6;
  FPCGAttributeAccessorKeysPoints *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_48 [4];
  int local_44;
  TArrayView<FPCGPoint_const_,int> local_38;
  FString local_28;
  FString local_18;
  
  (**(code **)(param_2->_padding_ + 0x348))(param_2,local_48,CONCAT71(in_register_00000081,param_3))
  ;
  if ((local_48[0] == Default) ||
     ((local_48[0] == PCGMetadataDomainID::Elements.Flag &&
      (local_44 == PCGMetadataDomainID::Elements.CustomFlag)))) {
    pUVar5 = UPCGPointData::StaticClass();
    lVar2 = *(longlong *)&(param_2->DomainName).Number;
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       (((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar5->_padding_ || (param_2 == (FPCGAttributePropertySelector *)0x0)))) {
      pFVar8 = GetTypeName<UPCGPointData>(&local_28);
      pwVar9 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UPCGData_const_>(&local_18,(UPCGData *)param_2);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar10);
    }
    this = ::operator_new(0x20);
    pFVar7 = (FPCGAttributeAccessorKeysPoints *)0x0;
    if (this != (FPCGAttributeAccessorKeysPoints *)0x0) {
      local_38.DataPtr = *(FPCGPoint **)&param_2[6].ExtraNames.ArrayNum;
      iVar1 = *(int *)&param_2[6].ExtraProperty;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IPCGAttributeAccessorKeys *)(*pcVar3)();
        return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
                )TVar6.Ptr;
      }
      local_38.ArrayNum = iVar1;
      pFVar7 = FPCGAttributeAccessorKeysPoints::FPCGAttributeAccessorKeysPoints(this,&local_38);
    }
  }
  else {
    pFVar7 = (FPCGAttributeAccessorKeysPoints *)0x0;
  }
  param_1->_padding_ = (longlong)pFVar7;
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// UPCGPointData @ 14988e460

UPCGPointData * __thiscall UPCGPointData::UPCGPointData(UPCGPointData *this,FVTableHelper *param_1)

{
  UPCGBasePointData::UPCGBasePointData((UPCGBasePointData *)this,param_1);
  this->bOctreeOldIsDirty = true;
  this->_padding_ = (longlong)&___7UPCGPointData__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  TOctree2<FPCGPointRef,FPCGPointRefSemantics>::TOctree2<FPCGPointRef,FPCGPointRefSemantics>
            (&this->Octree);
  return this;
}

// UPCGPointData @ 14988e4b0

UPCGPointData * __thiscall
UPCGPointData::UPCGPointData(UPCGPointData *this,FObjectInitializer *param_1)

{
  UPCGBasePointData::UPCGBasePointData((UPCGBasePointData *)this,param_1);
  this->bOctreeOldIsDirty = true;
  this->_padding_ = (longlong)&___7UPCGPointData__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  TOctree2<FPCGPointRef,FPCGPointRefSemantics>::TOctree2<FPCGPointRef,FPCGPointRefSemantics>
            (&this->Octree);
  return this;
}

// ~UPCGPointData @ 149891730

void __thiscall UPCGPointData::~UPCGPointData(UPCGPointData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGPointData__6B_;
  TOctree2<FPCGPointRef,FPCGPointRefSemantics>::~TOctree2<FPCGPointRef,FPCGPointRefSemantics>
            (&this->Octree);
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGBasePointData::~UPCGBasePointData((UPCGBasePointData *)this);
  return;
}

// CopyInternal @ 1498a4830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall UPCGPointData::CopyInternal(UPCGPointData *this,FPCGContext *param_1)

{
  UPCGPointData *pUVar1;
  
  pUVar1 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
  (**(code **)(pUVar1->_padding_ + 0x648))(pUVar1);
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::operator=(&pUVar1->Points,&this->Points);
  return (UPCGSpatialData *)pUVar1;
}

// CopyPointsTo @ 1498a6130

void __thiscall
UPCGPointData::CopyPointsTo
          (UPCGPointData *this,UPCGBasePointData *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  uint uVar6;
  
  if (0 < param_4) {
    if (param_1 != (UPCGBasePointData *)0x0) {
      pUVar5 = StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(param_1->_padding_ + 0x648))(param_1);
        uVar6 = 0;
        if (param_2 < (this->Points).ArrayNum) {
          uVar6 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Points).AllocatorInstance.Data;
        uVar6 = 0;
        if (param_3 < (int)param_1[1]._padding_) {
          uVar6 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        memcpy((void *)((longlong)param_3 * 0xd0 + param_1[1]._padding_),
               pFVar2 + (longlong)param_2 * 0xd0,(longlong)param_4 * 0xd0);
        return;
      }
    }
    UPCGBasePointData::CopyPointsTo((UPCGBasePointData *)this,param_1,param_2,param_3,param_4);
  }
  return;
}

// CreateStaticAccessor @ 1498b0170

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
UPCGPointData::CreateStaticAccessor(FPCGAttributePropertySelector *param_1,bool param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  UScriptStruct *this;
  FProperty *pFVar3;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar4;
  undefined7 in_register_00000011;
  FName local_res8;
  undefined8 *local_res10 [3];
  
  param_1->_padding_ = 0;
  if (((FPCGAttributePropertySelector *)CONCAT71(in_register_00000011,param_2))->Selection ==
      Property) {
    FPCGAttributePropertySelector::GetName
              ((FPCGAttributePropertySelector *)CONCAT71(in_register_00000011,param_2));
    this = FPCGPoint::StaticStruct();
    pFVar3 = UStruct::FindPropertyByName((UStruct *)this,local_res8);
    if (pFVar3 == (FProperty *)0x0) {
      bVar2 = FPCGPoint::HasCustomPropertyGetterSetter(local_res8);
      if (!bVar2) {
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
               (IPCGAttributeAccessor *)param_1;
      }
      TVar4 = FPCGPoint::CreateCustomPropertyAccessor((FName)local_res10);
    }
    else {
      TVar4 = PCGAttributeAccessorHelpers::CreatePropertyAccessor((FProperty *)local_res10);
    }
    if (param_1 != (FPCGAttributePropertySelector *)TVar4.Ptr) {
      puVar1 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = ((FPCGAttributePropertySelector *)TVar4.Ptr)->_padding_;
      ((FPCGAttributePropertySelector *)TVar4.Ptr)->_padding_ = 0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    if (local_res10[0] != (undefined8 *)0x0) {
      (**(code **)*local_res10[0])(local_res10[0],1);
    }
  }
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
         (IPCGAttributeAccessor *)param_1;
}

// DirtyCache @ 1498b1540

void __thiscall UPCGPointData::DirtyCache(UPCGPointData *this)

{
  *(undefined2 *)&this->_padding_ = 0x101;
  this->bOctreeOldIsDirty = true;
  return;
}

// GetBoundsMaxValueRange @ 1498b5fe0

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGPointData::GetBoundsMaxValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0x80;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetBoundsMinValueRange @ 1498b6130

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGPointData::GetBoundsMinValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0x68;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetColorValueRange @ 1498b67c0

TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> *
__thiscall
UPCGPointData::GetColorValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0xa0;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Y = 0.0;
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetConstBoundsMaxValueRange @ 1498b6900

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGPointData::GetConstBoundsMaxValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0x80;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstBoundsMinValueRange @ 1498b6a20

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGPointData::GetConstBoundsMinValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0x68;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstColorValueRange @ 1498b6c60

TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
* __thiscall
UPCGPointData::GetConstColorValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
  *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0xa0;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Y = 0.0;
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetConstDensityValueRange @ 1498b6e10

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGPointData::GetConstDensityValueRange
          (UPCGPointData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0x60;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstMetadataEntryValueRange @ 1498b7030

TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> * __thiscall
UPCGPointData::GetConstMetadataEntryValueRange
          (UPCGPointData *this,
          TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 200;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstSeedValueRange @ 1498b7250

TPCGValueRange<int_const_,TStridedView<int_const_,int>_> * __thiscall
UPCGPointData::GetConstSeedValueRange
          (UPCGPointData *this,
          TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0xc4;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstSteepnessValueRange @ 1498b7370

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGPointData::GetConstSteepnessValueRange
          (UPCGPointData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0xc0;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstTransformValueRange @ 1498b7490

TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
* __thiscall
UPCGPointData::GetConstTransformValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
  *pTVar7;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data;
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  return __return_storage_ptr__;
}

// GetDensityValueRange @ 1498b9870

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGPointData::GetDensityValueRange
          (UPCGPointData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<float,TStridedView<float,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float,TStridedView<float,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0x60;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float,TStridedView<float,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetMetadataEntryValueRange @ 1498bb5d0

TPCGValueRange<__int64,TStridedView<__int64,int>_> * __thiscall
UPCGPointData::GetMetadataEntryValueRange
          (UPCGPointData *this,
          TPCGValueRange<__int64,TStridedView<__int64,int>_> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<__int64,TStridedView<__int64,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<__int64,TStridedView<__int64,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 200;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<__int64,TStridedView<__int64,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetMutablePoints @ 1498bb6c0

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointData::GetMutablePoints(UPCGPointData *this)

{
  (**(code **)(this->_padding_ + 0x648))();
  return &this->Points;
}

// GetNumPoints @ 1498bb920

int __thiscall UPCGPointData::GetNumPoints(UPCGPointData *this)

{
  return (this->Points).ArrayNum;
}

// GetOctree @ 1498bbb20

TOctree2<FPCGPointRef,FPCGPointRefSemantics> * __thiscall
UPCGPointData::GetOctree(UPCGPointData *this)

{
  if (this->bOctreeOldIsDirty != false) {
    RebuildOctreeOld(this);
    return &this->Octree;
  }
  return &this->Octree;
}

// GetPoint @ 1498bbb60

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGPoint * __thiscall
UPCGPointData::GetPoint(UPCGPointData *this,FPCGPoint *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  long64 lVar5;
  bool bVar6;
  uint uVar7;
  FPCGPoint *pFVar8;
  FScriptContainerElement *pFVar9;
  
  if ((-1 < param_1) && (param_1 < (this->Points).ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FPCGPoint *)(*pcVar1)();
        return pFVar8;
      }
    }
    pFVar9 = (this->Points).AllocatorInstance.Data + (longlong)param_1 * 0xd0;
    dVar2 = *(double *)(pFVar9 + 8);
    (__return_storage_ptr__->Transform).Rotation.XY.m128d_f64[0] = *(double *)pFVar9;
    (__return_storage_ptr__->Transform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x18);
    (__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar9 + 0x10);
    (__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x28);
    (__return_storage_ptr__->Transform).Translation.XY.m128d_f64[0] = *(double *)(pFVar9 + 0x20);
    (__return_storage_ptr__->Transform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x38);
    (__return_storage_ptr__->Transform).Translation.ZW.m128d_f64[0] = *(double *)(pFVar9 + 0x30);
    (__return_storage_ptr__->Transform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x48);
    (__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar9 + 0x40);
    (__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x58);
    (__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar9 + 0x50);
    (__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x68);
    *(undefined8 *)&__return_storage_ptr__->Density = *(undefined8 *)(pFVar9 + 0x60);
    (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.X = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x78);
    (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.Y = *(double *)(pFVar9 + 0x70);
    (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.Z = dVar2;
    dVar2 = *(double *)(pFVar9 + 0x88);
    (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.X = *(double *)(pFVar9 + 0x80);
    (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.Y = dVar2;
    lVar3 = *(longlong *)(pFVar9 + 0x98);
    (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.Z = *(double *)(pFVar9 + 0x90);
    __return_storage_ptr__->_padding_ = lVar3;
    dVar2 = *(double *)(pFVar9 + 0xa8);
    (__return_storage_ptr__->Color).field0_0x0._s_0.X = *(double *)(pFVar9 + 0xa0);
    (__return_storage_ptr__->Color).field0_0x0._s_0.Y = dVar2;
    dVar2 = *(double *)(pFVar9 + 0xb8);
    (__return_storage_ptr__->Color).field0_0x0._s_0.Z = *(double *)(pFVar9 + 0xb0);
    (__return_storage_ptr__->Color).field0_0x0._s_0.W = dVar2;
    uVar4 = *(undefined8 *)(pFVar9 + 0xc0);
    lVar5 = *(long64 *)(pFVar9 + 200);
    __return_storage_ptr__->Steepness = (float)(int)uVar4;
    __return_storage_ptr__->Seed = (int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->MetadataEntry = lVar5;
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  memset(__return_storage_ptr__,0,0xd0);
  FPCGPoint::FPCGPoint(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPointAccessorMethods @ 1498bbcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGAttributeAccessorMethods * __cdecl
UPCGPointData::GetPointAccessorMethods(FPCGAttributeAccessorMethods *__return_storage_ptr__)

{
  undefined ***pppuVar1;
  undefined1 auStack_f8 [32];
  code *local_d8 [2];
  undefined **local_c8;
  code *local_c0;
  undefined ***local_b0;
  code *local_a8;
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_c0 = `UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
                ::Call;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_90 = `UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessorKeys__U__TDefaultDelete___CBVIPCGAttributeAccessorKeys______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = `UPCGPointData::GetPointAccessorMethods'::__l2::<lambda_4>::<lambda_invoker_cdecl>;
  local_b0 = (undefined ***)0x0;
  local_80 = (undefined ***)0x0;
  local_50 = (undefined ***)0x0;
  local_20 = (undefined ***)0x0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  FPCGAttributeAccessorMethods::FPCGAttributeAccessorMethods
            (__return_storage_ptr__,(FPCGAttributeAccessorMethods *)local_d8);
  if (local_48 != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78 != (code *)0x0) {
    pppuVar1 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar1 = local_50;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar1 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar1 = local_80;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_d8[0] != (code *)0x0) {
    pppuVar1 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar1 = local_b0;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1498bc710

UClass * __cdecl UPCGPointData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointData",
               &Z_Registration_Info_UClass_UPCGPointData.InnerSingleton,
               StaticRegisterNativesUPCGPointData,0x280,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPointData>,
               InternalVTableHelperCtorCaller<UPCGPointData>,local_res8,
               UPCGBasePointData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointData.InnerSingleton;
}

// GetResourceSizeEx @ 1498c54c0

void __thiscall UPCGPointData::GetResourceSizeEx(UPCGPointData *this,FResourceSizeEx *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  UPCGBasePointData::GetResourceSizeEx((UPCGBasePointData *)this,param_1);
  iVar1 = (this->Points).ArrayMax;
  iVar2 = (this->Octree).TreeElements.ArrayMax;
  iVar3 = (this->Octree).TreeNodes.ArrayMax;
  if ((this->Octree).TreeNodes.ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(ulonglong)*(uint *)((this->Octree).TreeNodes.AllocatorInstance.Data + 4) *
                     0x40 + ((longlong)iVar2 * 0x82 + (longlong)iVar3) * 8 + (longlong)iVar1 * 0xd0)
  ;
  return;
}

// GetSeedValueRange @ 1498c5b80

TPCGValueRange<int,TStridedView<int,int>_> * __thiscall
UPCGPointData::GetSeedValueRange
          (UPCGPointData *this,TPCGValueRange<int,TStridedView<int,int>_> *__return_storage_ptr__,
          bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<int,TStridedView<int,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<int,TStridedView<int,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0xc4;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<int,TStridedView<int,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetSteepnessValueRange @ 1498c73e0

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGPointData::GetSteepnessValueRange
          (UPCGPointData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TPCGValueRange<float,TStridedView<float,int>_> *pTVar4;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float,TStridedView<float,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data + 0xc0;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TPCGValueRange<float,TStridedView<float,int>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetTransformValueRange @ 1498c99e0

TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_> *
__thiscall
UPCGPointData::GetTransformValueRange
          (UPCGPointData *this,
          TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
  *pTVar7;
  undefined8 local_18;
  
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 == 0) {
    local_18 = (FScriptContainerElement *)0x0;
  }
  else {
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
    local_18 = (this->Points).AllocatorInstance.Data;
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->ElementView).FirstElementPtr = (undefined4)local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementView).FirstElementPtr + 4) =
       local_18._4_4_;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0xd0;
  (__return_storage_ptr__->ElementView).NumElements = iVar1;
  __return_storage_ptr__->NumElements = iVar1;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  return __return_storage_ptr__;
}

// GetTransformsCopy @ 1498c9b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointData::GetTransformsCopy
          (UPCGPointData *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->Points).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->Points).ArrayNum;
  pFVar10 = (this->Points).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar3 * 0xd0;
  while( true ) {
    if ((this->Points).ArrayNum != iVar3) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FPCGPoint_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar10 == pFVar11) break;
    local_98 = *(undefined8 *)pFVar10;
    uStack_90 = *(undefined8 *)(pFVar10 + 8);
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_88 = *(undefined8 *)(pFVar10 + 0x10);
    uStack_80 = *(undefined8 *)(pFVar10 + 0x18);
    local_78 = *(undefined8 *)(pFVar10 + 0x20);
    uStack_70 = *(undefined8 *)(pFVar10 + 0x28);
    local_68 = *(undefined8 *)(pFVar10 + 0x30);
    uStack_60 = *(undefined8 *)(pFVar10 + 0x38);
    local_58 = *(undefined8 *)(pFVar10 + 0x40);
    uStack_50 = *(undefined8 *)(pFVar10 + 0x48);
    local_48 = *(undefined8 *)(pFVar10 + 0x50);
    uStack_40 = *(undefined8 *)(pFVar10 + 0x58);
    if ((pFVar4 <= (FScriptContainerElement *)&local_98) &&
       ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)*piVar1 * 0x60)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1060,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    lVar9 = (longlong)iVar7 * 0x60;
    pFVar10 = pFVar10 + 0xd0;
    *(undefined8 *)(pFVar4 + lVar9) = local_98;
    *(undefined8 *)(pFVar4 + lVar9 + 8) = uStack_90;
    *(undefined8 *)(pFVar4 + lVar9 + 0x10) = local_88;
    *(undefined8 *)(pFVar4 + lVar9 + 0x10 + 8) = uStack_80;
    *(undefined8 *)(pFVar4 + lVar9 + 0x20) = local_78;
    *(undefined8 *)(pFVar4 + lVar9 + 0x20 + 8) = uStack_70;
    *(undefined8 *)(pFVar4 + lVar9 + 0x30) = local_68;
    *(undefined8 *)(pFVar4 + lVar9 + 0x30 + 8) = uStack_60;
    *(undefined8 *)(pFVar4 + lVar9 + 0x40) = local_58;
    *(undefined8 *)(pFVar4 + lVar9 + 0x40 + 8) = uStack_50;
    *(undefined8 *)(pFVar4 + lVar9 + 0x50) = local_48;
    *(undefined8 *)(pFVar4 + lVar9 + 0x50 + 8) = uStack_40;
  }
  return __return_storage_ptr__;
}

// IsValidRef @ 1498d1170

bool __thiscall UPCGPointData::IsValidRef(UPCGPointData *this,FPointRef *param_1)

{
  if ((-1 < param_1->Index) && (param_1->Index < (this->Points).ArrayNum)) {
    return true;
  }
  return false;
}

// MoveRange @ 1498d20f0

void __thiscall UPCGPointData::MoveRange(UPCGPointData *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 != param_2) && (0 < param_3)) {
    if ((((param_2 < 0) ||
         (((iVar1 = (this->Points).ArrayNum, iVar1 <= param_2 ||
           (iVar5 = param_3 + -1 + param_2, iVar5 < 0)) || (iVar1 <= iVar5)))) ||
        (((param_1 < 0 || (iVar1 <= param_1)) || (iVar5 = param_3 + -1 + param_1, iVar5 < 0)))) ||
       (iVar1 <= iVar5)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Points.IsValidIndex(MoveToIndex) && Points.IsValidIndex(MoveToIndex + NumElements - 1) && Points.IsValidIndex(RangeStartIndex) && Points.IsValidIndex(RangeStartIndex + NumElements - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPointData.cpp"
                         ,0x1a2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_2 < (this->Points).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memmove((this->Points).AllocatorInstance.Data + (longlong)param_2 * 0xd0,
            pFVar2 + (longlong)param_1 * 0xd0,(longlong)param_3 * 0xd0);
  }
  return;
}

// RebuildOctreeOld @ 1498d5910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UPCGPointData::RebuildOctreeOld(UPCGPointData *this)

{
  longlong *lpCriticalSection;
  TArray<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPCGPoint *pFVar8;
  FPCGPoint *pFVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auStackY_658 [32];
  undefined1 local_628 [16];
  TVector4<double>_u_0 local_618;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  ForAnyElementType local_5b8;
  undefined8 local_5b0;
  ForAnyElementType local_5a8;
  undefined8 local_5a0;
  ForAnyElementType local_598;
  undefined8 local_590;
  ForAnyElementType local_588;
  undefined8 local_580;
  double local_578;
  TVector4<double>_u_0 local_568;
  double local_548;
  double local_540;
  double local_538;
  undefined8 local_530;
  FPCGPointRef local_528;
  TVector<double>_u_0 local_4e8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_478;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_658;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bOctreeOldIsDirty != false) {
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId373,"UPCGPointData::RebuildOctreeOld",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPointData.cpp"
                 ,0x175);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId373);
    }
    if ((this->bOctreeOldIsDirty == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bOctreeOldIsDirty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPointData.cpp"
                           ,0x176,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(this->_padding_ + 0x388))(this,&local_4b0);
    local_618._s_0.W = 0.0;
    dStack_5e0 = 0.0;
    local_5c8 = 0;
    local_5b8.Data = (FScriptContainerElement *)0x0;
    local_5b0 = 0;
    local_5a8.Data = (FScriptContainerElement *)0x0;
    local_5a0 = 0;
    local_598.Data = (FScriptContainerElement *)0x0;
    local_590 = 0;
    local_588.Data = (FScriptContainerElement *)0x0;
    local_580 = 0;
    local_618._s_0.X = (local_498 + local_4b0) * __real_3fe0000000000000;
    local_618._s_0.Y = (local_490 + local_4a8) * __real_3fe0000000000000;
    auVar11._0_8_ =
         ((local_490 - local_4a8) * (local_490 - local_4a8) +
          (local_498 - local_4b0) * (local_498 - local_4b0) +
         (local_488 - local_4a0) * (local_488 - local_4a0)) * __real_3fd0000000000000;
    auVar11._8_8_ = 0;
    local_618._s_0.Z = (local_488 + local_4a0) * __real_3fe0000000000000;
    auVar11 = sqrtpd(auVar11,auVar11);
    local_5f8 = auVar11._0_8_;
    local_5d8 = local_5f8 * __real_3fe1000000000000;
    local_578 = local_5f8 * ___real_3f408f227be81608;
    dStack_5d0 = local_5f8 - local_5d8;
    dStack_5f0 = local_5f8;
    local_5e8 = local_5f8;
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_5b8,(int *)((longlong)&local_5b0 + 4));
    local_5b0 = CONCAT44(local_5b0._4_4_,iVar7 + 1);
    DefaultConstructItems<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,int>
              (local_5b8.Data + (longlong)iVar7 * 8,1);
    iVar7 = (int)local_590;
    if ((int)local_590 == local_590._4_4_) {
      iVar7 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                        (0x410,8,&local_598,(int *)((longlong)&local_590 + 4));
    }
    local_590 = CONCAT44(local_590._4_4_,iVar7 + 1);
    DefaultConstructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              (local_598.Data + (longlong)iVar7 * 0x410,1);
    iVar7 = (this->Points).ArrayNum;
    pFVar9 = (FPCGPoint *)(this->Points).AllocatorInstance.Data;
    pFVar8 = pFVar9 + iVar7;
    while( true ) {
      if ((this->Points).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FPCGPoint_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_628);
      }
      if (pFVar9 == pFVar8) break;
      local_528.Point = pFVar9;
      PCGPointHelpers::GetDensityBounds
                ((TBoxSphereBounds<double,double> *)&local_4e8._s_0,&pFVar9->Transform,
                 pFVar9->Steepness,&pFVar9->BoundsMin,&pFVar9->BoundsMax);
      local_478.AllocatorInstance.SecondaryData = (ForElementType<FPCGPointRef>)0x0;
      local_568._s_0.X = local_4e8._s_0.X;
      local_568._s_0.Z = local_4e8._s_0.Z;
      local_540 = local_4c8;
      local_528.Bounds.Origin.field0_0x0._s_0.X = local_4e8._s_0.X;
      local_528.Bounds.Origin.field0_0x0._s_0.Y = local_4e8._s_0.Y;
      local_478.ArrayNum = 0;
      local_528.Bounds.Origin.field0_0x0._s_0.Z = local_4e8._s_0.Z;
      local_528.Bounds.BoxExtent.field0_0x0._s_0.X = dStack_4d0;
      local_478.ArrayMax = 0x10;
      local_528.Bounds.BoxExtent.field0_0x0._s_0.Y = local_4c8;
      local_528.Bounds.BoxExtent.field0_0x0._s_0.Z = dStack_4c0;
      local_568._s_0.Y = local_4e8._s_0.Y;
      local_548 = dStack_4d0;
      local_538 = dStack_4c0;
      local_530 = 0;
      local_568._s_0.W = 0.0;
      local_528.Bounds.SphereRadius = local_4b8;
      TOctree2<FPCGPointRef,FPCGPointRefSemantics>::AddElementInternal
                ((TOctree2<FPCGPointRef,FPCGPointRefSemantics> *)&local_618._s_0,0,
                 (FOctreeNodeContext *)&local_618._s_0,(FBoxCenterAndExtent *)&local_568._s_0,
                 &local_528,&local_478);
      if (local_478.AllocatorInstance.SecondaryData != (ForElementType<FPCGPointRef>)0x0) {
        FMemory::Free((void *)local_478.AllocatorInstance.SecondaryData);
      }
      pFVar9 = pFVar9 + 1;
    }
    pTVar1 = &(this->Octree).TreeNodes;
    (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.X = local_618._s_0.X;
    (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Y = local_618._s_0.Y;
    (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Z = local_618._s_0.Z;
    (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.W = local_618._s_0.W;
    (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.X = local_5f8;
    (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Y = dStack_5f0;
    (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Z = local_5e8;
    (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.W = dStack_5e0;
    (this->Octree).RootNodeContext.ChildExtent = local_5d8;
    (this->Octree).RootNodeContext.ChildCenterOffset = dStack_5d0;
    (this->Octree).RootNodeContext.InCullBits = (undefined4)local_5c8;
    (this->Octree).RootNodeContext.OutCullBits = local_5c8._4_4_;
    *(undefined8 *)&(this->Octree).RootNodeContext.field_0x58 = uStack_5c0;
    if (pTVar1 != (TArray<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,TSizedDefaultAllocator<32>_>
                   *)&local_5b8) {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->AllocatorInstance).Data = local_5b8.Data;
      (this->Octree).TreeNodes.ArrayNum = (int)local_5b0;
      (this->Octree).TreeNodes.ArrayMax = local_5b0._4_4_;
      local_5b0 = 0;
      local_5b8.Data = (FScriptContainerElement *)0x0;
    }
    pTVar2 = &(this->Octree).ParentLinks;
    if (pTVar2 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_5a8) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = local_5a8.Data;
      (this->Octree).ParentLinks.ArrayNum = (int)local_5a0;
      (this->Octree).ParentLinks.ArrayMax = local_5a0._4_4_;
      local_5a0 = 0;
      local_5a8.Data = (FScriptContainerElement *)0x0;
    }
    pTVar3 = &(this->Octree).TreeElements;
    if (pTVar3 != (TArray<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
                   *)&local_598) {
      DestructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
                ((TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 (pTVar3->AllocatorInstance).Data,(this->Octree).TreeElements.ArrayNum);
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar3->AllocatorInstance).Data = local_598.Data;
      (this->Octree).TreeElements.ArrayNum = (int)local_590;
      (this->Octree).TreeElements.ArrayMax = local_590._4_4_;
      local_590 = 0;
      local_598.Data = (FScriptContainerElement *)0x0;
    }
    pTVar2 = &(this->Octree).FreeList;
    if (pTVar2 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_588) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = local_588.Data;
      (this->Octree).FreeList.ArrayNum = (int)local_580;
      (this->Octree).FreeList.ArrayMax = local_580._4_4_;
      local_580 = 0;
      local_588.Data = (FScriptContainerElement *)0x0;
    }
    (this->Octree).MinLeafExtent = local_578;
    this->bOctreeOldIsDirty = false;
    if (local_588.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data);
    }
    DestructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
               local_598.Data,(int)local_590);
    if ((TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
        local_598.Data !=
        (TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      FMemory::Free(local_598.Data);
    }
    if (local_5a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data);
    }
    if (local_5b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data);
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetNumPoints @ 1498e0100

void __thiscall UPCGPointData::SetNumPoints(UPCGPointData *this,int param_1,bool param_2)

{
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  piVar6 = &(this->Points).ArrayNum;
  iVar5 = *piVar6;
  if (iVar5 == param_1) {
    return;
  }
  pTVar1 = &this->Points;
  if (param_2) {
    if (iVar5 < param_1) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xd0,0x10,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar6,
                         &(this->Points).ArrayMax);
      DefaultConstructItems<FPCGPoint,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0xd0,param_1 - iVar5);
      goto LAB_1498e0229;
    }
  }
  else if (iVar5 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar6,&(this->Points).ArrayMax)
    ;
    goto LAB_1498e0229;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar7 = iVar5 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
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
    if (uVar7 != 0) {
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 0xd0;
      iVar5 = ((this->Points).ArrayNum - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0xd0,(longlong)iVar5 * 0xd0);
      }
      piVar6 = &(this->Points).ArrayNum;
      *piVar6 = *piVar6 - uVar7;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,&pTVar1->AllocatorInstance,(this->Points).ArrayNum,
                 &(this->Points).ArrayMax);
    }
  }
LAB_1498e0229:
  (**(code **)(this->_padding_ + 0x648))(this);
  return;
}

// SetPoints @ 1498e0630

void __thiscall
UPCGPointData::SetPoints(UPCGPointData *this,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_1)

{
  (**(code **)(this->_padding_ + 0x648))();
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::operator=(&this->Points,param_1);
  return;
}

// StaticRegisterNativesUPCGPointData @ 1498f6940

void __cdecl UPCGPointData::StaticRegisterNativesUPCGPointData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPCGPointData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToPointData @ 1498f80a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGPointData::ToPointData(UPCGPointData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  return this;
}

// execGetPoint @ 1498fd300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGPointData::execGetPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8 [2];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_res8[0];
  if (-1 < (int)local_res8[0]) {
    if ((int)local_res8[0] < *(int *)(param_1 + 0xb)) {
      uVar6 = 0;
      if ((int)local_res8[0] < *(int *)(param_1 + 0xb)) {
        uVar6 = ~local_res8[0] >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pdVar4 = (double *)(lVar5 * 0xd0 + *(longlong *)&param_1[10].field_0x20);
      local_e8 = *pdVar4;
      dStack_e0 = pdVar4[1];
      local_d8 = pdVar4[2];
      dStack_d0 = pdVar4[3];
      local_c8 = *(undefined1 (*) [16])(pdVar4 + 4);
      local_b8 = pdVar4[6];
      dStack_b0 = pdVar4[7];
      local_a8 = *(undefined1 (*) [16])(pdVar4 + 8);
      local_98 = pdVar4[10];
      dStack_90 = pdVar4[0xb];
      local_88 = pdVar4[0xc];
      dStack_80 = pdVar4[0xd];
      local_78 = pdVar4[0xe];
      dStack_70 = pdVar4[0xf];
      local_68 = pdVar4[0x10];
      dStack_60 = pdVar4[0x11];
      local_58 = pdVar4[0x12];
      dStack_50 = pdVar4[0x13];
      local_48 = pdVar4[0x14];
      dStack_40 = pdVar4[0x15];
      local_38 = pdVar4[0x16];
      dStack_30 = pdVar4[0x17];
      local_28 = pdVar4[0x18];
      dStack_20 = pdVar4[0x19];
      goto LAB_1498fd549;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 5.26354424712089e-315;
  dStack_50 = 0.0;
  local_28 = 5.2220990168286e-315;
  dStack_20 = -NAN;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = (double)CONCAT44((uint)((ulonglong)
                                     UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20)
                              ^ uVar7,SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0
                                           ) ^ uVar6);
  dStack_80 = (double)CONCAT44((uint)((ulonglong)
                                      UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20)
                               ^ uVar7,SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,
                                             0) ^ uVar6);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_30 = _UNK_150689688;
  dStack_70 = (double)CONCAT44((uint)((ulonglong)
                                      UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20
                                     ) ^ uVar7,
                               SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                               uVar6);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
LAB_1498fd549:
  *(double *)param_3 = local_e8;
  *(double *)((longlong)param_3 + 8) = dStack_e0;
  *(double *)((longlong)param_3 + 0x10) = local_d8;
  *(double *)((longlong)param_3 + 0x18) = dStack_d0;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_c8._0_8_;
  *(undefined8 *)((longlong)param_3 + 0x28) = local_c8._8_8_;
  *(double *)((longlong)param_3 + 0x30) = local_b8;
  *(double *)((longlong)param_3 + 0x38) = dStack_b0;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_a8._0_8_;
  *(undefined8 *)((longlong)param_3 + 0x48) = local_a8._8_8_;
  *(double *)((longlong)param_3 + 0x50) = local_98;
  *(double *)((longlong)param_3 + 0x58) = dStack_90;
  *(double *)((longlong)param_3 + 0x60) = local_88;
  *(double *)((longlong)param_3 + 0x68) = dStack_80;
  *(double *)((longlong)param_3 + 0x70) = local_78;
  *(double *)((longlong)param_3 + 0x78) = dStack_70;
  *(double *)((longlong)param_3 + 0x80) = local_68;
  *(double *)((longlong)param_3 + 0x88) = dStack_60;
  *(double *)((longlong)param_3 + 0x90) = local_58;
  *(double *)((longlong)param_3 + 0x98) = dStack_50;
  *(double *)((longlong)param_3 + 0xa0) = local_48;
  *(double *)((longlong)param_3 + 0xa8) = dStack_40;
  *(double *)((longlong)param_3 + 0xb0) = local_38;
  *(double *)((longlong)param_3 + 0xb8) = dStack_30;
  *(double *)((longlong)param_3 + 0xc0) = local_28;
  *(double *)((longlong)param_3 + 200) = dStack_20;
  return;
}

// execGetPoints @ 1498fd5f0

void __cdecl UPCGPointData::execGetPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)&param_1[10].field_0x20);
  return;
}

// execGetPointsCopy @ 1498fd620

void __cdecl UPCGPointData::execGetPointsCopy(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(param_1 + 0xb);
  _Src = *(void **)&param_1[10].field_0x20;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 0xd0);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execSetPoints @ 1498ffb90

void __cdecl UPCGPointData::execSetPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x648))(param_1);
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)&param_1[10].field_0x20,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

