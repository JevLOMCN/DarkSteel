// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 14867bd90

UClass * __cdecl USoundSubmixWithParentBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixWithParentBase",
               &Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton,
               StaticRegisterNativesUSoundSubmixWithParentBase,0xf0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixWithParentBase>,
               InternalVTableHelperCtorCaller<USoundSubmixWithParentBase>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton;
}

// USoundSubmixWithParentBase @ 1486982c0

USoundSubmixWithParentBase * __thiscall
USoundSubmixWithParentBase::USoundSubmixWithParentBase
          (USoundSubmixWithParentBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3c23d70a;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundSubmixWithParentBase__6B_;
  (this->ParentSubmix).field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
  *(undefined8 *)&this->DynamicParentSubmix = 0;
  *(undefined8 *)&(this->DynamicParentSubmix).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicParentSubmix).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicParentSubmix).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x48 = 0;
  return this;
}

// USoundSubmixWithParentBase @ 148698380

USoundSubmixWithParentBase * __thiscall
USoundSubmixWithParentBase::USoundSubmixWithParentBase
          (USoundSubmixWithParentBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3c23d70a;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundSubmixWithParentBase__6B_;
  (this->ParentSubmix).field0_0x0.DebugPtr = (USoundSubmixBase *)0x0;
  *(undefined8 *)&this->DynamicParentSubmix = 0;
  *(undefined8 *)&(this->DynamicParentSubmix).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicParentSubmix).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicParentSubmix).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x48 = 0;
  this->bIsDynamic = '\0';
  return this;
}

// ~USoundSubmixWithParentBase @ 14869c060

