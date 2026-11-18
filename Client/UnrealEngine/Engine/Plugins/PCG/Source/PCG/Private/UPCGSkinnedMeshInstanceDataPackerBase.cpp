// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149ce57b0

UClass * __cdecl UPCGSkinnedMeshInstanceDataPackerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshInstanceDataPackerBase",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerBase.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSkinnedMeshInstanceDataPackerBase>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshInstanceDataPackerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerBase.InnerSingleton;
}

// UPCGSkinnedMeshInstanceDataPackerBase @ 149d345e0

UPCGSkinnedMeshInstanceDataPackerBase * __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::UPCGSkinnedMeshInstanceDataPackerBase
          (UPCGSkinnedMeshInstanceDataPackerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGSkinnedMeshInstanceDataPackerBase__6B_;
  return this;
}

// UPCGSkinnedMeshInstanceDataPackerBase @ 149d34610

UPCGSkinnedMeshInstanceDataPackerBase * __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::UPCGSkinnedMeshInstanceDataPackerBase
          (UPCGSkinnedMeshInstanceDataPackerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGSkinnedMeshInstanceDataPackerBase__6B_;
  return this;
}

// ~UPCGSkinnedMeshInstanceDataPackerBase @ 149d35130

void __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::~UPCGSkinnedMeshInstanceDataPackerBase
          (UPCGSkinnedMeshInstanceDataPackerBase *this)

{
  *(undefined ***)this = &___7UPCGSkinnedMeshInstanceDataPackerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddTypeToPacking @ 149d3c5f0

bool __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::AddTypeToPacking
          (UPCGSkinnedMeshInstanceDataPackerBase *this,int param_1,
          FPCGSkinnedMeshPackedCustomData *param_2)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 10:
    param_2->NumCustomDataFloats = param_2->NumCustomDataFloats + 1;
    return true;
  case 4:
    param_2->NumCustomDataFloats = param_2->NumCustomDataFloats + 2;
    return true;
  case 5:
  case 0xb:
    param_2->NumCustomDataFloats = param_2->NumCustomDataFloats + 3;
    return true;
  case 6:
  case 7:
    param_2->NumCustomDataFloats = param_2->NumCustomDataFloats + 4;
    return true;
  default:
    return false;
  }
}

// GetAttributeNames @ 149d4e740

