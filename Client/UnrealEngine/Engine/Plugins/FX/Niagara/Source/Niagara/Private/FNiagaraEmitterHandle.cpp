// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 17

// StaticStruct @ 14925e060

UScriptStruct * __cdecl FNiagaraEmitterHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterHandle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraEmitterHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterHandle,(UObject *)pUVar1,
                         L"NiagaraEmitterHandle");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraEmitterHandle.OuterSingleton;
}

// FNiagaraEmitterHandle @ 149275c60

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraEmitterHandle * __thiscall
FNiagaraEmitterHandle::FNiagaraEmitterHandle(FNiagaraEmitterHandle *this)

{
  this->bIsEnabled = true;
  this->EmitterMode = Standard;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  (this->IdName).ComparisonIndex = 0;
  (this->IdName).Number = 0;
  (this->VersionedInstance).Emitter.field0_0x0.DebugPtr = (UNiagaraEmitter *)0x0;
  (this->VersionedInstance).Version.A = 0;
  (this->VersionedInstance).Version.B = 0;
  (this->VersionedInstance).Version.C = 0;
  (this->VersionedInstance).Version.D = 0;
  (this->StatelessEmitter).field0_0x0.DebugPtr = (UNiagaraStatelessEmitter *)0x0;
  return this;
}

// ForEachEnabledRendererWithIndex @ 14929c400

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraEmitterHandle::ForEachEnabledRendererWithIndex
          (FNiagaraEmitterHandle *this,
          TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> *param_1)

