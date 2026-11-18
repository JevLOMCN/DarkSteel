// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 19

// StaticClass @ 14a872e90

UClass * __cdecl UChooserTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserTable",
               &Z_Registration_Info_UClass_UChooserTable.InnerSingleton,
               StaticRegisterNativesUChooserTable,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserTable>,InternalVTableHelperCtorCaller<UChooserTable>,
               local_res8,UChooserSignature::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserTable.InnerSingleton;
}

// UChooserTable @ 14a87dba0

UChooserTable * __thiscall UChooserTable::UChooserTable(UChooserTable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->RootChooser).field0_0x0.DebugPtr = (UChooserTable *)0x0;
  FInstancedStruct::FInstancedStruct(&this->FallbackResult);
  (this->CookedResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedResults).ArrayNum = 0;
  (this->CookedResults).ArrayMax = 0;
  (this->ColumnsStructs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnsStructs).ArrayNum = 0;
  (this->ColumnsStructs).ArrayMax = 0;
  return this;
}

// UChooserTable @ 14a87dc30

UChooserTable * __thiscall
UChooserTable::UChooserTable(UChooserTable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->RootChooser).field0_0x0.DebugPtr = (UChooserTable *)0x0;
  FInstancedStruct::FInstancedStruct(&this->FallbackResult);
  (this->CookedResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedResults).ArrayNum = 0;
  (this->CookedResults).ArrayMax = 0;
  (this->ColumnsStructs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnsStructs).ArrayNum = 0;
  (this->ColumnsStructs).ArrayMax = 0;
  return this;
}

// ~UChooserTable @ 14a87e790

void __thiscall UChooserTable::~UChooserTable(UChooserTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->ColumnsStructs).AllocatorInstance.Data,
             (this->ColumnsStructs).ArrayNum);
  pFVar1 = (this->ColumnsStructs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->CookedResults).AllocatorInstance.Data,
             (this->CookedResults).ArrayNum);
  pFVar1 = (this->CookedResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&this->FallbackResult);
  UChooserSignature::~UChooserSignature((UChooserSignature *)this);
  return;
}

// operator() @ 14a87f250