bool __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::GetAttributeNames
          (UPCGSkinnedMeshInstanceDataPackerBase *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetAttributeSelectors @ 149d4e940

TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_> * __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::GetAttributeSelectors
          (UPCGSkinnedMeshInstanceDataPackerBase *this,
          TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr =
       (FPCGAttributePropertyInputSelector *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum = -1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149d54940

UClass * __cdecl UPCGSkinnedMeshInstanceDataPackerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshInstanceDataPackerBase",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerBase.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSkinnedMeshInstanceDataPackerBase>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshInstanceDataPackerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshInstanceDataPackerBase.InnerSingleton;
}

// PackCustomDataFromAccessors @ 149d5a280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors
          (UPCGSkinnedMeshInstanceDataPackerBase *this,FPCGSkinnedMeshInstanceList *param_1,
          TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,TSizedDefaultAllocator<32>_>
                   *param_3,FPCGSkinnedMeshPackedCustomData *param_4)

{
  IPCGAttributeAccessor *pIVar1;
  IPCGAttributeAccessorKeys *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  atomic<unsigned_char> *paVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  <lambda_1> local_88;
  <lambda_1> local_78;
  <lambda_1> local_68;
  <lambda_1> local_58;
  <lambda_1> local_48;
  <lambda_1> local_38;
  
  iVar10 = (param_1->Instances).ArrayNum * param_4->NumCustomDataFloats;
  if (param_2->ArrayNum == param_3->ArrayNum) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&param_4->CustomData,iVar10,Default);
    iVar9 = param_2->ArrayNum;
    if (iVar10 == 0) {
      DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
                ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
                  *)(param_2->AllocatorInstance).Data,iVar9);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar12 < iVar9) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pIVar1 = *(IPCGAttributeAccessor **)((param_2->AllocatorInstance).Data + lVar11);
          uVar6 = 0;
          if ((int)uVar12 < param_3->ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pIVar2 = *(IPCGAttributeAccessorKeys **)((param_3->AllocatorInstance).Data + lVar11);
          if (((pIVar1 == (IPCGAttributeAccessor *)0x0) ||
              (pIVar2 == (IPCGAttributeAccessorKeys *)0x0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Accessor && Keys",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGSkinnedMeshInstanceDataPackerBase.cpp"
                                 ,0xd5,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          switch(pIVar1->UnderlyingType) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 10:
            local_88.Callback._12_4_ = uStack_dc;
            local_88.Callback.AccessorPackedIndex = iVar10;
            local_88.Callback.OutPackedCustomData = (FPCGPackedCustomData *)param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<float,_PCGMetadataElementCommon::ApplyOnAccessor<float,_UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors_::__l20::<lambda_1>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_88,AllowBroadcastAndConstructible,0x100,-1);
            if ((!bVar5) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_31242786112012059>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGSkinnedMeshInstanceDataPackerBase.cpp"
                                   ,0xe5,
                                   "PCGMetadataElementCommon::ApplyOnAccessor<float>(*Keys, *Accessor, PackFloats, Flags)"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = iVar10 + 1;
            break;
          case 4:
            local_68.Callback._12_4_ = uStack_bc;
            local_68.Callback.AccessorPackedIndex = iVar10;
            local_68.Callback.OutPackedCustomData = param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TVector2<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector2<double>,_UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors_::__l22::<lambda_3>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_68,AllowBroadcastAndConstructible,0x100,-1);
            if ((!bVar5) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_31242786112012026>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGSkinnedMeshInstanceDataPackerBase.cpp"
                                   ,0x106,
                                   "PCGMetadataElementCommon::ApplyOnAccessor<FVector2D>(*Keys, *Accessor, PackFloats, Flags)"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = iVar10 + 2;
            break;
          case 5:
            local_58.Callback._12_4_ = uStack_ac;
            local_58.Callback.AccessorPackedIndex = iVar10;
            local_58.Callback.OutPackedCustomData = param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TVector<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector<double>,_UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors_::__l23::<lambda_4>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_58,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FVector>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 0x117;
              paVar8 = &bGEnsureHasExecuted<_31242786112012009>;
LAB_149d5a514:
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (paVar8,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGSkinnedMeshInstanceDataPackerBase.cpp"
                                 ,iVar9,pcVar7);
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            goto LAB_149d5a52d;
          case 6:
            local_48.Callback._12_4_ = uStack_9c;
            local_48.Callback.AccessorPackedIndex = iVar10;
            local_48.Callback.OutPackedCustomData = param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TVector4<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector4<double>,_UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors_::__l24::<lambda_5>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_48,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FVector4>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 0x129;
              paVar8 = &bGEnsureHasExecuted<_31242786112011991>;
LAB_149d5a6d4:
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (paVar8,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGSkinnedMeshInstanceDataPackerBase.cpp"
                                 ,iVar9,pcVar7);
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            goto LAB_149d5a6ed;
          case 7:
            local_38.Callback._12_4_ = uStack_8c;
            local_38.Callback.AccessorPackedIndex = iVar10;
            local_38.Callback.OutPackedCustomData = (FPCGPackedCustomData *)param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TQuat<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TQuat<double>,_UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors_::__l25::<lambda_6>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_38,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FQuat>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 0x13b;
              paVar8 = &bGEnsureHasExecuted<_31242786112011973>;
              goto LAB_149d5a6d4;
            }
LAB_149d5a6ed:
            iVar10 = iVar10 + 4;
            break;
          case 0xb:
            local_78.Callback._12_4_ = uStack_cc;
            local_78.Callback.AccessorPackedIndex = iVar10;
            local_78.Callback.OutPackedCustomData = (FPCGPackedCustomData *)param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TRotator<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TRotator<double>,_UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAccessors_::__l21::<lambda_2>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_78,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FRotator>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 0xf6;
              paVar8 = &bGEnsureHasExecuted<_31242786112012042>;
              goto LAB_149d5a514;
            }
LAB_149d5a52d:
            iVar10 = iVar10 + 3;
          }
          iVar9 = param_2->ArrayNum;
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)uVar12 < iVar9);
      }
      DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
                ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
                  *)(param_2->AllocatorInstance).Data,iVar9);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_31242786112012099>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGSkinnedMeshInstanceDataPackerBase.cpp"
                       ,0xbd,"Accessors.Num() == AccessorKeys.Num()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&param_4->CustomData,iVar10,Default);
    DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
              ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
                *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
              *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// PackCustomDataFromAttributes @ 149d5ba60