{
  UNiagaraStatelessEmitter *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  FVersionedNiagaraEmitterData *pFVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint local_88 [2];
  longlong *local_80;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> local_48;
  
  if (this->EmitterMode == Standard) {
    pFVar5 = FVersionedNiagaraEmitter::GetEmitterData(&this->VersionedInstance);
    if (pFVar5 != (FVersionedNiagaraEmitterData *)0x0) {
      local_78 = *(code **)param_1;
      local_50 = (longlong *)0x0;
      if (local_78 != (code *)0x0) {
        puVar8 = (undefined8 *)&param_1->field_0x10;
        if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)&param_1->field_0x28;
        }
        (**(code **)*puVar8)(puVar8,local_68);
      }
      uVar9 = 0;
      if (0 < (pFVar5->RendererProperties).ArrayNum) {
        lVar10 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar9 < (pFVar5->RendererProperties).ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar7 = *(longlong **)((pFVar5->RendererProperties).AllocatorInstance.Data + lVar10);
          if (((plVar7 != (longlong *)0x0) &&
              (cVar3 = (**(code **)(*plVar7 + 0x318))(plVar7), cVar3 != '\0')) &&
             (cVar3 = (**(code **)(*plVar7 + 0x2e8))(plVar7,pFVar5->SimTarget), cVar3 != '\0')) {
            local_88[0] = uVar9;
            local_80 = plVar7;
            UE::Core::Private::Function::CheckCallable(local_78);
            pcVar1 = local_78;
            plVar7 = local_68;
            if (local_50 != (longlong *)0x0) {
              plVar7 = local_50;
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar1)(uVar6,&local_80,local_88);
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 8;
        } while ((int)uVar9 < (pFVar5->RendererProperties).ArrayNum);
      }
      if (local_78 != (code *)0x0) {
        plVar7 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  else {
    this_00 = (this->StatelessEmitter).field0_0x0.DebugPtr;
    if (this_00 != (UNiagaraStatelessEmitter *)0x0) {
      local_48._0_8_ = *(undefined8 *)param_1;
      local_48._40_8_ = 0;
      if (local_48._0_8_ != 0) {
        puVar8 = (undefined8 *)&param_1->field_0x10;
        if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)&param_1->field_0x28;
        }
        (**(code **)*puVar8)(puVar8,&local_48.field_0x10);
      }
      UNiagaraStatelessEmitter::
      ForEachEnabledRendererWithIndex<TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)>_>
                (this_00,&local_48);
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar7 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// GetEmitterBase @ 1492a1d50

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

UNiagaraEmitterBase * __thiscall FNiagaraEmitterHandle::GetEmitterBase(FNiagaraEmitterHandle *this)

{
  if (this->EmitterMode == Stateless) {
    return (UNiagaraEmitterBase *)(this->StatelessEmitter).field0_0x0.DebugPtr;
  }
  return (UNiagaraEmitterBase *)(this->VersionedInstance).Emitter.field0_0x0.DebugPtr;
}

// GetEmitterData @ 1492a1d70

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
FNiagaraEmitterHandle::GetEmitterData(FNiagaraEmitterHandle *this)

{
  FVersionedNiagaraEmitterData *pFVar1;
  
  if (this->EmitterMode == Standard) {
    pFVar1 = FVersionedNiagaraEmitter::GetEmitterData(&this->VersionedInstance);
    return pFVar1;
  }
  return (FVersionedNiagaraEmitterData *)0x0;
}

// GetId @ 1492a4710

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FGuid * __thiscall
FNiagaraEmitterHandle::GetId(FNiagaraEmitterHandle *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->Id).B;
  uVar2 = (this->Id).C;
  uVar3 = (this->Id).D;
  __return_storage_ptr__->A = (this->Id).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetIdName @ 1492a4730

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FName __thiscall FNiagaraEmitterHandle::GetIdName(FNiagaraEmitterHandle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->IdName;
  return in_RDX;
}

// GetInstance @ 1492a4750

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FVersionedNiagaraEmitter * __thiscall
FNiagaraEmitterHandle::GetInstance
          (FNiagaraEmitterHandle *this,FVersionedNiagaraEmitter *__return_storage_ptr__)

{
  UNiagaraEmitter *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pUVar1 = (this->VersionedInstance).Emitter.field0_0x0.DebugPtr;
  (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UNiagaraEmitter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  uVar2 = (this->VersionedInstance).Version.B;
  uVar3 = (this->VersionedInstance).Version.C;
  uVar4 = (this->VersionedInstance).Version.D;
  (__return_storage_ptr__->Version).A = (this->VersionedInstance).Version.A;
  (__return_storage_ptr__->Version).B = uVar2;
  (__return_storage_ptr__->Version).C = uVar3;
  (__return_storage_ptr__->Version).D = uVar4;
  return __return_storage_ptr__;
}

// GetIsEnabled @ 1492a47a0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall FNiagaraEmitterHandle::GetIsEnabled(FNiagaraEmitterHandle *this)

{
  return this->bIsEnabled;
}

// GetName @ 1492a52e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FName __thiscall FNiagaraEmitterHandle::GetName(FNiagaraEmitterHandle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetUniqueInstanceName @ 1492a83d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FString * __thiscall
FNiagaraEmitterHandle::GetUniqueInstanceName
          (FNiagaraEmitterHandle *this,FString *__return_storage_ptr__)

{
  UNiagaraStatelessEmitter *pUVar1;
  
  pUVar1 = (UNiagaraStatelessEmitter *)(this->VersionedInstance).Emitter.field0_0x0.DebugPtr;
  if ((pUVar1 == (UNiagaraStatelessEmitter *)0x0) &&
     (pUVar1 = (this->StatelessEmitter).field0_0x0.DebugPtr,
     pUVar1 == (UNiagaraStatelessEmitter *)0x0)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)&pUVar1->_padding_);
  return __return_storage_ptr__;
}

// IsAllowedByScalability @ 1492ad3b0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FNiagaraEmitterHandle::IsAllowedByScalability(FNiagaraEmitterHandle *this)

{
  UNiagaraStatelessEmitter *this_00;
  bool bVar1;
  FVersionedNiagaraEmitterData *pFVar2;
  
  if (this->EmitterMode == Standard) {
    pFVar2 = FVersionedNiagaraEmitter::GetEmitterData(&this->VersionedInstance);
    if (pFVar2 != (FVersionedNiagaraEmitterData *)0x0) {
      bVar1 = FNiagaraPlatformSet::IsActive(&pFVar2->Platforms);
      return bVar1;
    }
  }
  else {
    this_00 = (this->StatelessEmitter).field0_0x0.DebugPtr;
    if (this_00 != (UNiagaraStatelessEmitter *)0x0) {
      bVar1 = UNiagaraStatelessEmitter::IsAllowedByScalability(this_00);
      return bVar1;
    }
  }
  return false;
}

// IsValid @ 1492adb80

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall FNiagaraEmitterHandle::IsValid(FNiagaraEmitterHandle *this)

{
  return (((this->Id).D != 0 || (this->Id).C != 0) || (this->Id).B != 0) || (this->Id).A != 0;
}

// SetInstance @ 1492b5640

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraEmitterHandle::SetInstance(FNiagaraEmitterHandle *this,FVersionedNiagaraEmitter *param_1)

{
  UNiagaraEmitter *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Emitter).field0_0x0.DebugPtr, pUVar1 != (UNiagaraEmitter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->VersionedInstance).Emitter.field0_0x0 = (param_1->Emitter).field0_0x0;
  uVar2 = (param_1->Version).B;
  uVar3 = (param_1->Version).C;
  uVar4 = (param_1->Version).D;
  (this->VersionedInstance).Version.A = (param_1->Version).A;
  (this->VersionedInstance).Version.B = uVar2;
  (this->VersionedInstance).Version.C = uVar3;
  (this->VersionedInstance).Version.D = uVar4;
  return;
}