void __thiscall `UChooserTable::EvaluateChooser'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FChooserColumnBase *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  
  if (0 < *(int *)((longlong)this + 0x18)) {
    iVar10 = 0;
    lVar2 = *(longlong *)this;
    iVar1 = *(int *)(lVar2 + 0xa0);
    puVar9 = *(undefined8 **)(lVar2 + 0x98);
    puVar8 = puVar9 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)(lVar2 + 0xa0) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar9 == puVar8) break;
      pFVar7 = UE::StructUtils::GetStructRef<FChooserColumnBase>
                         ((UScriptStruct *)*puVar9,(void *)puVar9[1]);
      iVar6 = (**(code **)((longlong)*pFVar7 + 0x60))(pFVar7);
      if (iVar10 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15b,L"Invalid index (%lld)");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15c,L"Invalid count (%lld)");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(int *)((longlong)this + 0x10) < iVar6 + iVar10) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index + InNum <= ArrayNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15d,
                           L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar3 = *(longlong *)((longlong)this + 8);
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iStack_30 = iVar6;
      local_38 = iVar10 + lVar3;
      (**(code **)((longlong)*pFVar7 + 0x70))(pFVar7,&local_38);
      iVar10 = iVar10 + (iVar6 + 0xfU & 0xfffffff0);
      puVar9 = puVar9 + 2;
    }
  }
  return;
}

// BeginDestroy @ 14a881510

void __thiscall UChooserTable::BeginDestroy(UChooserTable *this)

{
  int *piVar1;
  
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->ColumnsStructs).AllocatorInstance.Data,
             (this->ColumnsStructs).ArrayNum);
  piVar1 = &(this->ColumnsStructs).ArrayMax;
  (this->ColumnsStructs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ColumnsStructs).AllocatorInstance,0,piVar1);
  }
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->CookedResults).AllocatorInstance.Data,
             (this->CookedResults).ArrayNum);
  piVar1 = &(this->CookedResults).ArrayMax;
  (this->CookedResults).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CookedResults).AllocatorInstance,0,piVar1);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Compile @ 14a8832d0

void __thiscall UChooserTable::Compile(UChooserTable *this,bool param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  UPackage *pUVar7;
  UChooserTable *pUVar8;
  longlong *plVar9;
  longlong *plVar10;
  uchar **ppuVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  iVar1 = *(int *)&(this->FallbackResult).ScriptStruct.field0_0x0;
  pUVar8 = (this->RootChooser).field0_0x0.DebugPtr;
  ppuVar11 = &this[-1].FallbackResult.StructMemory;
  if ((uchar **)this->_padding_ != (uchar **)0x0) {
    ppuVar11 = (uchar **)this->_padding_;
  }
  lVar12 = (longlong)(ppuVar11 + 5);
  if (ppuVar11 == (uchar **)0x0) {
    lVar12 = 0;
  }
  plVar9 = &pUVar8->_padding_;
  while( true ) {
    if (*(int *)&(this->FallbackResult).ScriptStruct.field0_0x0 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pUVar8 == (UChooserTable *)(plVar9 + (longlong)iVar1 * 2)) break;
    plVar10 = (longlong *)pUVar8->_padding_;
    if ((plVar10 != (longlong *)0x0) && (lVar3 = pUVar8->_padding_, lVar3 != 0)) {
      if (Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_Chooser();
        Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FChooserColumnBase,(UObject *)pUVar7,
                             L"ChooserColumnBase");
        if (Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_14a88338a;
LAB_14a8833ae:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd3,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
LAB_14a88338a:
        iVar2 = (int)(Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton)->
                     _padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FChooserColumnBase.OuterSingleton)->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14a8833ae;
      }
      (**(code **)(*plVar10 + 0x48))(plVar10,lVar12,param_1);
    }
    pUVar8 = (UChooserTable *)&pUVar8->_padding_;
  }
  if ((int)this->_padding_ != 0) {
    iVar1 = (int)this->_padding_;
    plVar9 = (longlong *)this->_padding_;
    plVar10 = plVar9 + (longlong)iVar1 * 2;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (plVar9 == plVar10) break;
      plVar4 = (longlong *)plVar9[1];
      if ((plVar4 != (longlong *)0x0) && (lVar3 = *plVar9, lVar3 != 0)) {
        if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar7 = Z_Construct_UPackage__Script_Chooser();
          Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase,(UObject *)pUVar7,
                               L"ObjectChooserBase");
          if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton !=
              (UScriptStruct *)0x0) goto LAB_14a88347a;
LAB_14a88349e:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd3,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
LAB_14a88347a:
          iVar2 = (int)(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->
                       _padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14a88349e;
        }
        (**(code **)(*plVar4 + 8))(plVar4,lVar12,param_1);
      }
      plVar9 = plVar9 + 2;
    }
  }
  return;
}

// EvaluateChooser @ 14a885da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

EIteratorStatus __cdecl
UChooserTable::EvaluateChooser
          (FChooserEvaluationContext *param_1,UChooserTable *param_2,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  void *pvVar1;
  UScriptStruct *pUVar2;
  FIndexData *pFVar3;
  code *pcVar4;
  uchar *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  FIdentityFunctor FVar8;
  UChooserTable *pUVar9;
  uint *puVar10;
  FChooserEvaluationContext *pFVar11;
  ForAnyElementType FVar12;
  FMRSWRecursiveAccessDetector *pFVar13;
  char cVar14;
  uint uVar15;
  EIteratorStatus EVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  FChooserColumnBase *pFVar20;
  ulonglong uVar21;
  FObjectChooserBase *pFVar22;
  uint *puVar23;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
  *pTVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  char cVar32;
  longlong *plVar33;
  longlong *plVar34;
  char cVar35;
  uint uVar36;
  longlong *plVar37;
  longlong *plVar38;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
  *pTVar39;
  FScriptContainerElement *pFVar40;
  uint *puVar41;
  uint uVar42;
  bool bVar43;
  undefined8 uStack_240;
  undefined1 auStack_238 [64];
  char local_1f8;
  char local_1f7;
  char local_1f6;
  FIdentityFunctor local_1f5;
  undefined1 local_1f4;
  undefined1 local_1f3;
  undefined1 local_1f2 [2];
  uint local_1f0;
  uint local_1ec;
  UChooserTable *local_1e8;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
  *local_1e0;
  uint *local_1d8;
  ulonglong local_1d0;
  FChooserEvaluationContext *local_1c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType local_1b8;
  int local_1b0;
  longlong local_1a8;
  uint local_1a0;
  uint local_19c;
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  ForAnyElementType local_188;
  int local_180;
  uint *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FName local_158;
  FString local_150;
  UChooserTable *local_140;
  ulonglong local_138;
  uint local_130;
  undefined4 local_12c;
  uint local_128;
  longlong local_120;
  uint local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FReadAccessScope local_78;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  puVar27 = auStack_238;
  puVar28 = auStack_238;
  local_48 = __security_cookie.value ^ (ulonglong)&local_1f8;
  bVar43 = CpuChannel->Enabled < 0;
  local_1e8 = param_2;
  local_1e0 = param_3;
  local_1c8 = param_1;
  if (bVar43) {
    local_1f8 = '\0';
  }
  else {
    local_1f8 = '\x01';
    uStack_240 = 0x14a885e31;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId424,"EvaluateChooser",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\Chooser.cpp"
               ,0x1a8);
    uStack_240 = 0x14a885e3c;
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId424);
  }
  if (param_2 == (UChooserTable *)0x0) {
    if (!bVar43) {
      uStack_240 = 0x14a885e51;
      FCpuProfilerTrace::OutputEndEvent();
    }
    uStack_240 = 0x14a885e59;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    EVar16 = Continue;
    goto LAB_14a886a0c;
  }
  local_158 = (FName)param_2->_padding_;
  uStack_240 = 0x14a885e7e;
  ::FName::ToString(&local_158,&local_150);
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_150.Data.ArrayNum != 0) {
    FVar25.Data = local_150.Data.AllocatorInstance.Data;
  }
  if (CpuChannel->Enabled < 0) {
    local_1f7 = '\0';
  }
  else {
    local_1f7 = '\x01';
    uStack_240 = 0x14a885ebb;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar25.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\Chooser.cpp"
               ,0x1af);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    uStack_240 = 0x14a885ed5;
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  (param_1->DebuggingInfo).CurrentChooser = (UObject *)param_2;
  uVar42 = (param_2->CookedResults).ArrayNum;
  uVar15 = uVar42 * 8 + 0xf;
  uVar21 = (ulonglong)uVar15;
  if (uVar42 * 8 == 0) {
    local_120 = 0;
    local_1a8 = 0;
    local_19c = 0;
    local_198[0] = 0;
    local_1a0 = uVar42;
  }
  else {
    uVar19 = (ulonglong)uVar15 + 0xf;
    if (uVar19 <= uVar21) {
      uVar19 = 0xffffffffffffff0;
    }
    uStack_240 = 0x14a885f2b;
    lVar31 = -(uVar19 & 0xfffffffffffffff0);
    local_1a0 = uVar42;
    local_19c = 0;
    local_198[0] = 0;
    local_1a8 = (longlong)&local_1f0 + lVar31;
    uVar19 = uVar21 + 0xf;
    if (uVar19 <= uVar21) {
      uVar19 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_238 + lVar31 + -8) = 0x14a885f66;
    puVar27 = auStack_238 + -(uVar19 & 0xfffffffffffffff0) + lVar31;
    local_120 = (longlong)&local_1f0 + -(uVar19 & 0xfffffffffffffff0) + lVar31;
  }
  uVar36 = 0;
  uVar15 = 0;
  local_118 = uVar42;
  local_114 = 0;
  local_110 = 0;
  if (uVar42 != 0) {
    local_1d8 = (uint *)0x0;
    uVar26 = uVar42;
    uVar29 = uVar36;
    do {
      local_1d8 = (uint *)CONCAT44(local_1d8._4_4_,uVar29);
      if (uVar26 <= uVar15) {
        *(undefined8 *)(puVar27 + -8) = 0x14a885fc8;
        bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size < MaxSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                            ,0x26,L"");
        uVar15 = local_19c;
        if (bVar43) {
          pcVar6 = (code *)swi(3);
          EVar16 = (*pcVar6)();
          return EVar16;
        }
      }
      uVar29 = uVar29 + 1;
      *(uint **)(local_1a8 + (ulonglong)uVar15 * 8) = local_1d8;
      uVar15 = local_19c + 1;
      local_19c = uVar15;
      uVar26 = local_1a0;
    } while (uVar29 < uVar42);
  }
  pFVar30 = (param_2->ColumnsStructs).AllocatorInstance.Data;
  iVar18 = (param_2->ColumnsStructs).ArrayNum;
  pFVar40 = pFVar30 + (longlong)iVar18 * 0x10;
  while( true ) {
    if ((param_2->ColumnsStructs).ArrayNum != iVar18) {
      local_1f4 = 0;
      *(undefined8 *)(puVar27 + -8) = 0x14a886026;
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f4);
    }
    if (pFVar30 == pFVar40) break;
    pvVar1 = *(void **)(pFVar30 + 8);
    pUVar2 = *(UScriptStruct **)pFVar30;
    *(undefined8 *)(puVar27 + -8) = 0x14a886037;
    pFVar20 = UE::StructUtils::GetStructRef<FChooserColumnBase>(pUVar2,pvVar1);
    pcVar6 = *(code **)((longlong)*pFVar20 + 0x60);
    *(undefined8 *)(puVar27 + -8) = 0x14a886040;
    iVar17 = (*pcVar6)(pFVar20);
    uVar36 = uVar36 + (iVar17 + 0xfU & 0xfffffff0);
    pFVar30 = pFVar30 + 0x10;
  }
  local_1f0 = uVar36;
  if (uVar36 == 0) {
    local_138 = 0;
    local_1d0 = 0;
    puVar28 = puVar27;
  }
  else {
    uVar21 = (longlong)(int)uVar36 + 0x1e;
    if (uVar21 <= (longlong)(int)uVar36 + 0xfU) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar27 + -8) = 0x14a886087;
    lVar31 = -(uVar21 & 0xfffffffffffffff0);
    local_138 = (ulonglong)(puVar27 + lVar31 + 0x4f) & 0xfffffffffffffff0;
    puVar28 = puVar27 + lVar31;
    local_1d0 = local_138;
    if ((int)uVar36 < 0) {
      *(undefined8 *)(puVar27 + lVar31 + -8) = 0x14a8860c7;
      bVar43 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      puVar28 = puVar27 + lVar31;
      if (bVar43) {
        pcVar6 = (code *)swi(3);
        EVar16 = (*pcVar6)();
        return EVar16;
      }
    }
  }
  local_12c = uStack_fc;
  local_130 = uVar36;
  uVar42 = 0;
  local_128 = uVar36;
  local_140 = param_2;
  local_1ec = (param_2->ColumnsStructs).ArrayNum;
  uVar21 = (ulonglong)(int)local_1ec;
  pFVar30 = (param_2->ColumnsStructs).AllocatorInstance.Data;
  pFVar40 = pFVar30 + uVar21 * 0x10;
  plVar33 = &local_120;
  plVar37 = &local_1a8;
  while( true ) {
    if ((param_2->ColumnsStructs).ArrayNum != (int)uVar21) {
      local_1f3 = 0;
      *(undefined8 *)(puVar28 + -8) = 0x14a88613a;
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f3);
    }
    cVar32 = local_1f7;
    cVar14 = local_1f8;
    if (pFVar30 == pFVar40) break;
    pvVar1 = *(void **)(pFVar30 + 8);
    pUVar2 = *(UScriptStruct **)pFVar30;
    *(undefined8 *)(puVar28 + -8) = 0x14a886151;
    pFVar20 = UE::StructUtils::GetStructRef<FChooserColumnBase>(pUVar2,pvVar1);
    pcVar6 = *(code **)((longlong)*pFVar20 + 0x60);
    *(undefined8 *)(puVar28 + -8) = 0x14a88615d;
    iVar18 = (*pcVar6)(pFVar20);
    if ((int)uVar42 < 0) {
      *(longlong *)(puVar28 + 0x20) = (longlong)(int)uVar42;
      *(undefined8 *)(puVar28 + -8) = 0x14a88618d;
      bVar43 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x15b,L"Invalid index (%lld)");
      if (bVar43) {
        pcVar6 = (code *)swi(3);
        EVar16 = (*pcVar6)();
        return EVar16;
      }
    }
    if (iVar18 < 0) {
      *(longlong *)(puVar28 + 0x20) = (longlong)iVar18;
      *(undefined8 *)(puVar28 + -8) = 0x14a8861bc;
      bVar43 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x15c,L"Invalid count (%lld)");
      if (bVar43) {
        pcVar6 = (code *)swi(3);
        EVar16 = (*pcVar6)();
        return EVar16;
      }
    }
    if ((int)local_1f0 < (int)(iVar18 + uVar42)) {
      *(longlong *)(puVar28 + 0x30) = (longlong)(int)local_1f0;
      *(longlong *)(puVar28 + 0x28) = (longlong)iVar18;
      *(longlong *)(puVar28 + 0x20) = (longlong)(int)uVar42;
      *(undefined8 *)(puVar28 + -8) = 0x14a886200;
      bVar43 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index + InNum <= ArrayNum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x15d,
                          L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                         );
      if (bVar43) {
        pcVar6 = (code *)swi(3);
        EVar16 = (*pcVar6)();
        return EVar16;
      }
    }
    local_178 = (uint *)((longlong)(int)uVar42 + local_1d0);
    iStack_170 = iVar18;
    if (iVar18 < 0) {
      *(undefined8 *)(puVar28 + -8) = 0x14a88623e;
      bVar43 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar43) {
        pcVar6 = (code *)swi(3);
        EVar16 = (*pcVar6)();
        return EVar16;
      }
    }
    puVar23 = local_178;
    uVar7 = CONCAT44(uStack_16c,iStack_170);
    local_a8 = (longlong)local_178;
    pcVar6 = *(code **)((longlong)*pFVar20 + 0x68);
    uStack_a0 = uVar7;
    *(undefined8 *)(puVar28 + -8) = 0x14a886263;
    (*pcVar6)(pFVar20,&local_a8);
    uVar42 = uVar42 + (iVar18 + 0xfU & 0xfffffff0);
    pcVar6 = *(code **)((longlong)*pFVar20 + 0x28);
    *(undefined8 *)(puVar28 + -8) = 0x14a886275;
    cVar14 = (*pcVar6)(pFVar20);
    pFVar11 = local_1c8;
    plVar34 = plVar33;
    plVar38 = plVar37;
    if (cVar14 != '\0') {
      *(longlong **)(puVar28 + 0x20) = &local_98;
      local_98 = (longlong)puVar23;
      *(undefined4 *)((longlong)plVar33 + 0xc) = 0;
      pcVar6 = *(code **)((longlong)*pFVar20 + 0x10);
      uStack_90 = uVar7;
      *(undefined8 *)(puVar28 + -8) = 0x14a8862b0;
      (*pcVar6)(pFVar20,pFVar11,plVar37,plVar33);
      plVar34 = plVar37;
      plVar38 = plVar33;
      if ((char)plVar37[2] == '\0') {
        pcVar6 = *(code **)((longlong)*pFVar20 + 0x20);
        *(undefined8 *)(puVar28 + -8) = 0x14a8862bf;
        cVar14 = (*pcVar6)(pFVar20);
        if (cVar14 == '\0') goto LAB_14a8862c7;
      }
      *(undefined1 *)(plVar33 + 2) = 1;
    }
LAB_14a8862c7:
    uVar21 = (ulonglong)local_1ec;
    pFVar30 = pFVar30 + 0x10;
    param_2 = local_1e8;
    plVar33 = plVar34;
    plVar37 = plVar38;
  }
  if (uVar42 != local_1f0) {
    *(undefined8 *)(puVar28 + -8) = 0x14a886305;
    bVar43 = ::FDebug::CheckVerifyFailedImpl2
                       ("ScratchAreaStart == TotalScratchAreaSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\Chooser.cpp"
                        ,0x213,L"");
    if (bVar43) {
      pcVar6 = (code *)swi(3);
      EVar16 = (*pcVar6)();
      return EVar16;
    }
  }
  FVar8 = local_1f5;
  uVar42 = *(uint *)((longlong)plVar37 + 0xc);
  if ((1 < uVar42) && ((char)plVar37[2] != '\0')) {
    pFVar3 = (FIndexData *)*plVar37;
    *(undefined8 *)(puVar28 + -8) = 0x14a88632e;
    AlgoImpl::
    IntroSortInternal<FChooserIndexArray::FIndexData,unsigned_int,FIdentityFunctor,TLess<void>_>
              (pFVar3,uVar42,FVar8,(TLess<void>)FVar8);
  }
  puVar41 = (uint *)*plVar37;
  cVar35 = '\0';
  local_1f6 = '\0';
  puVar23 = puVar41 + (ulonglong)*(uint *)((longlong)plVar37 + 0xc) * 2;
  local_1d8 = puVar41;
  local_178 = puVar23;
  if (puVar41 == puVar23) {
LAB_14a886764:
    pFVar11 = local_1c8;
    *(undefined8 *)(puVar28 + -8) = 0x14a886779;
    FChooserTrace::OutputChooserEvaluation((UObject *)param_2,pFVar11,0xfffffffe);
    puVar5 = (param_2->FallbackResult).StructMemory;
    pTVar39 = local_1e0;
    if ((puVar5 != (uchar *)0x0) &&
       (pUVar2 = (param_2->FallbackResult).ScriptStruct.field0_0x0.DebugPtr,
       pUVar2 != (UScriptStruct *)0x0)) {
      *(undefined8 *)(puVar28 + -8) = 0x14a88679b;
      pFVar22 = UE::StructUtils::GetStructRef<FObjectChooserBase>(pUVar2,puVar5);
      pTVar39 = local_1e0;
      pcVar6 = *(code **)((longlong)*pFVar22 + 0x28);
      *(undefined8 *)(puVar28 + -8) = 0x14a8867b8;
      pTVar24 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
                ::
                TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
                          (local_60,pTVar39);
      *(undefined8 *)(puVar28 + -8) = 0x14a8867c3;
      local_1ec = (*pcVar6)(pFVar22,pFVar11,pTVar24);
      pUVar9 = local_1e8;
      if (local_1ec != 0) {
        uVar42 = 0;
        local_1f6 = '\x01';
        iVar18 = (local_1e8->ColumnsStructs).ArrayNum;
        pFVar30 = (local_1e8->ColumnsStructs).AllocatorInstance.Data;
        pFVar40 = pFVar30 + (longlong)iVar18 * 0x10;
        while( true ) {
          if ((pUVar9->ColumnsStructs).ArrayNum != iVar18) {
            local_1f5 = (FIdentityFunctor)0x0;
            *(undefined8 *)(puVar28 + -8) = 0x14a886806;
            `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1f5);
          }
          cVar32 = local_1f7;
          cVar14 = local_1f8;
          if (pFVar30 == pFVar40) break;
          pvVar1 = *(void **)(pFVar30 + 8);
          pUVar2 = *(UScriptStruct **)pFVar30;
          *(undefined8 *)(puVar28 + -8) = 0x14a88681b;
          pFVar20 = UE::StructUtils::GetStructRef<FChooserColumnBase>(pUVar2,pvVar1);
          pcVar6 = *(code **)((longlong)*pFVar20 + 0x60);
          *(undefined8 *)(puVar28 + -8) = 0x14a886827;
          iVar17 = (*pcVar6)(pFVar20);
          if ((int)uVar42 < 0) {
            *(longlong *)(puVar28 + 0x20) = (longlong)(int)uVar42;
            *(undefined8 *)(puVar28 + -8) = 0x14a886857;
            bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15b,L"Invalid index (%lld)");
            if (bVar43) {
              pcVar6 = (code *)swi(3);
              EVar16 = (*pcVar6)();
              return EVar16;
            }
          }
          if (iVar17 < 0) {
            *(longlong *)(puVar28 + 0x20) = (longlong)iVar17;
            *(undefined8 *)(puVar28 + -8) = 0x14a886886;
            bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("InNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15c,L"Invalid count (%lld)");
            if (bVar43) {
              pcVar6 = (code *)swi(3);
              EVar16 = (*pcVar6)();
              return EVar16;
            }
          }
          if ((int)local_1f0 < (int)(iVar17 + uVar42)) {
            *(longlong *)(puVar28 + 0x30) = (longlong)(int)local_1f0;
            *(longlong *)(puVar28 + 0x28) = (longlong)iVar17;
            *(longlong *)(puVar28 + 0x20) = (longlong)(int)uVar42;
            *(undefined8 *)(puVar28 + -8) = 0x14a8868ca;
            bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index + InNum <= ArrayNum",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15d,
                                L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                               );
            if (bVar43) {
              pcVar6 = (code *)swi(3);
              EVar16 = (*pcVar6)();
              return EVar16;
            }
          }
          local_168 = (longlong)(int)uVar42 + local_1d0;
          iStack_160 = iVar17;
          if (iVar17 < 0) {
            *(undefined8 *)(puVar28 + -8) = 0x14a886908;
            bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L"");
            if (bVar43) {
              pcVar6 = (code *)swi(3);
              EVar16 = (*pcVar6)();
              return EVar16;
            }
          }
          pFVar11 = local_1c8;
          local_108 = (undefined4)local_168;
          uStack_104 = local_168._4_4_;
          iStack_100 = iStack_160;
          uStack_fc = uStack_15c;
          uVar42 = uVar42 + (iVar17 + 0xfU & 0xfffffff0);
          pcVar6 = *(code **)((longlong)*pFVar20 + 0x38);
          *(undefined8 *)(puVar28 + -8) = 0x14a886941;
          (*pcVar6)(pFVar20,pFVar11,0xfffffffe,&local_108);
          pFVar30 = pFVar30 + 0x10;
        }
        if (uVar42 != local_1f0) {
          *(undefined8 *)(puVar28 + -8) = 0x14a886993;
          bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("ScratchAreaStart == TotalScratchAreaSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\Chooser.cpp"
                              ,0x26b,L"");
          if (bVar43) {
            pcVar6 = (code *)swi(3);
            EVar16 = (*pcVar6)();
            return EVar16;
          }
        }
        pTVar39 = local_1e0;
        cVar35 = local_1f6;
        if (local_1ec == 2) {
LAB_14a88699f:
          *(undefined8 *)(puVar28 + -8) = 0x14a8869ab;
          `UChooserTable::EvaluateChooser'::__l2::<lambda_1>::operator()(&local_140);
          if (cVar32 != '\0') {
            *(undefined8 *)(puVar28 + -8) = 0x14a8869b5;
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (cVar14 != '\0') {
            *(undefined8 *)(puVar28 + -8) = 0x14a8869be;
            FCpuProfilerTrace::OutputEndEvent();
          }
          pTVar39 = local_1e0;
          *(undefined8 *)(puVar28 + -8) = 0x14a8869c7;
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar39);
          EVar16 = Stop;
          goto LAB_14a886a0c;
        }
      }
    }
  }
  else {
    do {
      pUVar9 = local_1e8;
      uVar42 = *puVar41;
      lVar31 = (longlong)(int)uVar42;
      param_2 = local_1e8;
      if ((-1 < (int)uVar42) && (iVar18 = (local_1e8->CookedResults).ArrayNum, (int)uVar42 < iVar18)
         ) {
        local_1d8 = puVar41;
        if ((int)uVar42 < 0) {
          *(longlong *)(puVar28 + 0x28) = (longlong)iVar18;
          *(longlong *)(puVar28 + 0x20) = lVar31;
          *(undefined8 *)(puVar28 + -8) = 0x14a8863a5;
          bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar43) {
            pcVar6 = (code *)swi(3);
            EVar16 = (*pcVar6)();
            return EVar16;
          }
        }
        pFVar30 = (pUVar9->CookedResults).AllocatorInstance.Data;
        pvVar1 = *(void **)(pFVar30 + lVar31 * 0x10 + 8);
        pUVar2 = *(UScriptStruct **)(pFVar30 + lVar31 * 0x10);
        *(undefined8 *)(puVar28 + -8) = 0x14a8863c6;
        pFVar22 = UE::StructUtils::GetStructRef<FObjectChooserBase>(pUVar2,pvVar1);
        pTVar39 = local_1e0;
        uVar42 = 0;
        local_190 = (undefined1  [8])0x0;
        local_188.Data = (FScriptContainerElement *)0x0;
        local_180 = 0;
        pcVar6 = *(code **)((longlong)*pFVar22 + 0x28);
        if (local_1e0 !=
            (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
             *)local_190) {
          local_1c0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_1b8.Data = (FScriptContainerElement *)0x0;
          local_1b0 = 0;
          *(undefined8 *)(puVar28 + -8) = 0x14a88640b;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar39,&local_78);
          if ((*(int *)&pTVar39->field_0x10 != 0) &&
             (plVar33 = *(longlong **)&pTVar39->field_0x8, plVar33 != (longlong *)0x0)) {
            pcVar4 = *(code **)(*plVar33 + 0x50);
            *(undefined8 *)(puVar28 + -8) = 0x14a886424;
            (*pcVar4)(plVar33,&local_1c0);
          }
          *(undefined8 *)(puVar28 + -8) = 0x14a886430;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_78);
          *(undefined8 *)(puVar28 + -8) = 0x14a886440;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1c0,(FWriteAccessScope *)&local_f8);
          pFVar13 = local_f8.Accessor;
          iVar18 = local_1b0;
          FVar25.Data = local_1b8.Data;
          local_1b8.Data = (FScriptContainerElement *)0x0;
          local_1b0 = 0;
          if (local_f8.bDestroyed == false) {
            *(undefined8 *)(puVar28 + -8) = 0x14a88646c;
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFVar13,&local_f8);
          }
          *(undefined8 *)(puVar28 + -8) = 0x14a88647c;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
                     (FWriteAccessScope *)&local_e0);
          if (local_180 == 0) {
LAB_14a8864ae:
            FVar12.Data = local_188.Data;
            if (local_188.Data != (FScriptContainerElement *)0x0) {
              *(undefined8 *)(puVar28 + -8) = 0x14a8864b8;
              FMemory::Free(FVar12.Data);
            }
          }
          else if (local_188.Data != (FScriptContainerElement *)0x0) {
            pcVar4 = (code *)**(undefined8 **)local_188.Data;
            *(undefined8 *)(puVar28 + -8) = 0x14a886492;
            (*pcVar4)();
            *(undefined8 *)(puVar28 + -8) = 0x14a8864a6;
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_188,0,0,0x10);
            local_180 = 0;
            goto LAB_14a8864ae;
          }
          pFVar13 = local_e0.Accessor;
          local_188.Data = FVar25.Data;
          local_180 = iVar18;
          if (local_e0.bDestroyed == false) {
            *(undefined8 *)(puVar28 + -8) = 0x14a8864dc;
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFVar13,&local_e0);
          }
          *(undefined8 *)(puVar28 + -8) = 0x14a8864ec;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1c0,(FWriteAccessScope *)&local_c8);
          if ((local_1b0 != 0) && (local_1b8.Data != (FScriptContainerElement *)0x0)) {
            pcVar4 = (code *)**(undefined8 **)local_1b8.Data;
            *(undefined8 *)(puVar28 + -8) = 0x14a886502;
            (*pcVar4)();
            *(undefined8 *)(puVar28 + -8) = 0x14a886516;
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1b8,0,0,0x10);
            local_1b0 = 0;
          }
          pFVar13 = local_c8.Accessor;
          if (local_c8.bDestroyed == false) {
            *(undefined8 *)(puVar28 + -8) = 0x14a88653a;
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFVar13,&local_c8);
          }
          FVar25.Data = local_1b8.Data;
          if (local_1b8.Data != (FScriptContainerElement *)0x0) {
            *(undefined8 *)(puVar28 + -8) = 0x14a886548;
            FMemory::Free(FVar25.Data);
          }
          *(undefined8 *)(puVar28 + -8) = 0x14a886551;
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
          puVar41 = local_1d8;
        }
        pFVar11 = local_1c8;
        *(undefined8 *)(puVar28 + -8) = 0x14a886563;
        local_1ec = (*pcVar6)(pFVar22,pFVar11);
        puVar10 = local_1d8;
        puVar23 = local_178;
        param_2 = local_1e8;
        cVar35 = local_1f6;
        if (local_1ec != 0) {
          iVar18 = (local_1e8->ColumnsStructs).ArrayNum;
          pFVar30 = (local_1e8->ColumnsStructs).AllocatorInstance.Data;
          pFVar40 = pFVar30 + (longlong)iVar18 * 0x10;
          while( true ) {
            param_2 = local_1e8;
            if ((local_1e8->ColumnsStructs).ArrayNum != iVar18) {
              local_1f2[0] = 0;
              *(undefined8 *)(puVar28 + -8) = 0x14a8865a6;
              `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_1f2);
            }
            cVar32 = local_1f7;
            cVar14 = local_1f8;
            if (pFVar30 == pFVar40) break;
            pvVar1 = *(void **)(pFVar30 + 8);
            pUVar2 = *(UScriptStruct **)pFVar30;
            *(undefined8 *)(puVar28 + -8) = 0x14a8865bb;
            pFVar20 = UE::StructUtils::GetStructRef<FChooserColumnBase>(pUVar2,pvVar1);
            pcVar6 = *(code **)((longlong)*pFVar20 + 0x60);
            *(undefined8 *)(puVar28 + -8) = 0x14a8865c7;
            iVar17 = (*pcVar6)(pFVar20);
            if ((int)uVar42 < 0) {
              *(longlong *)(puVar28 + 0x20) = (longlong)(int)uVar42;
              *(undefined8 *)(puVar28 + -8) = 0x14a8865f7;
              bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x15b,L"Invalid index (%lld)");
              if (bVar43) {
                pcVar6 = (code *)swi(3);
                EVar16 = (*pcVar6)();
                return EVar16;
              }
            }
            if (iVar17 < 0) {
              *(longlong *)(puVar28 + 0x20) = (longlong)iVar17;
              *(undefined8 *)(puVar28 + -8) = 0x14a886626;
              bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x15c,L"Invalid count (%lld)");
              if (bVar43) {
                pcVar6 = (code *)swi(3);
                EVar16 = (*pcVar6)();
                return EVar16;
              }
            }
            if ((int)local_1f0 < (int)(iVar17 + uVar42)) {
              *(longlong *)(puVar28 + 0x30) = (longlong)(int)local_1f0;
              *(longlong *)(puVar28 + 0x28) = (longlong)iVar17;
              *(longlong *)(puVar28 + 0x20) = (longlong)(int)uVar42;
              *(undefined8 *)(puVar28 + -8) = 0x14a88666a;
              bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index + InNum <= ArrayNum",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x15d,
                                  L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                 );
              if (bVar43) {
                pcVar6 = (code *)swi(3);
                EVar16 = (*pcVar6)();
                return EVar16;
              }
            }
            local_168 = (longlong)(int)uVar42 + local_1d0;
            iStack_160 = iVar17;
            if (iVar17 < 0) {
              *(undefined8 *)(puVar28 + -8) = 0x14a8866a8;
              bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L"");
              if (bVar43) {
                pcVar6 = (code *)swi(3);
                EVar16 = (*pcVar6)();
                return EVar16;
              }
            }
            pFVar11 = local_1c8;
            uVar15 = *puVar10;
            uVar42 = uVar42 + (iVar17 + 0xfU & 0xfffffff0);
            local_88 = (undefined4)local_168;
            uStack_84 = local_168._4_4_;
            iStack_80 = iStack_160;
            uStack_7c = uStack_15c;
            pcVar6 = *(code **)((longlong)*pFVar20 + 0x38);
            *(undefined8 *)(puVar28 + -8) = 0x14a8866de;
            (*pcVar6)(pFVar20,pFVar11,uVar15,&local_88);
            pFVar30 = pFVar30 + 0x10;
          }
          if (uVar42 != local_1f0) {
            *(undefined8 *)(puVar28 + -8) = 0x14a886719;
            bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScratchAreaStart == TotalScratchAreaSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\Chooser.cpp"
                                ,0x23b,L"");
            if (bVar43) {
              pcVar6 = (code *)swi(3);
              EVar16 = (*pcVar6)();
              return EVar16;
            }
          }
          pFVar11 = local_1c8;
          puVar41 = local_1d8;
          uVar42 = *local_1d8;
          *(undefined8 *)(puVar28 + -8) = 0x14a886732;
          FChooserTrace::OutputChooserEvaluation((UObject *)param_2,pFVar11,uVar42);
          local_1f6 = '\x01';
          puVar23 = local_178;
          cVar35 = local_1f6;
          if (local_1ec == 2) goto LAB_14a88699f;
        }
      }
      puVar41 = puVar41 + 2;
    } while (puVar41 != puVar23);
    pTVar39 = local_1e0;
    local_1d8 = puVar41;
    if (cVar35 == '\0') goto LAB_14a886764;
  }
  *(undefined8 *)(puVar28 + -8) = 0x14a8869e3;
  `UChooserTable::EvaluateChooser'::__l2::<lambda_1>::operator()(&local_140);
  if (cVar32 != '\0') {
    *(undefined8 *)(puVar28 + -8) = 0x14a8869f9;
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar14 != '\0') {
    *(undefined8 *)(puVar28 + -8) = 0x14a886a02;
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined8 *)(puVar28 + -8) = 0x14a886a0a;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar39);
  EVar16 = (EIteratorStatus)(cVar35 != '\0');
LAB_14a886a0c:
  *(undefined8 *)(puVar28 + -8) = 0x14a886a1b;
  return EVar16;
}

// EvaluateChooser @ 14a886a50

EIteratorStatus __cdecl
UChooserTable::EvaluateChooser
          (FChooserEvaluationContext *param_1,UChooserTable *param_2,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  EIteratorStatus EVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  TDelegateBase<FNotThreadSafeDelegateMode> local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  ::
  TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
            (&local_40,param_3);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EIteratorStatus_FObjectChooserBase__AEBU__TSoftObjectPtr_VUObject_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<enum_FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy,`UChooserTable::EvaluateChooser'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 3),&local_40);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  EVar1 = EvaluateChooser(param_1,param_2,
                          (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(TSoftObjectPtr<UObject>_const_&),FDefaultDelegateUserPolicy>
                           *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_40);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return EVar1;
}