void __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAttributes
          (UPCGSkinnedMeshInstanceDataPackerBase *this,FPCGSkinnedMeshInstanceList *param_1,
          TArray<FPCGMetadataAttributeBase_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FPCGSkinnedMeshPackedCustomData *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  long64 lVar11;
  long64 lVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  double dVar17;
  undefined1 local_138;
  undefined1 local_137 [3];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  uint local_e0;
  FScriptContainerElement *local_d8;
  UObject *local_d0;
  FScriptContainerElement *local_c8;
  TVector2<double>_u_0 local_c0;
  TRotator<double> local_b0;
  TVector<double>_u_0 local_98;
  TVector4<double>_u_0 local_78;
  TQuat<double> local_58;
  
  local_d0 = FWeakObjectPtr::Get(&(param_1->PointData).WeakPtr);
  pFVar15 = (param_1->InstancePointIndices).AllocatorInstance.Data;
  local_e0 = (param_1->InstancePointIndices).ArrayNum;
  uVar10 = (ulonglong)(int)local_e0;
  local_c8 = pFVar15 + uVar10 * 4;
  do {
    pFVar14 = local_c8;
    pUVar6 = local_d0;
    local_d8 = pFVar15;
    if ((param_1->InstancePointIndices).ArrayNum != (int)uVar10) {
      local_138 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_138);
    }
    if (pFVar15 == pFVar14) {
      return;
    }
    uVar2 = *(uint *)pFVar15;
    lVar12 = (long64)(int)uVar2;
    if (pUVar6 != (UObject *)0x0) {
      uVar8 = 0;
      if ((int)uVar2 < *(int *)(pUVar6 + 0xb)) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar12 = *(long64 *)(lVar12 * 0xd0 + 200 + *(longlong *)&pUVar6[10].field_0x20);
    }
    pFVar14 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    pFVar15 = pFVar14 + (longlong)iVar3 * 8;
LAB_149d5bb54:
    if (param_2->ArrayNum != iVar3) {
      local_137[0] = 0;
      `TCheckedPointerIterator<FPCGMetadataAttributeBase_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_137);
    }
    if (pFVar14 != pFVar15) {
      this_00 = *(FPCGMetadataAttribute<UE::Math::TQuat<double>_> **)pFVar14;
      if ((this_00 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeBase",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGSkinnedMeshInstanceDataPackerBase.cpp"
                             ,0x49,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      switch(*(undefined2 *)&this_00->field_0x70) {
      case 0:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        local_130 = FPCGMetadataAttribute<float>::GetValue
                              ((FPCGMetadataAttribute<float> *)this_00,iVar9);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_130) &&
            ((FScriptContainerElement *)&local_130 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        pFVar14 = pFVar14 + 8;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_130;
        goto LAB_149d5bb54;
      case 1:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        dVar17 = FPCGMetadataAttribute<double>::GetValue
                           ((FPCGMetadataAttribute<double> *)this_00,iVar9);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_12c = (float)dVar17;
        if (((pFVar4 <= (FScriptContainerElement *)&local_12c) &&
            ((FScriptContainerElement *)&local_12c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        pFVar14 = pFVar14 + 8;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_12c;
        goto LAB_149d5bb54;
      case 2:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        iVar9 = FPCGMetadataAttribute<int>::GetValue((FPCGMetadataAttribute<int> *)this_00,iVar9);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_128 = (float)iVar9;
        if (((pFVar4 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        pFVar14 = pFVar14 + 8;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_128;
        goto LAB_149d5bb54;
      case 3:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        lVar11 = FPCGMetadataAttribute<__int64>::GetValue
                           ((FPCGMetadataAttribute<__int64> *)this_00,iVar9);
        local_124 = (float)lVar11;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_124) &&
            ((FScriptContainerElement *)&local_124 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        pFVar14 = pFVar14 + 8;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_124;
        goto LAB_149d5bb54;
      case 4:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)this_00,
                   (TVector2<double> *)&local_c0._s_0,iVar9);
        local_114 = (float)local_c0._s_0.X;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_114) &&
            ((FScriptContainerElement *)&local_114 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_114;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_110 = (float)local_c0._s_0.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_110) &&
            ((FScriptContainerElement *)&local_110 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        pFVar14 = pFVar14 + 8;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_110;
        goto LAB_149d5bb54;
      case 5:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)this_00,
                   (TVector<double> *)&local_98._s_0,iVar9);
        pTVar13 = &param_3->CustomData;
        local_10c = (float)local_98._s_0.X;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_10c) &&
            ((FScriptContainerElement *)&local_10c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_10c;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_108 = (float)local_98._s_0.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_108;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_104 = (float)local_98._s_0.Z;
        if (((pFVar4 <= (FScriptContainerElement *)&local_104) &&
            ((FScriptContainerElement *)&local_104 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        fVar16 = local_104;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
          fVar16 = local_104;
        }
        break;
      case 6:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)this_00,
                   (TVector4<double> *)&local_78._s_0,iVar9);
        pTVar13 = &param_3->CustomData;
        local_100 = (float)local_78._s_0.X;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_100;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_fc = (float)local_78._s_0.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_fc) &&
            ((FScriptContainerElement *)&local_fc <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_fc;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_f8 = (float)local_78._s_0.Z;
        if (((pFVar4 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_f8;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_f4 = (float)local_78._s_0.W;
        if (((pFVar4 <= (FScriptContainerElement *)&local_f4) &&
            ((FScriptContainerElement *)&local_f4 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        fVar16 = local_f4;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
          fVar16 = local_f4;
        }
        break;
      case 7:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(this_00,&local_58,iVar9);
        pTVar13 = &param_3->CustomData;
        local_f0 = (float)local_58.X;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_f0;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_ec = (float)local_58.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_ec) &&
            ((FScriptContainerElement *)&local_ec <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_ec;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_e8 = (float)local_58.Z;
        if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_e8;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_e4 = (float)local_58.W;
        if (((pFVar4 <= (FScriptContainerElement *)&local_e4) &&
            ((FScriptContainerElement *)&local_e4 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        fVar16 = local_e4;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
          fVar16 = local_e4;
        }
        break;
      default:
        goto switchD_149d5bbbf_caseD_8;
      case 10:
        goto switchD_149d5bbbf_caseD_a;
      case 0xb:
        iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
        FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)this_00,&local_b0,iVar9);
        pTVar13 = &param_3->CustomData;
        local_120 = (float)local_b0.Roll;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_120;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_11c = (float)local_b0.Pitch;
        if (((pFVar4 <= (FScriptContainerElement *)&local_11c) &&
            ((FScriptContainerElement *)&local_11c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar9 + 1;
        *(float *)((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_11c;
        pFVar4 = (pTVar13->AllocatorInstance).Data;
        local_118 = (float)local_b0.Yaw;
        if (((pFVar4 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_3->CustomData).ArrayNum;
        fVar16 = local_118;
        if (iVar9 == (param_3->CustomData).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,&(param_3->CustomData).ArrayMax);
          fVar16 = local_118;
        }
      }
      (param_3->CustomData).ArrayNum = iVar9 + 1;
      *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = fVar16;
switchD_149d5bbbf_caseD_8:
      pFVar14 = pFVar14 + 8;
      goto LAB_149d5bb54;
    }
    pFVar15 = local_d8 + 4;
    uVar10 = (ulonglong)local_e0;
  } while( true );
switchD_149d5bbbf_caseD_a:
  iVar9 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar12);
  bVar7 = FPCGMetadataAttribute<bool>::GetValue((FPCGMetadataAttribute<bool> *)this_00,iVar9);
  pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
  local_134 = (float)bVar7;
  if (((pFVar4 <= (FScriptContainerElement *)&local_134) &&
      ((FScriptContainerElement *)&local_134 < pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4
      )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (param_3->CustomData).ArrayNum;
  piVar1 = &(param_3->CustomData).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
  }
  (param_3->CustomData).ArrayNum = iVar9 + 1;
  pFVar14 = pFVar14 + 8;
  *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_134;
  goto LAB_149d5bb54;
}

// PackCustomDataFromAttributes @ 149d5cb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::PackCustomDataFromAttributes
          (UPCGSkinnedMeshInstanceDataPackerBase *this,FPCGSkinnedMeshInstanceList *param_1,
          UPCGMetadata *param_2,TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          FPCGSkinnedMeshPackedCustomData *param_4)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  FPCGMetadataDomainID FVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  undefined1 local_res18 [8];
  FPCGMetadataAttributeBase *local_78;
  TArray<FPCGMetadataAttributeBase_const_*,TSizedDefaultAllocator<32>_> local_70;
  FName local_60;
  FPCGMetadataDomainID FStack_58;
  FPCGAttributeIdentifier local_48;
  
  if (param_2 == (UPCGMetadata *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      return;
    }
  }
  else {
    pFVar7 = (FName *)(param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pFVar1 = pFVar7 + iVar2;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar7 == pFVar1) break;
      local_60 = *pFVar7;
      FStack_58 = PCGMetadataDomainID::Default;
      FVar4 = FStack_58;
      FStack_58._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_48.MetadataDomain.Flag = FStack_58.Flag;
      local_48.MetadataDomain._1_3_ = FStack_58._1_3_;
      local_48.MetadataDomain.CustomFlag = FStack_58.CustomFlag;
      local_48.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_58 = FVar4;
      local_48.Name = local_60;
      local_78 = UPCGMetadata::GetConstAttribute(param_2,&local_48);
      if (((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_70.ArrayNum;
      if (local_70.ArrayNum == local_70.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      pFVar7 = pFVar7 + 1;
      local_70.ArrayNum = iVar6 + 1;
      *(FPCGMetadataAttributeBase **)(local_70.AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_78;
    }
    PackCustomDataFromAttributes(this,param_1,&local_70,param_4);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return;
}

// PackInstances @ 149d5d030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::PackInstances
          (UPCGSkinnedMeshInstanceDataPackerBase *this,FPCGContext *param_1,UPCGSpatialData *param_2
          ,FPCGSkinnedMeshInstanceList *param_3,FPCGSkinnedMeshPackedCustomData *param_4)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType _Src;
  int iVar3;
  UFunction *this_00;
  UClass *pUVar4;
  longlong lVar5;
  undefined1 auStackY_418 [32];
  FPCGContext local_3d8;
  UPCGSpatialData *local_180;
  FPCGSkinnedMeshInstanceList local_178;
  undefined8 uStack_70;
  TArray<float,TSizedDefaultAllocator<32>_> local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_418;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGSkinnedMeshInstanceDataPackerBase_PackInstances);
  pUVar4 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
    FPCGContext::FPCGContext(&local_3d8);
    FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
              (&local_178.Descriptor);
    local_178.Instances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.InstancePointIndices.ArrayNum = 0;
    local_178.InstancePointIndices.ArrayMax = 0;
    uStack_70 = 0;
    local_178.Instances.ArrayNum = 0;
    local_178.Instances.ArrayMax = 0;
    local_178.PointData.WeakPtr.ObjectIndex = 0;
    local_178.PointData.WeakPtr.ObjectSerialNumber = 0;
    local_178.InstancePointIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    FPCGContext::operator=(&local_3d8,param_1);
    local_180 = param_2;
    FPCGSkinnedMeshInstanceList::operator=(&local_178,param_3);
    uStack_70._0_4_ = param_4->SequenceIndex;
    pTVar1 = &param_4->CustomData;
    uStack_70._4_4_ = param_4->NumCustomDataFloats;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(&local_68,pTVar1);
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_3d8);
    FPCGContext::operator=(param_1,&local_3d8);
    _Src.Data = local_68.AllocatorInstance.Data;
    param_4->SequenceIndex = (int)uStack_70;
    param_4->NumCustomDataFloats = uStack_70._4_4_;
    if (pTVar1 != &local_68) {
      iVar3 = local_68.ArrayNum;
      lVar5 = (longlong)local_68.ArrayNum;
      piVar2 = &(param_4->CustomData).ArrayMax;
      (param_4->CustomData).ArrayNum = local_68.ArrayNum;
      if ((local_68.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_68.ArrayNum,*piVar2,&pTVar1->AllocatorInstance,local_68.ArrayNum,piVar2
                  );
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,lVar5 << 2);
        }
      }
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_178.InstancePointIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.InstancePointIndices.AllocatorInstance.Data);
    }
    if (local_178.Instances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Instances.AllocatorInstance.Data);
    }
    if (local_178.Descriptor.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_178.Descriptor.ComponentTags.AllocatorInstance.Data);
    }
    FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
              ((FSoftSkinnedMeshComponentDescriptor *)&local_178);
    FPCGContext::~FPCGContext(&local_3d8);
  }
  else {
    (**(code **)(*(longlong *)this + 0x2b0))(this,param_1,param_2,param_3);
  }
  return;
}

// PackInstances_Implementation @ 149d5e190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshInstanceDataPackerBase::PackInstances_Implementation
          (UPCGSkinnedMeshInstanceDataPackerBase *this,FPCGContext *param_1,UPCGSpatialData *param_2
          ,FPCGSkinnedMeshInstanceList *param_3,FPCGSkinnedMeshPackedCustomData *param_4)

{
  FText *this_00;
  bool bVar1;
  FString local_40;
  FString local_30;
  FText local_20;
  
  if (1 < (byte)LogPCG._0_1_) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_20,L"PCGSkinnedMeshInstanceDataPackerBase",
                         L"SkinnedMeshInstanceDataPackerBaseFailed",
                         L"Unable to execute SkinnedMeshInstanceDataPacker pure virtual base function, override the PackInstances function or use a default implementation."
                        );
    FText::ToString(this_00);
    bVar1 = param_1 != (FPCGContext *)0x0;
    if (bVar1) {
      FPCGContext::GetTaskName(param_1,&local_30);
      FPCGContext::GetExecutionSourceName(param_1,&local_40);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar1) && (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
    }
  }
  return;
}

// StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerBase @ 149d66350

void __cdecl
UPCGSkinnedMeshInstanceDataPackerBase::StaticRegisterNativesUPCGSkinnedMeshInstanceDataPackerBase
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPCGSkinnedMeshInstanceDataPackerBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddTypeToPacking @ 149d69770

void __cdecl
UPCGSkinnedMeshInstanceDataPackerBase::execAddTypeToPacking
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 local_res10 [2];
  uchar local_28 [8];
  void *local_20;
  undefined8 local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 10:
    *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
    uVar2 = 1;
    break;
  case 4:
    *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 2;
    uVar2 = 1;
    break;
  case 5:
  case 0xb:
    *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 3;
    uVar2 = 1;
    break;
  case 6:
  case 7:
    *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 4;
    uVar2 = 1;
    break;
  default:
    uVar2 = 0;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execPackCustomDataFromAttributes @ 149d6f4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGSkinnedMeshInstanceDataPackerBase::execPackCustomDataFromAttributes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FName *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  UPCGMetadata *this;
  FPCGMetadataDomainID FVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FPCGSkinnedMeshInstanceList *pFVar10;
  void **ppvVar11;
  FPCGSkinnedMeshPackedCustomData *pFVar12;
  undefined1 auStack_228 [32];
  FPCGMetadataAttributeBase **local_208;
  FScriptContainerElement *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8 [8];
  TArray<FPCGMetadataAttributeBase_const_*,TSizedDefaultAllocator<32>_> local_1d0;
  FPCGMetadataAttributeBase *local_1c0;
  UPCGMetadata *local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  FPCGSkinnedMeshPackedCustomData local_1a0;
  UObject *local_188;
  FName local_180;
  FPCGMetadataDomainID FStack_178;
  FPCGAttributeIdentifier local_168;
  FPCGSkinnedMeshInstanceList local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_188 = param_1;
  FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
            (&local_148.Descriptor);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_148.Instances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Instances.ArrayNum = 0;
  local_148.Instances.ArrayMax = 0;
  local_148.PointData.WeakPtr.ObjectIndex = 0;
  local_148.PointData.WeakPtr.ObjectSerialNumber = 0;
  local_148.InstancePointIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.InstancePointIndices.ArrayNum = 0;
  local_148.InstancePointIndices.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_1b8 = (UPCGMetadata *)0x0;
  pFVar10 = &local_148;
  if ((FPCGSkinnedMeshInstanceList *)param_2->MostRecentPropertyAddress !=
      (FPCGSkinnedMeshInstanceList *)0x0) {
    pFVar10 = (FPCGSkinnedMeshInstanceList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1b0 = (void *)0x0;
  local_1a8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1a0.SequenceIndex = 0;
  local_1a0.NumCustomDataFloats = 0;
  local_1a0.CustomData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ppvVar11 = &local_1b0;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar11 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_1a0.CustomData.ArrayNum = 0;
  local_1a0.CustomData.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  this = local_1b8;
  pFVar12 = &local_1a0;
  if ((FPCGSkinnedMeshPackedCustomData *)param_2->MostRecentPropertyAddress !=
      (FPCGSkinnedMeshPackedCustomData *)0x0) {
    pFVar12 = (FPCGSkinnedMeshPackedCustomData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1b8 == (UPCGMetadata *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    pFVar9 = *ppvVar11;
    iVar3 = *(int *)(ppvVar11 + 1);
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
    pFVar2 = pFVar9 + iVar3;
    while( true ) {
      if (*(int *)(ppvVar11 + 1) != iVar3) {
        local_1d8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1d8);
      }
      if (pFVar9 == pFVar2) break;
      local_180 = *pFVar9;
      FStack_178 = PCGMetadataDomainID::Default;
      FVar6 = FStack_178;
      FStack_178._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_168.MetadataDomain.Flag = FStack_178.Flag;
      local_168.MetadataDomain._1_3_ = FStack_178._1_3_;
      local_168.MetadataDomain.CustomFlag = FStack_178.CustomFlag;
      local_168.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_178 = FVar6;
      local_168.Name = local_180;
      local_1c0 = UPCGMetadata::GetConstAttribute(this,&local_168);
      if (local_1d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1c0) {
        if ((FScriptContainerElement *)&local_1c0 <
            local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayMax * 8) {
          local_1f0 = (longlong)local_1d0.ArrayNum;
          local_1e8 = 8;
          local_208 = &local_1c0;
          local_200 = local_1d0.AllocatorInstance.Data;
          local_1f8 = (longlong)local_1d0.ArrayMax;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      iVar8 = local_1d0.ArrayNum;
      if (local_1d0.ArrayNum == local_1d0.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_1d0.AllocatorInstance,&local_1d0.ArrayMax);
      }
      pFVar9 = pFVar9 + 1;
      local_1d0.ArrayNum = iVar8 + 1;
      *(FPCGMetadataAttributeBase **)(local_1d0.AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_1c0;
    }
    PackCustomDataFromAttributes
              ((UPCGSkinnedMeshInstanceDataPackerBase *)local_188,pFVar10,&local_1d0,pFVar12);
    if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
  }
  if (local_1a0.CustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.CustomData.AllocatorInstance.Data);
  }
  if (local_1b0 != (void *)0x0) {
    FMemory::Free(local_1b0);
  }
  if (local_148.InstancePointIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.InstancePointIndices.AllocatorInstance.Data);
  }
  if (local_148.Instances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Instances.AllocatorInstance.Data);
  }
  if (local_148.Descriptor.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Descriptor.ComponentTags.AllocatorInstance.Data);
  }
  FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)&local_148);
  return;
}

// execPackInstances @ 149d6fad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGSkinnedMeshInstanceDataPackerBase::execPackInstances
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_3f8 [32];
  uchar *local_3d8;
  undefined8 local_3c8;
  uchar local_3c0 [8];
  void *local_3b8;
  undefined8 local_3b0;
  FPCGSoftSkinnedMeshComponentDescriptor local_3a8;
  void *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  void *local_2b0;
  undefined8 local_2a8;
  FPCGContext local_298;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  FPCGContext::FPCGContext(&local_298);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_298);
  }
  local_3c8 = 0;
  pFVar3 = &local_298;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3c8);
  }
  FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor(&local_3a8);
  local_2d0 = (void *)0x0;
  local_2c8 = 0;
  local_2b8 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3a8);
  }
  local_3c0[0] = '\0';
  local_3c0[1] = '\0';
  local_3c0[2] = '\0';
  local_3c0[3] = '\0';
  local_3c0[4] = '\0';
  local_3c0[5] = '\0';
  local_3c0[6] = '\0';
  local_3c0[7] = '\0';
  local_3b8 = (void *)0x0;
  pFVar2 = &local_3a8;
  if ((FPCGSoftSkinnedMeshComponentDescriptor *)param_2->MostRecentPropertyAddress !=
      (FPCGSoftSkinnedMeshComponentDescriptor *)0x0) {
    pFVar2 = (FPCGSoftSkinnedMeshComponentDescriptor *)param_2->MostRecentPropertyAddress;
  }
  local_3b0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_3c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_3c0);
  }
  local_3d8 = local_3c0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_3d8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,pFVar3,local_3c8,pFVar2);
  if (local_3b8 != (void *)0x0) {
    FMemory::Free(local_3b8);
  }
  if (local_2b0 != (void *)0x0) {
    FMemory::Free(local_2b0);
  }
  if (local_2d0 != (void *)0x0) {
    FMemory::Free(local_2d0);
  }
  if (local_3a8.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.ComponentTags.AllocatorInstance.Data);
  }
  FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
            ((FSoftSkinnedMeshComponentDescriptor *)&local_3a8);
  FPCGContext::~FPCGContext(&local_298);
  return;
}