void __thiscall
USoundSubmixWithParentBase::~USoundSubmixWithParentBase(USoundSubmixWithParentBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USoundSubmixWithParentBase__6B_;
  *(undefined4 *)&(this->DynamicParentSubmix).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicParentSubmix).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<USoundSubmixBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<USoundSubmixBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<USoundSubmixBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicParentSubmix);
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14869f5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`USoundSubmixWithParentBase::DynamicConnect'[::I]::<lambda_1>::operator()
          (void *this,USoundSubmixBase *param_1)

{
  FAudioDeviceHandle *this_00;
  FAudioDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  if (5 < (byte)LogAudio._0_1_) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this_00 = *(FAudioDeviceHandle **)this;
  bVar3 = FAudioDeviceHandle::IsValid(this_00);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x60,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = this_00->Device;
                    /* WARNING: Could not recover jumptable at 0x00014869f6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,param_1,1);
  return;
}

// DynamicConnect @ 1486b0f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USoundSubmixWithParentBase::DynamicConnect
          (USoundSubmixWithParentBase *this,FAudioDeviceHandle *param_1,USoundSubmixBase *param_2)

{
  TMap<unsigned_int,FDynamicChildSubmix,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>_>
  *this_00;
  TMap<unsigned_int,TObjectPtr<USoundSubmixBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USoundSubmixBase>,0>_>
  *this_01;
  USoundSubmixBase *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  UClass *pUVar6;
  FAudioDeviceHandle *pFVar7;
  longlong lVar8;
  FAudioDevice *pFVar9;
  undefined ***pppuVar10;
  FName FVar11;
  undefined1 *puVar12;
  USoundSubmixWithParentBase *pUVar13;
  int iVar14;
  TKeyInitializer<unsigned_int_const_&> *pTVar15;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  FString local_a8;
  FString local_98;
  uint local_88 [4];
  undefined1 local_78 [16];
  undefined **local_68;
  FAudioDeviceHandle *local_60;
  uint local_58;
  int local_54;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  cVar3 = (**(code **)(this->_padding_ + 0x2c8))(this,0);
  if (cVar3 == '\0') {
    lVar5 = (**(code **)(this->_padding_ + 0x2c0))(this);
    if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b181b;
    if (lVar5 != 0) {
      local_a8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(lVar5 + 0x18);
      ::FName::ToString((FName *)&local_a8,&local_98);
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
      ::FName::ToString((FName *)&local_a8,(FString *)local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if ((FName)local_78._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
      if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (((byte)LogAudio._0_1_ < 3) || (lVar5 != 0)) goto LAB_1486b181b;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
    ::FName::ToString((FName *)&local_a8,(FString *)local_78);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    FVar11 = (FName)local_78._0_8_;
  }
  else {
    bVar4 = FAudioDeviceHandle::IsValid(param_1);
    if (bVar4) {
      pUVar6 = USoundfieldSubmix::StaticClass();
      iVar14 = (int)pUVar6->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar14) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar14 * 8)
          != &pUVar6->_padding_)) {
        if (param_2 == (USoundSubmixBase *)0x0) {
LAB_1486b12b5:
          local_88[0] = FAudioDeviceHandle::GetDeviceID(param_1);
          this_01 = &this->DynamicParentSubmix;
          pTVar15 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_88[0];
          if (*(int *)&(this->DynamicParentSubmix).field_0x8 !=
              *(int *)&(this->DynamicParentSubmix).field_0x34) {
            puVar12 = *(undefined1 **)&(this->DynamicParentSubmix).field_0x40;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = &(this->DynamicParentSubmix).field_0x38;
            }
            iVar14 = *(int *)(puVar12 +
                             (ulonglong)
                             (*(int *)&(this->DynamicParentSubmix).field_0x48 - 1U & local_88[0]) *
                             4);
            if (iVar14 != -1) {
              lVar5 = *(longlong *)&this_01->field_0x0;
              do {
                if (*(uint *)(lVar5 + (longlong)iVar14 * 0x18) == local_88[0]) {
                  if ((iVar14 != -1) && (lVar5 = lVar5 + (longlong)iVar14 * 0x18, lVar5 != 0))
                  goto LAB_1486b1363;
                  break;
                }
                iVar14 = *(int *)(lVar5 + 0x10 + (longlong)iVar14 * 0x18);
              } while (iVar14 != -1);
            }
          }
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_88;
          local_b8 = 0;
          TSet<TTuple<unsigned_int,TObjectPtr<USoundSubmixBase>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USoundSubmixBase>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                    ((TSet<TTuple<unsigned_int,TObjectPtr<USoundSubmixBase>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USoundSubmixBase>,0>,FDefaultSetAllocator>
                      *)this_01,(uint)&local_a8,pTVar15,(bool *)&local_98);
          pTVar15 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_88[0];
          lVar5 = *(longlong *)&this_01->field_0x0 +
                  (longlong)(int)local_a8.Data.AllocatorInstance.Data._0_4_ * 0x18;
LAB_1486b1363:
          pUVar1 = *(USoundSubmixBase **)(lVar5 + 8);
          if (pUVar1 == (USoundSubmixBase *)0x0) {
            bVar4 = param_2 == (USoundSubmixBase *)0x0;
          }
          else {
            bVar4 = pUVar1 == param_2;
          }
          if (!bVar4) {
            if (pUVar1 != (USoundSubmixBase *)0x0) {
              this_00 = &pUVar1->DynamicChildSubmixes;
              if (*(int *)&(pUVar1->DynamicChildSubmixes).field_0x8 !=
                  *(int *)&(pUVar1->DynamicChildSubmixes).field_0x34) {
                puVar12 = *(undefined1 **)&(pUVar1->DynamicChildSubmixes).field_0x40;
                if (puVar12 == (undefined1 *)0x0) {
                  puVar12 = &(pUVar1->DynamicChildSubmixes).field_0x38;
                }
                iVar14 = *(int *)(puVar12 +
                                 ((ulonglong)
                                  (*(int *)&(pUVar1->DynamicChildSubmixes).field_0x48 - 1) &
                                 (ulonglong)pTVar15) * 4);
                if (iVar14 != -1) {
                  lVar8 = *(longlong *)&this_00->field_0x0;
                  do {
                    if (*(int *)((longlong)iVar14 * 0x20 + lVar8) == (int)pTVar15) {
                      if ((iVar14 != -1) && (lVar8 = (longlong)iVar14 * 0x20 + lVar8, lVar8 != 0))
                      goto LAB_1486b1419;
                      break;
                    }
                    iVar14 = *(int *)((longlong)iVar14 * 0x20 + 0x18 + lVar8);
                  } while (iVar14 != -1);
                }
              }
              local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_88;
              local_b8 = 0;
              TSet<TTuple<unsigned_int,FDynamicChildSubmix>,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                        ((TSet<TTuple<unsigned_int,FDynamicChildSubmix>,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>,FDefaultSetAllocator>
                          *)this_00,(uint)&local_a8,pTVar15,(bool *)&local_98);
              lVar8 = (longlong)(int)local_a8.Data.AllocatorInstance.Data._0_4_ * 0x20 +
                      *(longlong *)&this_00->field_0x0;
LAB_1486b1419:
              local_78._0_8_ = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_>::Remove
                        ((TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_> *)
                         (lVar8 + 8),(TObjectPtr<USoundSubmixBase> *)local_78);
              if (5 < (byte)LogAudio._0_1_) {
                local_78._0_8_ = *(FName *)(*(longlong *)(lVar5 + 8) + 0x18);
                ::FName::ToString((FName *)local_78,&local_a8);
                local_78._0_8_ = this->_padding_;
                ::FName::ToString((FName *)local_78,&local_98);
                UE::Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)&PTR_u_Submix__Dynamic_151b50018,
                           (FLogCategoryBase *)&LogAudio);
                if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
               (param_2 == (USoundSubmixBase *)0x0)) {
              *(USoundSubmixBase **)(lVar5 + 8) = param_2;
              if (param_2 == (USoundSubmixBase *)0x0) goto LAB_1486b166f;
            }
            else {
              UE::GC::MarkAsReachable((UObject *)param_2);
              *(USoundSubmixBase **)(lVar5 + 8) = param_2;
            }
            if (*(int *)&(param_2->DynamicChildSubmixes).field_0x8 !=
                *(int *)&(param_2->DynamicChildSubmixes).field_0x34) {
              puVar12 = *(undefined1 **)&(param_2->DynamicChildSubmixes).field_0x40;
              if (puVar12 == (undefined1 *)0x0) {
                puVar12 = &(param_2->DynamicChildSubmixes).field_0x38;
              }
              iVar14 = *(int *)(puVar12 +
                               (ulonglong)
                               (*(int *)&(param_2->DynamicChildSubmixes).field_0x48 - 1U &
                               local_88[0]) * 4);
              if (iVar14 != -1) {
                lVar8 = *(longlong *)&param_2->DynamicChildSubmixes;
                do {
                  if (*(uint *)((longlong)iVar14 * 0x20 + lVar8) == local_88[0]) {
                    if ((iVar14 != -1) && (lVar8 = (longlong)iVar14 * 0x20 + lVar8, lVar8 != 0))
                    goto LAB_1486b1579;
                    break;
                  }
                  iVar14 = *(int *)((longlong)iVar14 * 0x20 + 0x18 + lVar8);
                } while (iVar14 != -1);
              }
            }
            local_78._0_8_ = local_88;
            local_b8 = 0;
            TSet<TTuple<unsigned_int,FDynamicChildSubmix>,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                      ((TSet<TTuple<unsigned_int,FDynamicChildSubmix>,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>,FDefaultSetAllocator>
                        *)&param_2->DynamicChildSubmixes,(uint)&local_a8,
                       (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_88[0],
                       (bool *)local_78);
            lVar8 = (longlong)(int)local_a8.Data.AllocatorInstance.Data._0_4_ * 0x20 +
                    *(longlong *)&param_2->DynamicChildSubmixes;
LAB_1486b1579:
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TObjectPtr<USoundSubmixBase>_>
                      ((TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_> *)
                       (lVar8 + 8),(TObjectPtr<USoundSubmixBase> *)&local_98);
            if (5 < (byte)LogAudio._0_1_) {
              local_78._0_8_ = *(FName *)(*(longlong *)(lVar5 + 8) + 0x18);
              ::FName::ToString((FName *)local_78,&local_a8);
              local_78._0_8_ = this->_padding_;
              ::FName::ToString((FName *)local_78,&local_98);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            pFVar9 = FAudioDeviceHandle::operator->(param_1);
            pUVar13 = *(USoundSubmixWithParentBase **)(lVar5 + 8);
            pcVar2 = *(code **)(pFVar9->_padding_ + 0x160);
            if (pUVar13 == (USoundSubmixWithParentBase *)0x0) {
LAB_1486b1660:
              pUVar13 = (USoundSubmixWithParentBase *)0x0;
            }
            else {
              pUVar6 = USoundSubmix::StaticClass();
              iVar14 = (int)pUVar6->_padding_;
              if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar14) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar14 * 8)
                  != &pUVar6->_padding_)) goto LAB_1486b1660;
            }
            (*pcVar2)(pFVar9,pUVar13,0);
LAB_1486b166f:
            local_50 = (undefined ***)0x0;
            local_68 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicConnect'[::I]::<lambda_1>,0,0>
                        ::_vftable_;
            local_58 = local_88[0];
            local_54 = local_78._12_4_;
            local_78._0_8_ =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`USoundSubmixWithParentBase::DynamicConnect'[::I]::<lambda_1>,void,FAudioDeviceHandle_*>
                 ::Call;
            local_60 = param_1;
            SubmixUtils::ForEachStaticChildRecursive
                      ((USoundSubmixBase *)this,
                       (TFunction<void___cdecl(USoundSubmixBase_*)> *)local_78);
            if ((FName)local_78._0_8_ != (FName)0x0) {
              pppuVar10 = &local_68;
              if (local_50 != (undefined ***)0x0) {
                pppuVar10 = local_50;
              }
              (*(code *)(*pppuVar10)[2])();
            }
            pFVar9 = FAudioDeviceHandle::operator->(param_1);
            lVar8 = *(longlong *)(lVar5 + 8);
            pcVar2 = *(code **)(pFVar9->_padding_ + 0x160);
            pUVar6 = USoundSubmix::StaticClass();
            iVar14 = (int)pUVar6->_padding_;
            if ((*(int *)(this->_padding_ + 0x38) < iVar14) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
                &pUVar6->_padding_)) {
              this = (USoundSubmixWithParentBase *)0x0;
            }
            (*pcVar2)(pFVar9,this,lVar8 == 0);
            lVar5 = *(longlong *)(lVar5 + 8);
            FAudioDeviceHandle::~FAudioDeviceHandle(param_1);
            return lVar5 != 0;
          }
          if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b181b;
          if (param_2 != (USoundSubmixBase *)0x0) {
            if (pUVar1 == (USoundSubmixBase *)0x0) {
              ::FString::FString(&local_98,L"None");
            }
            else {
              local_78._0_8_ = pUVar1->_padding_;
              ::FName::ToString((FName *)local_78,&local_98);
            }
            local_78._0_8_ = this->_padding_;
            ::FName::ToString((FName *)local_78,&local_a8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          if (((byte)LogAudio._0_1_ < 3) || (param_2 != (USoundSubmixBase *)0x0))
          goto LAB_1486b181b;
          local_78._0_8_ = this->_padding_;
          ::FName::ToString((FName *)local_78,&local_98);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          FVar11 = (FName)local_98.Data.AllocatorInstance.Data;
        }
        else {
          pUVar6 = USoundfieldSubmix::StaticClass();
          iVar14 = (int)pUVar6->_padding_;
          if ((iVar14 <= *(int *)(param_2->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
              &pUVar6->_padding_)) goto LAB_1486b1116;
          bVar4 = SubmixUtils::AreSubmixFormatsCompatible((USoundSubmixBase *)this,param_2);
          if (bVar4) {
            pFVar7 = FAudioDeviceHandle::FAudioDeviceHandle((FAudioDeviceHandle *)local_78,param_1);
            bVar4 = SubmixUtils::FindInGraph(param_2,(USoundSubmixBase *)this,true,pFVar7);
            if (!bVar4) goto LAB_1486b12b5;
            if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b181b;
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
            ::FName::ToString((FName *)&local_a8,(FString *)local_78);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            FVar11 = (FName)local_78._0_8_;
          }
          else {
            if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b181b;
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2->_padding_;
            ::FName::ToString((FName *)&local_a8,&local_98);
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
            ::FName::ToString((FName *)&local_a8,(FString *)local_78);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            FVar11 = (FName)local_98.Data.AllocatorInstance.Data;
            if ((FName)local_78._0_8_ != (FName)0x0) {
              FMemory::Free((void *)local_78._0_8_);
              FVar11 = (FName)local_98.Data.AllocatorInstance.Data;
            }
          }
        }
      }
      else {
LAB_1486b1116:
        if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b181b;
        if (param_2 == (USoundSubmixBase *)0x0) {
          ::FString::FString((FString *)local_78,L"None");
        }
        else {
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2->_padding_;
          ::FName::ToString((FName *)&local_a8,(FString *)local_78);
        }
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
        ::FName::ToString((FName *)&local_a8,&local_98);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        FVar11 = (FName)local_78._0_8_;
        if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
          FVar11 = (FName)local_78._0_8_;
        }
      }
    }
    else {
      if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b181b;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
      ::FName::ToString((FName *)&local_a8,(FString *)local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      FVar11 = (FName)local_78._0_8_;
    }
  }
  if (FVar11 != (FName)0x0) {
    FMemory::Free((void *)FVar11);
  }
