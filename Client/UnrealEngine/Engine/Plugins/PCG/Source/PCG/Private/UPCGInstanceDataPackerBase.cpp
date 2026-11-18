// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149ce5a60

UClass * __cdecl UPCGInstanceDataPackerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataPackerBase",
               &Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.InnerSingleton,
               StaticRegisterNativesUPCGInstanceDataPackerBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGInstanceDataPackerBase>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataPackerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.InnerSingleton;
}

// UPCGInstanceDataPackerBase @ 149d34320

UPCGInstanceDataPackerBase * __thiscall
UPCGInstanceDataPackerBase::UPCGInstanceDataPackerBase
          (UPCGInstanceDataPackerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGInstanceDataPackerBase__6B_;
  return this;
}

// UPCGInstanceDataPackerBase @ 149d34350

UPCGInstanceDataPackerBase * __thiscall
UPCGInstanceDataPackerBase::UPCGInstanceDataPackerBase
          (UPCGInstanceDataPackerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGInstanceDataPackerBase__6B_;
  return this;
}

// ~UPCGInstanceDataPackerBase @ 149d34fb0

void __thiscall
UPCGInstanceDataPackerBase::~UPCGInstanceDataPackerBase(UPCGInstanceDataPackerBase *this)

{
  *(undefined ***)this = &___7UPCGInstanceDataPackerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddTypeToPacking @ 149d3c570

bool __thiscall
UPCGInstanceDataPackerBase::AddTypeToPacking
          (UPCGInstanceDataPackerBase *this,int param_1,FPCGPackedCustomData *param_2)

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

// GetAttributeNames @ 149d4e5f0

bool __thiscall
UPCGInstanceDataPackerBase::GetAttributeNames
          (UPCGInstanceDataPackerBase *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetAttributeSelectors @ 149d4e890

TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_> * __thiscall
UPCGInstanceDataPackerBase::GetAttributeSelectors
          (UPCGInstanceDataPackerBase *this,
          TOptional<TArrayView<FPCGAttributePropertyInputSelector_const_,int>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr =
       (FPCGAttributePropertyInputSelector *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum = -1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149d544e0

UClass * __cdecl UPCGInstanceDataPackerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataPackerBase",
               &Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.InnerSingleton,
               StaticRegisterNativesUPCGInstanceDataPackerBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPCGInstanceDataPackerBase>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataPackerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataPackerBase.InnerSingleton;
}

// PackCustomDataFromAccessors @ 149d59d60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPCGInstanceDataPackerBase::PackCustomDataFromAccessors
          (UPCGInstanceDataPackerBase *this,FPCGMeshInstanceList *param_1,
          TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,TSizedDefaultAllocator<32>_>
                   *param_3,FPCGPackedCustomData *param_4)

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
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerBase.cpp"
                                 ,0xd7,L""), bVar5)) {
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
            local_88.Callback.OutPackedCustomData = param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<float,_PCGMetadataElementCommon::ApplyOnAccessor<float,_UPCGInstanceDataPackerBase::PackCustomDataFromAccessors_::__l20::<lambda_1>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_88,AllowBroadcastAndConstructible,0x100,-1);
            if ((!bVar5) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6040725949677305625>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerBase.cpp"
                                   ,0xe7,
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
            local_68.Callback.OutPackedCustomData = (FPCGSkinnedMeshPackedCustomData *)param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TVector2<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector2<double>,_UPCGInstanceDataPackerBase::PackCustomDataFromAccessors_::__l22::<lambda_3>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_68,AllowBroadcastAndConstructible,0x100,-1);
            if ((!bVar5) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6040725949677305592>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerBase.cpp"
                                   ,0x108,
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
            local_58.Callback.OutPackedCustomData = (FPCGSkinnedMeshPackedCustomData *)param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TVector<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector<double>,_UPCGInstanceDataPackerBase::PackCustomDataFromAccessors_::__l23::<lambda_4>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_58,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FVector>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 0x119;
              paVar8 = &bGEnsureHasExecuted<_6040725949677305575>;
LAB_149d59ff4:
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (paVar8,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerBase.cpp"
                                 ,iVar9,pcVar7);
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            goto LAB_149d5a00d;
          case 6:
            local_48.Callback._12_4_ = uStack_9c;
            local_48.Callback.AccessorPackedIndex = iVar10;
            local_48.Callback.OutPackedCustomData = (FPCGSkinnedMeshPackedCustomData *)param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TVector4<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TVector4<double>,_UPCGInstanceDataPackerBase::PackCustomDataFromAccessors_::__l24::<lambda_5>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_48,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FVector4>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 299;
              paVar8 = &bGEnsureHasExecuted<_6040725949677305557>;
LAB_149d5a1b4:
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (paVar8,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerBase.cpp"
                                 ,iVar9,pcVar7);
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            goto LAB_149d5a1cd;
          case 7:
            local_38.Callback._12_4_ = uStack_8c;
            local_38.Callback.AccessorPackedIndex = iVar10;
            local_38.Callback.OutPackedCustomData = param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TQuat<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TQuat<double>,_UPCGInstanceDataPackerBase::PackCustomDataFromAccessors_::__l25::<lambda_6>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_38,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FQuat>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 0x13d;
              paVar8 = &bGEnsureHasExecuted<_6040725949677305539>;
              goto LAB_149d5a1b4;
            }