// SetInstanceVersion @ 1492b5690

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraEmitterHandle::SetInstanceVersion(FNiagaraEmitterHandle *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->VersionedInstance).Version.A = param_1->A;
  (this->VersionedInstance).Version.B = uVar1;
  (this->VersionedInstance).Version.C = uVar2;
  (this->VersionedInstance).Version.D = uVar3;
  return;
}

// SetIsEnabled @ 1492b56a0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraEmitterHandle::SetIsEnabled
          (FNiagaraEmitterHandle *this,bool param_1,UNiagaraSystem *param_2,bool param_3)

{
  if (this->bIsEnabled != param_1) {
    this->bIsEnabled = param_1;
    return true;
  }
  return false;
}

// SetName @ 1492b56c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraEmitterHandle::SetName(FNiagaraEmitterHandle *this,FName param_1,UNiagaraSystem *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UNiagaraStatelessEmitter *this_00;
  UNiagaraEmitter *this_01;
  FString *pFVar7;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FName local_res10 [2];
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [8];
  undefined4 uStack_cc;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d4._0_4_ = 0;
  local_res10[0] = param_1;
  pFVar7 = ::FName::ToString(local_res10,&local_c8);
  pFVar7 = FNiagaraUtilities::SanitizeNameForObjectsAndPackages(&local_b8,pFVar7);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)(local_d4 + 4),pwVar9);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_d4._4_4_ != (this->Name).ComparisonIndex.Value) {
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    pTVar8 = UNiagaraSystem::GetEmitterHandles(param_2);
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar11 = pFVar10 + 8;
    pFVar1 = pFVar10 + (longlong)iVar2 * 0x48;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (pFVar10 == pFVar1) break;
      uVar3 = (this->Id).A;
      uVar5 = (this->Id).B;
      uVar4 = (this->Id).C;
      uVar6 = (this->Id).D;
      if ((((int)((ulonglong)*(undefined8 *)pFVar11 >> 0x20) != uVar5 ||
           uVar6 != (int)((ulonglong)*(undefined8 *)(pFVar11 + 8) >> 0x20)) ||
          uVar4 != (int)*(undefined8 *)(pFVar11 + 8)) || uVar3 != (int)*(undefined8 *)pFVar11) {
                    /* WARNING: Load size is inaccurate */
        local_b8.Data.AllocatorInstance.Data = *pFVar10;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (&local_98,(FName *)local_d4,(bool *)&local_b8);
      }
      pFVar10 = pFVar10 + 0x48;
      pFVar11 = pFVar11 + 0x48;
    }
    FNiagaraUtilities::GetUniqueName
              ((FName)&local_a8,
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               CONCAT44(uStack_cc,local_d4._4_4_));
    this_00 = (this->StatelessEmitter).field0_0x0.DebugPtr;
    this->Name = local_a8;
    if (this_00 != (UNiagaraStatelessEmitter *)0x0) {
      pFVar7 = ::FName::ToString(&this->Name,&local_c8);
      UNiagaraEmitterBase::SetUniqueEmitterName((UNiagaraEmitterBase *)this_00,pFVar7);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    this_01 = (this->VersionedInstance).Emitter.field0_0x0.DebugPtr;
    if (this_01 != (UNiagaraEmitter *)0x0) {
      pFVar7 = ::FName::ToString(&this->Name,&local_c8);
      UNiagaraEmitterBase::SetUniqueEmitterName((UNiagaraEmitterBase *)this_01,pFVar7);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