LAB_1486b181b:
  FAudioDeviceHandle::~FAudioDeviceHandle(param_1);
  return false;
}

// DynamicConnect @ 1486b1860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
USoundSubmixWithParentBase::DynamicConnect
          (USoundSubmixWithParentBase *this,UObject *param_1,USoundSubmixBase *param_2)

{
  bool bVar1;
  UWorld *this_00;
  FAudioDeviceHandle *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  FName local_res10 [3];
  FAudioDeviceHandle local_28;
  
  if (param_1 == (UObject *)0x0) {
    if ((byte)LogAudio._0_1_ < 3) {
      return false;
    }
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,(FString *)&local_28);
    pFVar3 = &::LOG_Static;
  }
  else {
    this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (this_00 != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDevice(this_00,&local_28);
      bVar1 = DynamicConnect(this,pFVar2,param_2);
      return bVar1;
    }
    if ((byte)LogAudio._0_1_ < 3) {
      return false;
    }
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,(FString *)&local_28);
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogAudio);
  if (local_28.World.WeakPtr != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_28.World.WeakPtr);
  }
  return false;
}

// DynamicDisconnect @ 1486b1960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USoundSubmixWithParentBase::DynamicDisconnect
          (USoundSubmixWithParentBase *this,FAudioDeviceHandle *param_1)