// GetContextData @ 14a889c60

TArrayView<FInstancedStruct_const_,int> * __thiscall
UChooserTable::GetContextData
          (UChooserTable *this,TArrayView<FInstancedStruct_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FInstancedStruct_const_,int> *pTVar4;
  uchar **ppuVar5;
  
  ppuVar5 = &this[-1].FallbackResult.StructMemory;
  if ((uchar **)this->_padding_ != (uchar **)0x0) {
    ppuVar5 = (uchar **)this->_padding_;
  }
  iVar1 = *(int *)(ppuVar5 + 0xd);
  __return_storage_ptr__->DataPtr = (FInstancedStruct *)ppuVar5[0xc];
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FInstancedStruct_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a88ac60

UClass * __cdecl UChooserTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserTable",
               &Z_Registration_Info_UClass_UChooserTable.InnerSingleton,
               StaticRegisterNativesUChooserTable,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserTable>,InternalVTableHelperCtorCaller<UChooserTable>,
               local_res8,UChooserSignature::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserTable.InnerSingleton;
}

// IterateChooser @ 14a88c120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

EIteratorStatus __cdecl
UChooserTable::IterateChooser
          (FChooserEvaluationContext *param_1,UChooserTable *param_2,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  UScriptStruct *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  uchar *puVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  FChooserEvaluationContext *pFVar10;
  ForAnyElementType FVar11;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this
  ;
  FMRSWRecursiveAccessDetector *pFVar12;
  bool bVar13;
  uint uVar14;
  EIteratorStatus EVar15;
  int iVar16;
  ulonglong uVar17;
  FChooserColumnBase *pFVar18;
  FObjectChooserBase FVar19;
  FObjectChooserBase *pFVar20;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar21;
  undefined1 *puVar22;
  FObjectChooserBase FVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  bool bVar27;
  undefined1 auStack_138 [48];
  undefined1 local_108;
  undefined1 local_107 [7];
  FObjectChooserBase local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  FChooserEvaluationContext *local_e0;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *local_c0;
  FObjectChooserBase local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  puVar22 = auStack_138;
  local_38 = __security_cookie.value ^ (ulonglong)&local_108;
  bVar27 = -1 < CpuChannel->Enabled;
  local_e0 = param_1;
  local_c0 = param_3;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId643,"IterateChooser",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\Chooser.cpp"
               ,0x283);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId643);
  }
  if (param_2 != (UChooserTable *)0x0) {
    uVar1 = (param_2->CookedResults).ArrayNum;
    FVar19 = (FObjectChooserBase)0x0;
    puVar22 = auStack_138;
    FVar23 = FVar19;
    if (uVar1 * 8 != 0) {
      uVar14 = uVar1 * 8 + 0xf;
      uVar17 = (ulonglong)uVar14 + 0xf;
      if (uVar17 <= uVar14) {
        uVar17 = 0xffffffffffffff0;
      }
      puVar22 = auStack_138 + -(uVar17 & 0xfffffffffffffff0);
      FVar23 = (FObjectChooserBase)((longlong)&local_100 + -(uVar17 & 0xfffffffffffffff0));
    }
    if (uVar1 != 0) {
      do {
        local_100 = FVar19;
        FVar19._0_4_ = local_100._0_4_ + 1;
        FVar19._4_4_ = 0;
        *(FObjectChooserBase *)((longlong)FVar23 + (longlong)local_100 * 8) = local_100;
      } while (FVar19._0_4_ < uVar1);
    }
    FVar19 = (FObjectChooserBase)((longlong)FVar23 + (longlong)FVar19 * 8);
    local_b8 = FVar19;
    if (FVar23 != FVar19) {
      do {
        iVar16 = *(int *)FVar23;
        lVar24 = (longlong)iVar16;
        if ((-1 < iVar16) && (iVar2 = (param_2->CookedResults).ArrayNum, iVar16 < iVar2)) {
          if (iVar16 < 0) {
            *(longlong *)(puVar22 + 0x28) = (longlong)iVar2;
            *(longlong *)(puVar22 + 0x20) = lVar24;
            *(undefined8 *)(puVar22 + -8) = 0x14a88c28c;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              EVar15 = (*pcVar8)();
              return EVar15;
            }
          }
          pFVar25 = (param_2->CookedResults).AllocatorInstance.Data;
          pvVar3 = *(void **)(pFVar25 + lVar24 * 0x10 + 8);
          pUVar4 = *(UScriptStruct **)(pFVar25 + lVar24 * 0x10);
          *(undefined8 *)(puVar22 + -8) = 0x14a88c2ad;
          local_100 = (FObjectChooserBase)
                      UE::StructUtils::GetStructRef<FObjectChooserBase>(pUVar4,pvVar3);
          pFVar10 = local_e0;
          iVar16 = (param_2->ColumnsStructs).ArrayNum;
          pFVar25 = (param_2->ColumnsStructs).AllocatorInstance.Data;
          pFVar26 = pFVar25 + (longlong)iVar16 * 0x10;
          while( true ) {
            if ((param_2->ColumnsStructs).ArrayNum != iVar16) {
              local_108 = 0;
              *(undefined8 *)(puVar22 + -8) = 0x14a88c2e6;
              `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_108);
            }
            param_3 = local_c0;
            if (pFVar25 == pFVar26) break;
            pvVar3 = *(void **)(pFVar25 + 8);
            pUVar4 = *(UScriptStruct **)pFVar25;
            *(undefined8 *)(puVar22 + -8) = 0x14a88c2f7;
            pFVar18 = UE::StructUtils::GetStructRef<FChooserColumnBase>(pUVar4,pvVar3);
            pcVar8 = *(code **)((longlong)*pFVar18 + 0x40);
            *(undefined8 *)(puVar22 + -8) = 0x14a88c30a;
            (*pcVar8)(pFVar18,pFVar10);
            pFVar25 = pFVar25 + 0x10;
          }
          local_d8 = (undefined1  [8])0x0;
          local_d0.Data = (FScriptContainerElement *)0x0;
          local_c8 = 0;
          pcVar8 = *(code **)((longlong)*(FObjectChooserBase *)local_100 + 0x38);
          if (local_c0 !=
              (TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
               *)local_d8) {
            local_f8.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_f0.Data = (FScriptContainerElement *)0x0;
            local_e8 = 0;
            *(undefined8 *)(puVar22 + -8) = 0x14a88c356;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_68);
            if ((*(int *)&param_3->field_0x10 != 0) &&
               (plVar5 = *(longlong **)&param_3->field_0x8, plVar5 != (longlong *)0x0)) {
              pcVar6 = *(code **)(*plVar5 + 0x50);
              *(undefined8 *)(puVar22 + -8) = 0x14a88c36f;
              (*pcVar6)(plVar5,&local_f8);
            }
            *(undefined8 *)(puVar22 + -8) = 0x14a88c37b;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_68);
            *(undefined8 *)(puVar22 + -8) = 0x14a88c388;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_f8,(FWriteAccessScope *)&local_b0);
            pFVar12 = local_b0.Accessor;
            iVar16 = local_e8;
            FVar9.Data = local_f0.Data;
            local_f0.Data = (FScriptContainerElement *)0x0;
            local_e8 = 0;
            if (local_b0.bDestroyed == false) {
              *(undefined8 *)(puVar22 + -8) = 0x14a88c3ae;
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFVar12,&local_b0);
            }
            *(undefined8 *)(puVar22 + -8) = 0x14a88c3bb;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                       (FWriteAccessScope *)&local_98);
            if (local_c8 == 0) {
LAB_14a88c3f0:
              FVar11.Data = local_d0.Data;
              if (local_d0.Data != (FScriptContainerElement *)0x0) {
                *(undefined8 *)(puVar22 + -8) = 0x14a88c3fa;
                FMemory::Free(FVar11.Data);
              }
            }
            else if (local_d0.Data != (FScriptContainerElement *)0x0) {
              pcVar6 = (code *)**(undefined8 **)local_d0.Data;
              *(undefined8 *)(puVar22 + -8) = 0x14a88c3d1;
              (*pcVar6)();
              *(undefined8 *)(puVar22 + -8) = 0x14a88c3e5;
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_d0,0,0,0x10);
              local_c8 = 0;
              goto LAB_14a88c3f0;
            }
            pFVar12 = local_98.Accessor;
            local_d0.Data = FVar9.Data;
            local_c8 = iVar16;
            if (local_98.bDestroyed == false) {
              *(undefined8 *)(puVar22 + -8) = 0x14a88c418;
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFVar12,&local_98);
            }
            *(undefined8 *)(puVar22 + -8) = 0x14a88c428;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_f8,(FWriteAccessScope *)&local_80);
            if ((local_e8 != 0) && (local_f0.Data != (FScriptContainerElement *)0x0)) {
              pcVar6 = (code *)**(undefined8 **)local_f0.Data;
              *(undefined8 *)(puVar22 + -8) = 0x14a88c43e;
              (*pcVar6)();
              *(undefined8 *)(puVar22 + -8) = 0x14a88c452;
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_f0,0,0,0x10);
              local_e8 = 0;
            }
            pFVar12 = local_80.Accessor;
            if (local_80.bDestroyed == false) {
              *(undefined8 *)(puVar22 + -8) = 0x14a88c479;
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFVar12,&local_80);
            }
            FVar9.Data = local_f0.Data;
            if (local_f0.Data != (FScriptContainerElement *)0x0) {
              *(undefined8 *)(puVar22 + -8) = 0x14a88c487;
              FMemory::Free(FVar9.Data);
            }
            *(undefined8 *)(puVar22 + -8) = 0x14a88c490;
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
          }
          pFVar10 = local_e0;
          FVar19 = local_100;
          *(undefined8 *)(puVar22 + -8) = 0x14a88c49f;
          iVar16 = (*pcVar8)(FVar19,pFVar10);
          FVar19 = local_b8;
          if (iVar16 == 2) {
            if (bVar27) {
              *(undefined8 *)(puVar22 + -8) = 0x14a88c548;
              FCpuProfilerTrace::OutputEndEvent();
            }
            *(undefined8 *)(puVar22 + -8) = 0x14a88c550;
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
            EVar15 = Stop;
            goto LAB_14a88c5a8;
          }
        }
        FVar23 = (FObjectChooserBase)((longlong)FVar23 + 8);
      } while (FVar23 != FVar19);
    }
    puVar7 = (param_2->FallbackResult).StructMemory;
    if ((puVar7 != (uchar *)0x0) &&
       (pUVar4 = (param_2->FallbackResult).ScriptStruct.field0_0x0.DebugPtr,
       pUVar4 != (UScriptStruct *)0x0)) {
      *(undefined8 *)(puVar22 + -8) = 0x14a88c4db;
      pFVar20 = UE::StructUtils::GetStructRef<FObjectChooserBase>(pUVar4,puVar7);
      pFVar10 = local_e0;
      iVar16 = (param_2->ColumnsStructs).ArrayNum;
      pFVar25 = (param_2->ColumnsStructs).AllocatorInstance.Data;
      pFVar26 = pFVar25 + (longlong)iVar16 * 0x10;
      while( true ) {
        if ((param_2->ColumnsStructs).ArrayNum != iVar16) {
          *(undefined8 *)(puVar22 + -8) = 0x14a88c512;
          `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_107);
        }
        this = local_c0;
        if (pFVar25 == pFVar26) break;
        pvVar3 = *(void **)(pFVar25 + 8);
        pUVar4 = *(UScriptStruct **)pFVar25;
        *(undefined8 *)(puVar22 + -8) = 0x14a88c523;
        pFVar18 = UE::StructUtils::GetStructRef<FChooserColumnBase>(pUVar4,pvVar3);
        pcVar8 = *(code **)((longlong)*pFVar18 + 0x40);
        *(undefined8 *)(puVar22 + -8) = 0x14a88c539;
        (*pcVar8)(pFVar18,pFVar10,0xfffffffe);
        pFVar25 = pFVar25 + 0x10;
      }
      pcVar8 = *(code **)((longlong)*pFVar20 + 0x38);
      *(undefined8 *)(puVar22 + -8) = 0x14a88c572;
      pTVar21 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                ::
                TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                          (local_50,this);
      pFVar10 = local_e0;
      *(undefined8 *)(puVar22 + -8) = 0x14a88c57e;
      EVar15 = (*pcVar8)(pFVar20,pFVar10,pTVar21);
      if (bVar27) {
        *(undefined8 *)(puVar22 + -8) = 0x14a88c589;
        FCpuProfilerTrace::OutputEndEvent();
      }
      *(undefined8 *)(puVar22 + -8) = 0x14a88c591;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
      goto LAB_14a88c5a8;
    }
  }
  if (bVar27) {
    *(undefined8 *)(puVar22 + -8) = 0x14a88c59e;
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined8 *)(puVar22 + -8) = 0x14a88c5a6;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  EVar15 = Continue;
LAB_14a88c5a8:
  *(undefined8 *)(puVar22 + -8) = 0x14a88c5b7;
  return EVar15;
}