LAB_149d5a1cd:
            iVar10 = iVar10 + 4;
            break;
          case 0xb:
            local_78.Callback._12_4_ = uStack_cc;
            local_78.Callback.AccessorPackedIndex = iVar10;
            local_78.Callback.OutPackedCustomData = param_4;
            bVar5 = PCGMetadataElementCommon::
                    ApplyOnAccessorRange<UE::Math::TRotator<double>,_PCGMetadataElementCommon::ApplyOnAccessor<UE::Math::TRotator<double>,_UPCGInstanceDataPackerBase::PackCustomDataFromAccessors_::__l21::<lambda_2>_&>_::__l2::<lambda_1>_>
                              (pIVar2,pIVar1,&local_78,AllowBroadcastAndConstructible,0x100,-1);
            if (!bVar5) {
              pcVar7 = 
              "PCGMetadataElementCommon::ApplyOnAccessor<FRotator>(*Keys, *Accessor, PackFloats, Flags)"
              ;
              iVar9 = 0xf8;
              paVar8 = &bGEnsureHasExecuted<_6040725949677305608>;
              goto LAB_149d59ff4;
            }
LAB_149d5a00d:
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
                      (&bGEnsureHasExecuted<_6040725949677305665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerBase.cpp"
                       ,0xbf,"Accessors.Num() == AccessorKeys.Num()");
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

// PackCustomDataFromAttributes @ 149d5a7a0