{
  TMap<unsigned_int,TObjectPtr<USoundSubmixBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USoundSubmixBase>,0>_>
  *this_00;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FAudioDevice *pFVar5;
  int *piVar6;
  undefined ***pppuVar7;
  FName FVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  TKeyInitializer<unsigned_int_const_&> *pTVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_a8 [2];
  FString local_a0;
  FString local_90;
  FString local_80;
  code *local_68 [2];
  undefined **local_58;
  FAudioDeviceHandle *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = FAudioDeviceHandle::IsValid(param_1);
  if (bVar2) {
    cVar3 = (**(code **)(this->_padding_ + 0x2c8))(this,0);
    if (cVar3 == '\0') {
      if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b1d36;
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
      ::FName::ToString((FName *)&local_80,&local_a0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      FVar8 = (FName)local_a0.Data.AllocatorInstance.Data;
    }
    else {
      local_a8[0] = FAudioDeviceHandle::GetDeviceID(param_1);
      this_00 = &this->DynamicParentSubmix;
      pTVar12 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_a8[0];
      if (*(int *)&(this->DynamicParentSubmix).field_0x8 !=
          *(int *)&(this->DynamicParentSubmix).field_0x34) {
        puVar9 = *(undefined1 **)&(this->DynamicParentSubmix).field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(this->DynamicParentSubmix).field_0x38;
        }
        iVar4 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->DynamicParentSubmix).field_0x48 - 1U &
                                  local_a8[0]) * 4);
        if (iVar4 != -1) {
          do {
            lVar11 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
            if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == local_a8[0])
            {
              if (lVar11 != 0) goto LAB_1486b1adf;
              break;
            }
            iVar4 = *(int *)(lVar11 + 0x10);
          } while (iVar4 != -1);
        }
      }
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_a8;
      local_b8 = 0;
      TSet<TTuple<unsigned_int,TObjectPtr<USoundSubmixBase>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USoundSubmixBase>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,TObjectPtr<USoundSubmixBase>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USoundSubmixBase>,0>,FDefaultSetAllocator>
                  *)this_00,(uint)&local_80,pTVar12,(bool *)&local_90);
      pTVar12 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_a8[0];
      lVar11 = *(longlong *)&this_00->field_0x0 +
               (longlong)(int)local_80.Data.AllocatorInstance.Data._0_4_ * 0x18;