// IterateChooser @ 14a88c5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EIteratorStatus __cdecl
UChooserTable::IterateChooser
          (UChooserTable *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  EIteratorStatus EVar1;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [24];
  FChooserEvaluationContext local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a0.DebuggingInfo.CurrentChooser = (UObject *)0x0;
  local_a0.DebuggingInfo.bCurrentDebugTarget = false;
  local_a0.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
  local_a0.Params.ArrayNum = 0;
  local_a0.Params.ArrayMax = 4;
  local_a0.ObjectParams.ArrayNum = 0;
  local_a0.ObjectParams.ArrayMax = 4;
  pTVar2 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           ::
           TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                     (local_b8,param_2);
  EVar1 = IterateChooser(&local_a0,param_1,pTVar2);
  if (local_a0.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_a0.Params.AllocatorInstance.SecondaryData);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return EVar1;
}

// PostLoad @ 14a88cd20

void __thiscall UChooserTable::PostLoad(UChooserTable *this)

{
  UObject::PostLoad((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x00014a88cd3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(&this->_padding_,0);
  return;
}

// ResultAssetFilter @ 14a88ded0

bool __thiscall UChooserTable::ResultAssetFilter(UChooserTable *this,FAssetData *param_1)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  
  lVar1 = this->_padding_;
  pUVar3 = FAssetData::GetClass(param_1,No);
  if ((pUVar3 != (UClass *)0x0) && (lVar1 != 0)) {
    if (((int)pUVar3->_padding_ < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(pUVar3->_padding_ + (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return false;
    }
  }
  return true;
}

// Serialize @ 14a88ecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UChooserTable::Serialize(UChooserTable *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14a88ecc0

void __thiscall UChooserTable::Serialize(UChooserTable *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUChooserTable @ 14a88fe30

void __cdecl UChooserTable::StaticRegisterNativesUChooserTable(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UChooserTable_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execResultAssetFilter @ 14a8947a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UChooserTable::execResultAssetFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  FAssetData *this;
  undefined1 auStack_a8 [32];
  FAssetData local_88;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.ChunkArrayRegistryHandle.Index = -1;
  local_88.PackageName.ComparisonIndex.Value = 0;
  local_88.PackageName.Number = 0;
  local_88.PackagePath.ComparisonIndex.Value = 0;
  local_88.PackagePath.Number = 0;
  local_88.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetName.Number = 0;
  local_88.AssetClass.ComparisonIndex.Value = 0;
  local_88.AssetClass.Number = 0;
  local_88.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetClassPath.PackageName.Number = 0;
  local_88.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetClassPath.AssetName.Number = 0;
  local_88.PackageFlags = 0;
  local_88.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_88.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_88.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_88.ChunkIDs.ArrayNum = 0;
  local_88.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = &local_88;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    this = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[2].field_0x8;
  pUVar5 = FAssetData::GetClass(this,No);
  if ((pUVar5 != (UClass *)0x0) && (lVar2 != 0)) {
    if (((int)pUVar5->_padding_ < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(pUVar5->_padding_ + (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar4 = 0;
      goto LAB_14a8948a6;
    }
  }
  uVar4 = 1;
LAB_14a8948a6:
  *(undefined1 *)param_3 = uVar4;
  if (local_88.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_88.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_88.TagsAndValues);
  return;
}