void __thiscall
UPCGInstanceDataPackerBase::PackCustomDataFromAttributes
          (UPCGInstanceDataPackerBase *this,FPCGMeshInstanceList *param_1,
          TArray<FPCGMetadataAttributeBase_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FPCGPackedCustomData *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  longlong *plVar10;
  long64 lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  long64 lVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  double dVar17;
  undefined1 local_198;
  undefined1 local_197 [3];
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  uint local_140;
  FScriptContainerElement *local_138;
  UObject *local_130;
  FScriptContainerElement *local_128;
  TVector2<double>_u_0 local_120;
  longlong local_110;
  undefined8 uStack_108;
  longlong local_100;
  longlong lStack_f8;
  TRotator<double> local_f0;
  TVector<double>_u_0 local_d8;
  longlong local_c0 [2];
  undefined4 local_b0;
  TVector4<double>_u_0 local_98;
  TQuat<double> local_78;
  undefined1 local_58 [32];
  
  pUVar9 = FWeakObjectPtr::Get(&(param_1->PointData).WeakPtr);
  local_130 = pUVar9;
  if (pUVar9 == (UObject *)0x0) {
    local_c0[0] = 0;
    plVar10 = local_c0;
    local_c0[1] = 0;
    local_b0 = 0;
  }
  else {
    plVar10 = (longlong *)(**(code **)(*(longlong *)pUVar9 + 0x538))(pUVar9,local_58);
  }
  local_140 = (param_1->InstancesIndices).ArrayNum;
  uVar12 = (ulonglong)(int)local_140;
  pFVar13 = (param_1->InstancesIndices).AllocatorInstance.Data;
  local_110 = *plVar10;
  uStack_108 = plVar10[1];
  local_100 = plVar10[2];
  lStack_f8 = plVar10[3];
  local_128 = pFVar13 + uVar12 * 4;
  do {
    pFVar15 = local_128;
    local_138 = pFVar13;
    if ((param_1->InstancesIndices).ArrayNum != (int)uVar12) {
      local_198 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_198);
    }
    if (pFVar13 == pFVar15) {
      return;
    }
    uVar2 = *(uint *)pFVar13;
    lVar14 = (long64)(int)uVar2;
    if (pUVar9 != (UObject *)0x0) {
      uVar7 = 0;
      if ((int)uVar2 < (int)local_100) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = *(long64 *)
                ((longlong)((int)uVar2 % uStack_108._4_4_) * (longlong)(int)uStack_108 + local_110);
    }
    pFVar15 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    pFVar13 = pFVar15 + (longlong)iVar3 * 8;
LAB_149d5a8e3:
    if (param_2->ArrayNum != iVar3) {
      local_197[0] = 0;
      `TCheckedPointerIterator<FPCGMetadataAttributeBase_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_197);
    }
    if (pFVar15 != pFVar13) {
      this_00 = *(FPCGMetadataAttribute<UE::Math::TQuat<double>_> **)pFVar15;
      if ((this_00 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeBase",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\InstanceDataPackers\\PCGInstanceDataPackerBase.cpp"
                             ,0x4b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      switch(*(undefined2 *)&this_00->field_0x70) {
      case 0:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        local_190 = FPCGMetadataAttribute<float>::GetValue
                              ((FPCGMetadataAttribute<float> *)this_00,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_190) &&
            ((FScriptContainerElement *)&local_190 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 8;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_190;
        goto LAB_149d5a8e3;
      case 1:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        dVar17 = FPCGMetadataAttribute<double>::GetValue
                           ((FPCGMetadataAttribute<double> *)this_00,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_18c = (float)dVar17;
        if (((pFVar4 <= (FScriptContainerElement *)&local_18c) &&
            ((FScriptContainerElement *)&local_18c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        fVar16 = local_18c;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
          fVar16 = local_18c;
        }
        break;
      case 2:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        iVar8 = FPCGMetadataAttribute<int>::GetValue((FPCGMetadataAttribute<int> *)this_00,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_188 = (float)iVar8;
        if (((pFVar4 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 8;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_188;
        goto LAB_149d5a8e3;
      case 3:
        goto switchD_149d5a94e_caseD_3;
      case 4:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)this_00,
                   (TVector2<double> *)&local_120._s_0,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_174 = (float)local_120._s_0.X;
        if (((pFVar4 <= (FScriptContainerElement *)&local_174) &&
            ((FScriptContainerElement *)&local_174 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_174;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_170 = (float)local_120._s_0.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        fVar16 = local_170;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
          fVar16 = local_170;
        }
        break;
      case 5:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TVector<double>_> *)this_00,
                   (TVector<double> *)&local_d8._s_0,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_16c = (float)local_d8._s_0.X;
        if (((pFVar4 <= (FScriptContainerElement *)&local_16c) &&
            ((FScriptContainerElement *)&local_16c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_16c;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_168 = (float)local_d8._s_0.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_168;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_164 = (float)local_d8._s_0.Z;
        if (((pFVar4 <= (FScriptContainerElement *)&local_164) &&
            ((FScriptContainerElement *)&local_164 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        fVar16 = local_164;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
          fVar16 = local_164;
        }
        break;
      case 6:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)this_00,
                   (TVector4<double> *)&local_98._s_0,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_160 = (float)local_98._s_0.X;
        if (((pFVar4 <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_160;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_15c = (float)local_98._s_0.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_15c) &&
            ((FScriptContainerElement *)&local_15c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_15c;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_158 = (float)local_98._s_0.Z;
        if (((pFVar4 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_158;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_154 = (float)local_98._s_0.W;
        if (((pFVar4 <= (FScriptContainerElement *)&local_154) &&
            ((FScriptContainerElement *)&local_154 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        fVar16 = local_154;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
          fVar16 = local_154;
        }
        break;
      case 7:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(this_00,&local_78,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_150 = (float)local_78.X;
        if (((pFVar4 <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_150;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_14c = (float)local_78.Y;
        if (((pFVar4 <= (FScriptContainerElement *)&local_14c) &&
            ((FScriptContainerElement *)&local_14c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_14c;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_148 = (float)local_78.Z;
        if (((pFVar4 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_148;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_144 = (float)local_78.W;
        if (((pFVar4 <= (FScriptContainerElement *)&local_144) &&
            ((FScriptContainerElement *)&local_144 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        fVar16 = local_144;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
          fVar16 = local_144;
        }
        break;
      default:
        goto switchD_149d5a94e_caseD_8;
      case 10:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        bVar6 = FPCGMetadataAttribute<bool>::GetValue((FPCGMetadataAttribute<bool> *)this_00,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_194 = (float)bVar6;
        if (((pFVar4 <= (FScriptContainerElement *)&local_194) &&
            ((FScriptContainerElement *)&local_194 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        piVar1 = &(param_3->CustomData).ArrayMax;
        fVar16 = local_194;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
          fVar16 = local_194;
        }
        break;
      case 0xb:
        iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
        FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                  ((FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)this_00,&local_f0,iVar8);
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_180 = (float)local_f0.Roll;
        if (((pFVar4 <= (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_180;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_17c = (float)local_f0.Pitch;
        if (((pFVar4 <= (FScriptContainerElement *)&local_17c) &&
            ((FScriptContainerElement *)&local_17c <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
        }
        (param_3->CustomData).ArrayNum = iVar8 + 1;
        *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_17c;
        pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
        local_178 = (float)local_f0.Yaw;
        if (((pFVar4 <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_3->CustomData).ArrayNum;
        fVar16 = local_178;
        if (iVar8 == (param_3->CustomData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->CustomData).AllocatorInstance,
                             &(param_3->CustomData).ArrayMax);
          fVar16 = local_178;
        }
      }
      (param_3->CustomData).ArrayNum = iVar8 + 1;
      *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = fVar16;
switchD_149d5a94e_caseD_8:
      pFVar15 = pFVar15 + 8;
      goto LAB_149d5a8e3;
    }
    pFVar13 = local_138 + 4;
    uVar12 = (ulonglong)local_140;
    pUVar9 = local_130;
  } while( true );
switchD_149d5a94e_caseD_3:
  iVar8 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this_00,lVar14);
  lVar11 = FPCGMetadataAttribute<__int64>::GetValue((FPCGMetadataAttribute<__int64> *)this_00,iVar8)
  ;
  pFVar4 = (param_3->CustomData).AllocatorInstance.Data;
  local_184 = (float)lVar11;
  if (((pFVar4 <= (FScriptContainerElement *)&local_184) &&
      ((FScriptContainerElement *)&local_184 < pFVar4 + (longlong)(param_3->CustomData).ArrayMax * 4
      )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (param_3->CustomData).ArrayNum;
  piVar1 = &(param_3->CustomData).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(param_3->CustomData).AllocatorInstance,piVar1);
  }
  (param_3->CustomData).ArrayNum = iVar8 + 1;
  pFVar15 = pFVar15 + 8;
  *(float *)((param_3->CustomData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_184;
  goto LAB_149d5a8e3;
}

// PackCustomDataFromAttributes @ 149d5b890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGInstanceDataPackerBase::PackCustomDataFromAttributes
          (UPCGInstanceDataPackerBase *this,FPCGMeshInstanceList *param_1,UPCGMetadata *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,FPCGPackedCustomData *param_4)

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

// PackInstances @ 149d5cd30

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
UPCGInstanceDataPackerBase::PackInstances
          (UPCGInstanceDataPackerBase *this,FPCGContext *param_1,UPCGSpatialData *param_2,
          FPCGMeshInstanceList *param_3,FPCGPackedCustomData *param_4)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  UFunction *this_00;
  UClass *pUVar4;
  longlong lVar5;
  undefined1 auStackY_5c8 [32];
  FPCGContext local_588;
  UPCGSpatialData *local_330;
  FPCGSoftISMComponentDescriptor local_328;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  long64 local_98;
  FWeakObjectPtr local_90;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  int local_78;
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGInstanceDataPackerBase_PackInstances);
  pUVar4 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
    FPCGContext::FPCGContext(&local_588);
    FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&local_328);
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    local_90.ObjectIndex = 0;
    local_90.ObjectSerialNumber = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_78 = 0;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    FPCGContext::operator=(&local_588,param_1);
    local_330 = param_2;
    FPCGSoftISMComponentDescriptor::operator=(&local_328,&param_3->Descriptor);
    if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)&local_a8 !=
        &param_3->Instances) {
      iVar3 = (param_3->Instances).ArrayNum;
      _Src = (param_3->Instances).AllocatorInstance.Data;
      local_a0 = CONCAT44(local_a0._4_4_,iVar3);
      if ((iVar3 == 0) && (local_a0._4_4_ == 0)) {
        local_a0 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,local_a0._4_4_,&local_a8,iVar3,(int *)((longlong)&local_a0 + 4));
        if (iVar3 != 0) {
          memcpy(local_a8.Data,_Src,(longlong)iVar3 * 0x60);
        }
      }
    }
    local_98 = param_3->AttributePartitionIndex;
    local_90 = (param_3->PointData).WeakPtr;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_88,&param_3->InstancesIndices);
    local_78 = param_4->NumCustomDataFloats;
    pTVar2 = &param_4->CustomData;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(&local_70,pTVar2);
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_588);
    FPCGContext::operator=(param_1,&local_588);
    _Src_00.Data = local_70.AllocatorInstance.Data;
    param_4->NumCustomDataFloats = local_78;
    if (pTVar2 != &local_70) {
      iVar3 = local_70.ArrayNum;
      lVar5 = (longlong)local_70.ArrayNum;
      piVar1 = &(param_4->CustomData).ArrayMax;
      (param_4->CustomData).ArrayNum = local_70.ArrayNum;
      if ((local_70.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_70.ArrayNum,*piVar1,&pTVar2->AllocatorInstance,local_70.ArrayNum,piVar1
                  );
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src_00.Data,lVar5 << 2);
        }
      }
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if (local_328.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data);
    }
    if (local_328.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.ComponentTags.AllocatorInstance.Data);
    }
    FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
              ((FSoftISMComponentDescriptor *)&local_328);
    FPCGContext::~FPCGContext(&local_588);
  }
  else {
    (**(code **)(*(longlong *)this + 0x2b0))(this,param_1,param_2,param_3);
  }
  return;
}

// PackInstances_Implementation @ 149d5d270

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
UPCGInstanceDataPackerBase::PackInstances_Implementation
          (UPCGInstanceDataPackerBase *this,FPCGContext *param_1,UPCGSpatialData *param_2,
          FPCGMeshInstanceList *param_3,FPCGPackedCustomData *param_4)

{
  FText *this_00;
  bool bVar1;
  FString local_40;
  FString local_30;
  FText local_20;
  
  if (1 < (byte)LogPCG._0_1_) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_20,L"PCGInstanceDataPackerBase",L"InstanceDataPackerBaseFailed",
                         L"Unable to execute InstanceDataPacker pure virtual base function, override the PackInstances function or use a default implementation."
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

// StaticRegisterNativesUPCGInstanceDataPackerBase @ 149d66290

void __cdecl UPCGInstanceDataPackerBase::StaticRegisterNativesUPCGInstanceDataPackerBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddTypeToPacking @ 149d69610

void __cdecl
UPCGInstanceDataPackerBase::execAddTypeToPacking(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 local_res10 [2];
  int local_28 [2];
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
  local_28[0] = 0;
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
  piVar3 = local_28;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 10:
    *piVar3 = *piVar3 + 1;
    uVar2 = 1;
    break;
  case 4:
    *piVar3 = *piVar3 + 2;
    uVar2 = 1;
    break;
  case 5:
  case 0xb:
    *piVar3 = *piVar3 + 3;
    uVar2 = 1;
    break;
  case 6:
  case 7:
    *piVar3 = *piVar3 + 4;
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

// execPackCustomDataFromAttributes @ 149d6f120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGInstanceDataPackerBase::execPackCustomDataFromAttributes
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
  FPCGMeshInstanceList *pFVar10;
  void **ppvVar11;
  FPCGPackedCustomData *pFVar12;
  undefined1 local_res10 [8];
  UPCGMetadata *local_res20;
  TArray<FPCGMetadataAttributeBase_const_*,TSizedDefaultAllocator<32>_> local_368;
  FPCGMetadataAttributeBase *local_358;
  void *local_350;
  undefined8 local_348;
  FPCGPackedCustomData local_340;
  FName local_328;
  FPCGMetadataDomainID FStack_320;
  FPCGAttributeIdentifier local_308;
  FPCGMeshInstanceList local_2e8;
  
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&local_2e8.Descriptor);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_2e8.Instances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Instances.ArrayNum = 0;
  local_2e8.Instances.ArrayMax = 0;
  local_2e8.PointData.WeakPtr.ObjectIndex = 0;
  local_2e8.PointData.WeakPtr.ObjectSerialNumber = 0;
  local_2e8.InstancesIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.InstancesIndices.ArrayNum = 0;
  local_2e8.InstancesIndices.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  pFVar10 = &local_2e8;
  if ((FPCGMeshInstanceList *)param_2->MostRecentPropertyAddress != (FPCGMeshInstanceList *)0x0) {
    pFVar10 = (FPCGMeshInstanceList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_350 = (void *)0x0;
  local_348 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_350,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_350);
  }
  local_340.NumCustomDataFloats = 0;
  local_340.CustomData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ppvVar11 = &local_350;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar11 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_340.CustomData.ArrayNum = 0;
  local_340.CustomData.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_340,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_340);
  }
  this = local_res20;
  pFVar12 = &local_340;
  if ((FPCGPackedCustomData *)param_2->MostRecentPropertyAddress != (FPCGPackedCustomData *)0x0) {
    pFVar12 = (FPCGPackedCustomData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UPCGMetadata *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    pFVar9 = *ppvVar11;
    iVar3 = *(int *)(ppvVar11 + 1);
    local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.ArrayNum = 0;
    local_368.ArrayMax = 0;
    pFVar2 = pFVar9 + iVar3;
    while( true ) {
      if (*(int *)(ppvVar11 + 1) != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar2) break;
      local_328 = *pFVar9;
      FStack_320 = PCGMetadataDomainID::Default;
      FVar6 = FStack_320;
      FStack_320._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_308.MetadataDomain.Flag = FStack_320.Flag;
      local_308.MetadataDomain._1_3_ = FStack_320._1_3_;
      local_308.MetadataDomain.CustomFlag = FStack_320.CustomFlag;
      local_308.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_320 = FVar6;
      local_308.Name = local_328;
      local_358 = UPCGMetadata::GetConstAttribute(this,&local_308);
      if (((local_368.AllocatorInstance.Data <= (FScriptContainerElement *)&local_358) &&
          ((FScriptContainerElement *)&local_358 <
           local_368.AllocatorInstance.Data + (longlong)local_368.ArrayMax * 8)) &&
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
      iVar8 = local_368.ArrayNum;
      if (local_368.ArrayNum == local_368.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_368.AllocatorInstance,&local_368.ArrayMax);
      }
      pFVar9 = pFVar9 + 1;
      local_368.ArrayNum = iVar8 + 1;
      *(FPCGMetadataAttributeBase **)(local_368.AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_358;
    }
    PackCustomDataFromAttributes((UPCGInstanceDataPackerBase *)param_1,pFVar10,&local_368,pFVar12);
    if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.AllocatorInstance.Data);
    }
  }
  if (local_340.CustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.CustomData.AllocatorInstance.Data);
  }
  if (local_350 != (void *)0x0) {
    FMemory::Free(local_350);
  }
  if (local_2e8.InstancesIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.InstancesIndices.AllocatorInstance.Data);
  }
  if (local_2e8.Instances.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Instances.AllocatorInstance.Data);
  }
  if (local_2e8.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Descriptor.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Descriptor.ComponentTags.AllocatorInstance.Data);
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)&local_2e8);
  return;
}

// execPackInstances @ 149d6f860

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
UPCGInstanceDataPackerBase::execPackInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGSoftISMComponentDescriptor *pFVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_598 [32];
  uchar *local_578;
  undefined8 local_568;
  uchar local_560 [8];
  void *local_558;
  undefined8 local_550;
  FPCGSoftISMComponentDescriptor local_548;
  void *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  void *local_2a8;
  undefined8 local_2a0;
  FPCGContext local_298;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_598;
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
  local_568 = 0;
  pFVar3 = &local_298;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_568,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_568);
  }
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&local_548);
  local_2c8 = (void *)0x0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2a8 = (void *)0x0;
  local_2a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_548,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_548);
  }
  local_560[0] = '\0';
  local_560[1] = '\0';
  local_560[2] = '\0';
  local_560[3] = '\0';
  local_558 = (void *)0x0;
  pFVar2 = &local_548;
  if ((FPCGSoftISMComponentDescriptor *)param_2->MostRecentPropertyAddress !=
      (FPCGSoftISMComponentDescriptor *)0x0) {
    pFVar2 = (FPCGSoftISMComponentDescriptor *)param_2->MostRecentPropertyAddress;
  }
  local_550 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_560,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_560);
  }
  local_578 = local_560;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_578 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,pFVar3,local_568,pFVar2);
  if (local_558 != (void *)0x0) {
    FMemory::Free(local_558);
  }
  if (local_2a8 != (void *)0x0) {
    FMemory::Free(local_2a8);
  }
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  if (local_548.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data);
  }
  if (local_548.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.ComponentTags.AllocatorInstance.Data);
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)&local_548);
  FPCGContext::~FPCGContext(&local_298);
  return;
}