LAB_1486b1adf:
      if (*(longlong *)(lVar11 + 8) != 0) {
        if (5 < (byte)LogAudio._0_1_) {
          local_90.Data.AllocatorInstance.Data =
               *(FScriptContainerElement **)(*(longlong *)(lVar11 + 8) + 0x18);
          ::FName::ToString((FName *)&local_90,&local_80);
          local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
          ::FName::ToString((FName *)&local_90,&local_a0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          if ((FName)local_a0.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if ((FName)local_80.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          pTVar12 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_a8[0];
        }
        lVar1 = *(longlong *)(lVar11 + 8);
        if (*(int *)(lVar1 + 0x48) != *(int *)(lVar1 + 0x74)) {
          lVar10 = *(longlong *)(lVar1 + 0x80);
          if (*(longlong *)(lVar1 + 0x80) == 0) {
            lVar10 = lVar1 + 0x78;
          }
          iVar4 = *(int *)(lVar10 + ((ulonglong)(*(int *)(lVar1 + 0x88) - 1) & (ulonglong)pTVar12) *
                                    4);
          if (iVar4 != -1) {
            do {
              piVar6 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar1 + 0x40));
              if (*piVar6 == (int)pTVar12) {
                if (piVar6 != (int *)0x0) goto LAB_1486b1bf8;
                break;
              }
              iVar4 = piVar6[6];
            } while (iVar4 != -1);
          }
        }
        local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_a8;
        local_b8 = 0;
        TSet<TTuple<unsigned_int,FDynamicChildSubmix>,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned_int,FDynamicChildSubmix>,TDefaultMapHashableKeyFuncs<unsigned_int,FDynamicChildSubmix,0>,FDefaultSetAllocator>
                    *)(lVar1 + 0x40),(uint)&local_80,pTVar12,(bool *)&local_90);
        piVar6 = (int *)((longlong)(int)local_80.Data.AllocatorInstance.Data._0_4_ * 0x20 +
                        *(longlong *)(lVar1 + 0x40));
