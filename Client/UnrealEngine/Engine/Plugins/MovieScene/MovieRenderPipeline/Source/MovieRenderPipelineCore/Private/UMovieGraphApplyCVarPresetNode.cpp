// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// StaticClass @ 14dc99130

UClass * __cdecl UMovieGraphApplyCVarPresetNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphApplyCVarPresetNode",
               &Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphApplyCVarPresetNode,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphApplyCVarPresetNode>,
               InternalVTableHelperCtorCaller<UMovieGraphApplyCVarPresetNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton;
}

// UMovieGraphApplyCVarPresetNode @ 14dcaece0

UMovieGraphApplyCVarPresetNode * __thiscall
UMovieGraphApplyCVarPresetNode::UMovieGraphApplyCVarPresetNode
          (UMovieGraphApplyCVarPresetNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphApplyCVarPresetNode__6B_;
  *(undefined8 *)&this->ConsoleVariablePreset = 0;
  *(undefined8 *)&(this->ConsoleVariablePreset).field_0x8 = 0;
  return this;
}

// ~UMovieGraphApplyCVarPresetNode @ 14dcb25f0

void __thiscall
UMovieGraphApplyCVarPresetNode::~UMovieGraphApplyCVarPresetNode
          (UMovieGraphApplyCVarPresetNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphSettingNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// GetBranchRestriction @ 14dccab60

EMovieGraphBranchRestriction __thiscall
UMovieGraphApplyCVarPresetNode::GetBranchRestriction(UMovieGraphApplyCVarPresetNode *this)

{
  return Globals;
}

// GetConsoleVariableOverrides @ 14dccc020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014dccc2c9) */

TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphApplyCVarPresetNode::GetConsoleVariableOverrides
          (UMovieGraphApplyCVarPresetNode *this,
          TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBoolProperty *pFVar5;
  TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> *pTVar6;
  TValueOrError<float,EPropertyBagResult> TVar7;
  FString *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  FName *pFVar11;
  FName *this_00;
  undefined1 auStack_e8 [32];
  FScriptContainerElement **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98;
  char local_97;
  byte local_96;
  FScriptContainerElement *local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint local_78;
  longlong local_74;
  void *local_68 [2];
  FString local_58;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x2d0))(this,local_68);
  local_78 = (uint)local_68[1];
  uVar10 = (ulonglong)(int)local_78;
  this_00 = (FName *)((longlong)local_68[0] + 0x18);
  pFVar11 = (FName *)(uVar10 * 0x40 + (longlong)local_68[0]);
  do {
    if ((int)local_68[1] != (int)uVar10) {
      local_98 = 0;
      `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_98);
    }
    if (this_00 + -3 == pFVar11) {
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
      return __return_storage_ptr__;
    }
    pFVar5 = UMovieGraphNode::FindOverridePropertyForDynamicProperty
                       ((UMovieGraphNode *)this,this_00);
    if (pFVar5 != (FBoolProperty *)0x0) {
      bVar3 = IsThisNotNull(pFVar5,"FField::GetFName");
      if (bVar3) {
        local_74 = pFVar5->_padding_;
      }
      else {
        local_74 = 0;
      }
      FInstancedPropertyBag::GetValueBool
                ((FInstancedPropertyBag *)&this->_padding_,(FName)&local_97);
      uVar10 = (ulonglong)local_96;
      if ((2 < uVar10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar10) != '\0') {
        if ((local_96 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        if (local_97 != '\0') {
          TVar7 = FInstancedPropertyBag::GetValueFloat
                            ((FInstancedPropertyBag *)&this->_padding_,(FName)local_48);
          if ((*(char *)((longlong)TVar7.Variant + 4) != '\0') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar6;
          }
          pFVar8 = ::FName::ToString(this_00,&local_58);
          local_90 = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88._0_4_ = (pFVar8->Data).ArrayNum;
          local_88._4_4_ = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
          local_80 = *(undefined4 *)TVar7.Variant;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= (FScriptContainerElement *)&local_90) &&
             ((FScriptContainerElement *)&local_90 <
              pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
            local_b0 = (longlong)__return_storage_ptr__->ArrayNum;
            local_a8 = 0x18;
            local_c8 = &local_90;
            local_c0 = pFVar1;
            local_b8 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar6 = (TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar6;
            }
          }
          iVar4 = __return_storage_ptr__->ArrayNum;
          if (iVar4 == __return_storage_ptr__->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar4 + 1;
          lVar9 = (longlong)iVar4;
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(undefined8 *)(pFVar1 + lVar9 * 0x18) = 0;
          *(FScriptContainerElement **)(pFVar1 + lVar9 * 0x18) = local_90;
          local_90 = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar1 + lVar9 * 0x18 + 8) = (undefined4)local_88;
          *(undefined4 *)(pFVar1 + lVar9 * 0x18 + 0xc) = local_88._4_4_;
          local_88 = 0;
          *(undefined4 *)(pFVar1 + lVar9 * 0x18 + 0x10) = local_80;
        }
      }
    }
    this_00 = this_00 + 8;
    uVar10 = (ulonglong)local_78;
  } while( true );
}

// GetDynamicPropertyDescriptions @ 14dcccdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphApplyCVarPresetNode::GetDynamicPropertyDescriptions
          (UMovieGraphApplyCVarPresetNode *this,
          TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TTuple<FString,FString> *pTVar9;
  TTuple<FString,FString> *pTVar10;
  undefined1 auStack_168 [32];
  UObject **local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  TTuple<FString,FString> *local_110;
  undefined8 local_108;
  FName local_100;
  FString local_f8;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  UObject *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  FName local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  UObject *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&HideInActiveRenderSettingsMetaDataKey,L"HideInActiveRenderSettings");
    _Init_thread_footer(&::_TSS0);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((*(longlong *)&this->ConsoleVariablePreset != 0) &&
     (*(longlong *)&(this->ConsoleVariablePreset).field_0x8 != 0)) {
    plVar1 = *(longlong **)&(this->ConsoleVariablePreset).field_0x8;
    local_110 = (TTuple<FString,FString> *)0x0;
    local_108 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,1,&local_110);
    iVar3 = (int)local_108;
    pTVar10 = local_110 + (int)local_108;
    pTVar9 = local_110;
    while( true ) {
      if ((int)local_108 != iVar3) {
        local_118[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (pTVar9 == pTVar10) break;
      iVar5 = *(int *)&pTVar9->field_0x8 + -1;
      if (*(int *)&pTVar9->field_0x8 == 0) {
        iVar5 = 0;
      }
      pFVar6 = ::FName::FName(&local_e8,iVar5,*(wchar_t **)pTVar9,FNAME_Add);
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_100 = *pFVar6;
      local_c8 = (UObject *)0x0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_a8 = 5;
      local_a0 = 1;
      local_98 = 0;
      local_90 = 0xffffffff;
      local_b0 = local_100;
      if ((pFVar8 <= (FScriptContainerElement *)&local_c8) &&
         ((FScriptContainerElement *)&local_c8 <
          pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) {
        local_130 = (longlong)__return_storage_ptr__->ArrayNum;
        local_128 = 0x40;
        local_148 = &local_c8;
        local_140 = pFVar8;
        local_138 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x40;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(UObject **)pFVar8 = local_c8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_c8);
      }
      *(undefined8 *)(pFVar8 + 8) = local_c0;
      *(undefined8 *)(pFVar8 + 0x10) = uStack_b8;
      *(FName *)(pFVar8 + 0x18) = local_b0;
      pFVar8[0x20] = local_a8._0_1_;
      *(undefined2 *)(pFVar8 + 0x21) = local_a8._1_2_;
      pFVar8[0x23] = local_a8._3_1_;
      *(undefined8 *)(pFVar8 + 0x28) = local_a0;
      *(undefined8 *)(pFVar8 + 0x30) = local_98;
      *(undefined4 *)(pFVar8 + 0x38) = local_90;
      ::FName::ToString(&local_100,&local_d8);
      ::FString::PrintfImpl(&local_f8,L"bOverride_%s");
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      iVar5 = local_f8.Data.ArrayNum + -1;
      if (local_f8.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pFVar6 = ::FName::FName(&local_e0,iVar5,(wchar_t *)local_f8.Data.AllocatorInstance.Data,
                              FNAME_Add);
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_70 = *pFVar6;
      local_88 = (UObject *)0x0;
      local_80 = 0;
      uStack_78 = 0;
      local_68 = 1;
      local_60 = 1;
      local_58 = 0;
      local_50 = 0xffffffff;
      if ((pFVar8 <= (FScriptContainerElement *)&local_88) &&
         ((FScriptContainerElement *)&local_88 <
          pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) {
        local_130 = (longlong)__return_storage_ptr__->ArrayNum;
        local_128 = 0x40;
        local_148 = &local_88;
        local_140 = pFVar8;
        local_138 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x40;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(UObject **)pFVar8 = local_88;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_88);
      }
      *(undefined8 *)(pFVar8 + 8) = local_80;
      *(undefined8 *)(pFVar8 + 0x10) = uStack_78;
      *(FName *)(pFVar8 + 0x18) = local_70;
      pFVar8[0x20] = local_68._0_1_;
      *(undefined2 *)(pFVar8 + 0x21) = local_68._1_2_;
      pFVar8[0x23] = local_68._3_1_;
      *(undefined8 *)(pFVar8 + 0x28) = local_60;
      *(undefined8 *)(pFVar8 + 0x30) = local_58;
      *(undefined4 *)(pFVar8 + 0x38) = local_50;
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      pTVar9 = pTVar9 + 1;
    }
    DestructItems<TTuple<FString,FString>,int>(local_110,(int)local_108);
    if (local_110 != (TTuple<FString,FString> *)0x0) {
      FMemory::Free(local_110);
    }
  }
  return __return_storage_ptr__;
}

// GetDynamicPropertyValue @ 14dccd240

bool __thiscall
UMovieGraphApplyCVarPresetNode::GetDynamicPropertyValue
          (UMovieGraphApplyCVarPresetNode *this,FName param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FString *pFVar5;
  longlong *plVar6;
  TTuple<FString,FString> *pTVar7;
  TTuple<FString,FString> *pTVar8;
  undefined1 local_res8 [8];
  TTuple<FString,FString> *local_68;
  undefined8 local_60;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  plVar6 = (longlong *)0x0;
  local_68 = (TTuple<FString,FString> *)0x0;
  local_60 = 0;
  if (*(longlong *)&this->ConsoleVariablePreset != 0) {
    plVar6 = *(longlong **)&(this->ConsoleVariablePreset).field_0x8;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,1,&local_68);
  iVar3 = (int)local_60;
  pTVar7 = local_68 + (int)local_60;
  pTVar8 = local_68;
  while( true ) {
    if ((int)local_60 != iVar3) {
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar8 == pTVar7) {
      bVar4 = false;
      goto LAB_14dccd33a;
    }
    pFVar5 = ::FString::FString(&local_38,(FString *)pTVar8);
    local_58 = (pFVar5->Data).AllocatorInstance.Data;
    iVar1 = (pFVar5->Data).ArrayNum;
    iStack_50 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_50 = 0;
    }
    local_48._12_4_ = uStack_4c;
    local_48.Size = iStack_50;
    local_48.DataPtr = (wchar_t *)local_58;
    bVar4 = ::FName::Equals(param_1,&local_48);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (bVar4) break;
    pTVar8 = pTVar8 + 1;
  }
  ::FString::operator=(param_2,(FString *)&pTVar8->field_0x10);
  bVar4 = true;
LAB_14dccd33a:
  DestructItems<TTuple<FString,FString>,int>(local_68,(int)local_60);
  if (local_68 != (TTuple<FString,FString> *)0x0) {
    FMemory::Free(local_68);
  }
  return bVar4;
}

// GetNodeInstanceName @ 14dcced30

FString * __thiscall
UMovieGraphApplyCVarPresetNode::GetNodeInstanceName
          (UMovieGraphApplyCVarPresetNode *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  if ((*(longlong *)&this->ConsoleVariablePreset != 0) &&
     (*(longlong *)&(this->ConsoleVariablePreset).field_0x8 != 0)) {
    local_res8[0] = *(FName *)(*(longlong *)&this->ConsoleVariablePreset + 0x18);
    ::FName::ToString(local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOverrideablePropertyInfo @ 14dcd0390

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphApplyCVarPresetNode::GetOverrideablePropertyInfo
          (UMovieGraphApplyCVarPresetNode *this,
          TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  FName *pFVar10;
  undefined1 local_res10 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FTextFormat local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  
  UMovieGraphNode::GetOverrideablePropertyInfo((UMovieGraphNode *)this,__return_storage_ptr__);
  iVar1 = __return_storage_ptr__->ArrayNum;
  pFVar9 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 7;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMovieGraphPropertyInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar10) break;
    if ((char)pFVar9[4].ComparisonIndex.Value != '\0') {
      pFVar5 = FText::FromName(&local_68,pFVar9);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"MovieGraphNodes",
                          L"ApplyCVarPresetNode_ValuePromotionContextMenuName",L"Value ({0})");
      pFVar7 = FTextFormat::FTextFormat(&local_58,pFVar6,Default);
      local_48.Type = Text;
      FText::FText((FText *)&local_48.TextValue,pFVar5);
      if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_a8.AllocatorInstance.Data,&local_48,1);
      local_98.TextFormatData.Object = (pFVar7->TextFormatData).Object;
      local_98.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_88,&local_98,&local_a8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar5->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      FText::operator=((FText *)(pFVar9 + 1),&local_88);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      pFVar9[3] = *pFVar9;
    }
    pFVar9 = pFVar9 + 7;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd1440

UClass * __cdecl UMovieGraphApplyCVarPresetNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphApplyCVarPresetNode",
               &Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphApplyCVarPresetNode,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphApplyCVarPresetNode>,
               InternalVTableHelperCtorCaller<UMovieGraphApplyCVarPresetNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyCVarPresetNode.InnerSingleton;
}

// PrepareForFlattening @ 14dcda3e0

void __thiscall
UMovieGraphApplyCVarPresetNode::PrepareForFlattening
          (UMovieGraphApplyCVarPresetNode *this,UMovieGraphSettingNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UMovieGraphSettingNode *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)&param_1[1].field_0x8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)&param_1[1].field_0x8);
      }
      *(undefined8 *)&this->ConsoleVariablePreset = *(undefined8 *)&param_1[1].field_0x8;
      *(undefined8 *)&(this->ConsoleVariablePreset).field_0x8 =
           *(undefined8 *)&param_1[1].field_0x10;
    }
  }
  return;
}

// StaticRegisterNativesUMovieGraphApplyCVarPresetNode @ 14dce62d0

void __cdecl
UMovieGraphApplyCVarPresetNode::StaticRegisterNativesUMovieGraphApplyCVarPresetNode(void)

{
  return;
}

// TogglePromotePropertyToPin @ 14dce8760

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
UMovieGraphApplyCVarPresetNode::TogglePromotePropertyToPin
          (UMovieGraphApplyCVarPresetNode *this,FName *param_1)

{
  longlong *this_00;
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FPropertyBagPropertyDesc *pFVar5;
  FName *pFVar6;
  FPropertyBagPropertyDesc *pFVar7;
  FPropertyBagPropertyDesc *pFVar8;
  FName *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  FPropertyBagPropertyDesc *local_58;
  int local_50;
  FInstancedStruct local_48;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_28;
  
  pFVar9 = (FName *)this->_padding_;
  pFVar6 = pFVar9 + (longlong)(int)this->_padding_ * 7;
  for (; pFVar9 != pFVar6; pFVar9 = pFVar9 + 7) {
    if (*pFVar9 == *param_1) {
      lVar4 = this->_padding_;
      if (pFVar9 == (FName *)0x0) goto LAB_14dce87a8;
      (**(code **)(lVar4 + 0x310))(this);
      goto LAB_14dce87b1;
    }
  }
  lVar4 = this->_padding_;
LAB_14dce87a8:
  (**(code **)(lVar4 + 0x308))(this);
LAB_14dce87b1:
  (**(code **)(this->_padding_ + 0x2d0))(this,&local_58);
  this_00 = &this->_padding_;
  iVar3 = FInstancedPropertyBag::GetNumPropertiesInBag((FInstancedPropertyBag *)this_00);
  iVar2 = local_50;
  bVar10 = iVar3 == local_50;
  if (bVar10) {
    pFVar8 = local_58 + local_50;
    pFVar7 = local_58;
    while( true ) {
      if (local_50 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar8) goto LAB_14dce884b;
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName
                         ((FInstancedPropertyBag *)this_00,pFVar7->Name);
      if (pFVar5 == (FPropertyBagPropertyDesc *)0x0) break;
      pFVar7 = pFVar7 + 1;
    }
  }
  else {
LAB_14dce884b:
    if (bVar10) goto LAB_14dce88ca;
  }
  FInstancedStruct::FInstancedStruct(&local_48);
  local_38 = local_58;
  if ((local_50 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_30 = local_50;
  local_28.DataPtr = local_38;
  FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)&local_48,&local_28,true);
  FInstancedPropertyBag::MigrateToNewBagInstance
            ((FInstancedPropertyBag *)this_00,(FInstancedPropertyBag *)&local_48);
  FInstancedStruct::Reset(&local_48);
LAB_14dce88ca:
  if (local_58 != (FPropertyBagPropertyDesc *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