LAB_1486b1bf8:
        local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_>::Remove
                  ((TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_> *)(piVar6 + 2),
                   (TObjectPtr<USoundSubmixBase> *)&local_a0);
        *(undefined8 *)(lVar11 + 8) = 0;
        local_58 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`USoundSubmixWithParentBase::DynamicDisconnect'::`47'::<lambda_1>,0,0>
                    ::_vftable_;
        local_40 = (undefined ***)0x0;
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`USoundSubmixWithParentBase::DynamicDisconnect'::__l47::<lambda_1>,void,USoundSubmixBase_*>
                      ::Call;
        local_50 = param_1;
        SubmixUtils::ForEachStaticChildRecursive
                  ((USoundSubmixBase *)this,(TFunction<void___cdecl(USoundSubmixBase_*)> *)local_68)
        ;
        if (local_68[0] != (code *)0x0) {
          pppuVar7 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar7 = local_40;
          }
          (*(code *)(*pppuVar7)[2])();
        }
        if ((this->ParentSubmix).field0_0x0.DebugPtr != (USoundSubmixBase *)0x0) {
          pFVar5 = FAudioDeviceHandle::operator->(param_1);
          (**(code **)(pFVar5->_padding_ + 0x78))(pFVar5,this,0);
        }
        if (5 < (byte)LogAudio._0_1_) {
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
          ::FName::ToString((FName *)&local_a0,&local_90);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          if ((FName)local_90.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
        FAudioDeviceHandle::~FAudioDeviceHandle(param_1);
        return true;
      }
      if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b1d36;
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
      ::FName::ToString((FName *)&local_a0,&local_90);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      FVar8 = (FName)local_90.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogAudio._0_1_ < 3) goto LAB_1486b1d36;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
    ::FName::ToString((FName *)&local_80,&local_a0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    FVar8 = (FName)local_a0.Data.AllocatorInstance.Data;
  }
  if (FVar8 != (FName)0x0) {
    FMemory::Free((void *)FVar8);
  }
LAB_1486b1d36:
  FAudioDeviceHandle::~FAudioDeviceHandle(param_1);
  return false;
}

// DynamicDisconnect @ 1486b1d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
USoundSubmixWithParentBase::DynamicDisconnect(USoundSubmixWithParentBase *this,UObject *param_1)

{
  bool bVar1;
  UWorld *this_00;
  FAudioDeviceHandle *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  FName local_res10 [3];
  FAudioDeviceHandle local_28;
  
  if (param_1 == (UObject *)0x0) {
    if ((byte)LogAudio._0_1_ < 3) {
      return false;
    }
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,(FString *)&local_28);
    pFVar3 = &::LOG_Static;
  }
  else {
    this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (this_00 != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDevice(this_00,&local_28);
      bVar1 = DynamicDisconnect(this,pFVar2);
      return bVar1;
    }
    if ((byte)LogAudio._0_1_ < 3) {
      return false;
    }
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,(FString *)&local_28);
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogAudio);
  if (local_28.World.WeakPtr != (FWeakObjectPtr)0x0) {
    FMemory::Free((void *)local_28.World.WeakPtr);
  }
  return false;
}

// FindDynamicAncestor @ 1486b66c0

USoundSubmixBase * __thiscall
USoundSubmixWithParentBase::FindDynamicAncestor(USoundSubmixWithParentBase *this)

{
  TObjectPtr<USoundSubmixBase> *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  if (this != (USoundSubmixWithParentBase *)0x0) {
    while( true ) {
      if (this->bIsDynamic != 0) {
        return (USoundSubmixBase *)this;
      }
      this_00 = &this->ParentSubmix;
      if ((this_00->field0_0x0).DebugPtr == (USoundSubmixBase *)0x0) break;
      pUVar2 = StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if (!bVar1) {
        return (USoundSubmixBase *)0x0;
      }
      this = (USoundSubmixWithParentBase *)(this_00->field0_0x0).DebugPtr;
      if (this == (USoundSubmixWithParentBase *)0x0) {
        return (USoundSubmixBase *)0x0;
      }
    }
  }
  return (USoundSubmixBase *)0x0;
}

// FindDynamicAncestor @ 1486b6720

USoundSubmixBase * __thiscall
USoundSubmixWithParentBase::FindDynamicAncestor(USoundSubmixWithParentBase *this)

{
  TObjectPtr<USoundSubmixBase> *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  if (this != (USoundSubmixWithParentBase *)0x0) {
    while( true ) {
      if (this->bIsDynamic != 0) {
        return (USoundSubmixBase *)this;
      }
      this_00 = &this->ParentSubmix;
      if ((this_00->field0_0x0).DebugPtr == (USoundSubmixBase *)0x0) break;
      pUVar2 = StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if (!bVar1) {
        return (USoundSubmixBase *)0x0;
      }
      this = (USoundSubmixWithParentBase *)(this_00->field0_0x0).DebugPtr;
      if (this == (USoundSubmixWithParentBase *)0x0) {
        return (USoundSubmixBase *)0x0;
      }
    }
  }
  return (USoundSubmixBase *)0x0;
}

// GetParent @ 1486c3630

TObjectPtr<USoundSubmixBase> __thiscall
USoundSubmixWithParentBase::GetParent(USoundSubmixWithParentBase *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  USoundSubmixBase *pUVar3;
  longlong *plVar4;
  undefined4 in_register_00000014;
  TObjectPtr<USoundSubmixBase>_u_0 TVar5;
  uint in_R8D;
  undefined1 *puVar6;
  
  TVar5._4_4_ = in_register_00000014;
  TVar5._0_4_ = param_1;
  if (*(int *)&(this->DynamicParentSubmix).field_0x8 !=
      *(int *)&(this->DynamicParentSubmix).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DynamicParentSubmix).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DynamicParentSubmix).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->DynamicParentSubmix).field_0x48 - 1U & in_R8D) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->DynamicParentSubmix + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->DynamicParentSubmix + (longlong)iVar2 * 0x18) == in_R8D) {
          plVar4 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar4 = (longlong *)0x0;
          }
          if (plVar4 != (longlong *)0x0) {
            pUVar3 = (USoundSubmixBase *)*plVar4;
            (TVar5.DebugPtr)->_padding_ = (longlong)pUVar3;
            goto LAB_1486c36a9;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  pUVar3 = (this->ParentSubmix).field0_0x0.DebugPtr;
  (TVar5.DebugPtr)->_padding_ = (longlong)pUVar3;
LAB_1486c36a9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USoundSubmixBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return (TObjectPtr<USoundSubmixBase>)TVar5;
}

// GetPrivateStaticClass @ 1486c5a60

UClass * __cdecl USoundSubmixWithParentBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmixWithParentBase",
               &Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton,
               StaticRegisterNativesUSoundSubmixWithParentBase,0xf0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundSubmixWithParentBase>,
               InternalVTableHelperCtorCaller<USoundSubmixWithParentBase>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmixWithParentBase.InnerSingleton;
}

// IsDynamic @ 1486d0f90

bool __thiscall USoundSubmixWithParentBase::IsDynamic(USoundSubmixWithParentBase *this,bool param_1)

{
  TObjectPtr<USoundSubmixBase> *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  if (!param_1) {
    return this->bIsDynamic;
  }
  if (this != (USoundSubmixWithParentBase *)0x0) {
    while( true ) {
      if (this->bIsDynamic != 0) goto LAB_1486d0fe4;
      this_00 = &this->ParentSubmix;
      if ((this_00->field0_0x0).DebugPtr == (USoundSubmixBase *)0x0) break;
      pUVar2 = StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((!bVar1) ||
         (this = (USoundSubmixWithParentBase *)(this_00->field0_0x0).DebugPtr,
         this == (USoundSubmixWithParentBase *)0x0)) break;
    }
  }
  this = (USoundSubmixWithParentBase *)0x0;
LAB_1486d0fe4:
  return this != (USoundSubmixWithParentBase *)0x0;
}

// SetParentSubmix @ 1486eefd0

void __thiscall
USoundSubmixWithParentBase::SetParentSubmix
          (USoundSubmixWithParentBase *this,USoundSubmixBase *param_1,bool param_2)

{
  USoundSubmixBase *pUVar1;
  bool bVar2;
  TObjectPtr<USoundSubmixBase>_u_0 local_res8;
  
  pUVar1 = (this->ParentSubmix).field0_0x0.DebugPtr;
  if (pUVar1 == (USoundSubmixBase *)0x0) {
    bVar2 = param_1 == (USoundSubmixBase *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if (pUVar1 != (USoundSubmixBase *)0x0) {
      local_res8 = (TObjectPtr<USoundSubmixBase>_u_0)this;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_>::Remove
                (&pUVar1->ChildSubmixes,(TObjectPtr<USoundSubmixBase> *)&local_res8.ObjectPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (USoundSubmixBase *)0x0)
       ) {
      (this->ParentSubmix).field0_0x0.DebugPtr = param_1;
      if (param_1 == (USoundSubmixBase *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->ParentSubmix).field0_0x0.DebugPtr = param_1;
    }
    local_res8 = (TObjectPtr<USoundSubmixBase>_u_0)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    TArray<TObjectPtr<USoundSubmixBase>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<USoundSubmixBase>_>
              (&param_1->ChildSubmixes,(TObjectPtr<USoundSubmixBase> *)&local_res8.ObjectPtr);
  }
  return;
}

// StaticRegisterNativesUSoundSubmixWithParentBase @ 1486f1ac0

void __cdecl USoundSubmixWithParentBase::StaticRegisterNativesUSoundSubmixWithParentBase(void)

{
  return;
}

