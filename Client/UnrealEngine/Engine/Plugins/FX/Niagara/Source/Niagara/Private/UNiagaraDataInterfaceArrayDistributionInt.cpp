// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 24

// StaticClass @ 148e41c40

UClass * __cdecl UNiagaraDataInterfaceArrayDistributionInt::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayDistributionInt",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayDistributionInt,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceArrayDistributionInt>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayDistributionInt>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton;
}

// UNiagaraDataInterfaceArrayDistributionInt @ 148e54d20

UNiagaraDataInterfaceArrayDistributionInt * __thiscall
UNiagaraDataInterfaceArrayDistributionInt::UNiagaraDataInterfaceArrayDistributionInt
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayDistributionInt__6B_;
  (this->BuiltTableDataGuard).Mutex.Mutex.Ptr = (void *)0x0;
  (this->ArrayData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayData).ArrayNum = 0;
  (this->ArrayData).ArrayMax = 0;
  (this->BuiltTableData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuiltTableData).ArrayNum = 0;
  (this->BuiltTableData).ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceArrayDistributionInt @ 148e54d60

UNiagaraDataInterfaceArrayDistributionInt * __thiscall
UNiagaraDataInterfaceArrayDistributionInt::UNiagaraDataInterfaceArrayDistributionInt
          (UNiagaraDataInterfaceArrayDistributionInt *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  UNiagaraDataInterfaceArrayDistributionInt *pUVar6;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar5 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayDistributionInt__6B_;
  (this->BuiltTableDataGuard).Mutex.Mutex.Ptr = (void *)0x0;
  (this->ArrayData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayData).ArrayNum = 0;
  (this->ArrayData).ArrayMax = 0;
  (this->BuiltTableData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuiltTableData).ArrayNum = 0;
  (this->BuiltTableData).ArrayMax = 0;
  puVar4 = ::operator_new(0x38);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar4 + 0x19) = 0;
    *(undefined1 *)((longlong)puVar4 + 0x1b) = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = &___7FNDIProxy_NDIArrayDistributionIntPrivate__6B_;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar5 = puVar4;
  }
  puVar4 = (undefined8 *)this->_padding_;
  if ((puVar4 != puVar5) && (this->_padding_ = (longlong)puVar5, puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar1 = this->_padding_;
  if ((lVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UNiagaraDataInterfaceArrayDistributionInt *)(*pcVar2)();
    return pUVar6;
  }
  *(UNiagaraDataInterfaceArrayDistributionInt **)(lVar1 + 0x10) = this;
  return this;
}

// ~UNiagaraDataInterfaceArrayDistributionInt @ 148e567c0

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::~UNiagaraDataInterfaceArrayDistributionInt
          (UNiagaraDataInterfaceArrayDistributionInt *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceArrayDistributionInt__6B_;
  pFVar1 = (this->BuiltTableData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->BuiltTableDataGuard);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->BuiltTableDataGuard);
    UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 148e5c280

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::BuildShaderParameters
          (UNiagaraDataInterfaceArrayDistributionInt *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDIArrayDistributionIntPrivate::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x10;
  return;
}

// BuildTableData @ 148e5c640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::BuildTableData
          (UNiagaraDataInterfaceArrayDistributionInt *this)

{
  FPlatformRWLock *SRWLock;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res8;
  longlong local_res10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FWeightedRandomSampler local_98;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  
  iVar10 = (this->ArrayData).ArrayNum;
  local_a8 = (this->ArrayData).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_a0 = iVar10;
  FWeightedRandomSampler::FWeightedRandomSampler(&local_98);
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  local_98._padding_ =
       (longlong)
       &`UNiagaraDataInterfaceArrayDistributionInt::BuildTableData'::`2'::FArrayWeightedSampler::
        _vftable_;
  local_68 = local_a8;
  FWeightedRandomSampler::Initialize(&local_98);
  uVar11 = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar10 = 1;
  if (1 < (this->ArrayData).ArrayNum) {
    iVar10 = (this->ArrayData).ArrayNum;
  }
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b8,iVar10 << 4,Default);
  iVar10 = (this->ArrayData).ArrayNum;
  if (iVar10 < 1) {
    if ((local_b8.ArrayNum < 0x10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TableData.Num() >= Offset + EntrySize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                           ,0x27,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)local_b8.AllocatorInstance.Data = 0;
    *(undefined8 *)(local_b8.AllocatorInstance.Data + 8) = 0;
  }
  else {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_b8,iVar10 << 4,Default);
    if (0 < (this->ArrayData).ArrayNum) {
      lVar14 = 0;
      lVar15 = 0;
      local_res10 = 0;
      local_res8 = 0x10;
      do {
        iVar10 = local_98.Prob.ArrayNum;
        FVar12 = local_98.Prob.AllocatorInstance;
        if (((ulonglong)local_98.Prob.AllocatorInstance & 1) != 0) {
          FVar12 = (ForAnyElementType)
                   ((longlong)&local_98.Prob.AllocatorInstance.field_0x0 +
                   ((longlong)local_98.Prob.AllocatorInstance >> 0x18));
        }
        if ((local_98.Prob.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = ~uVar11 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = local_98.Alias.ArrayNum;
        uVar1 = *(undefined4 *)((longlong)FVar12 + lVar15);
        FVar12 = local_98.Alias.AllocatorInstance;
        if (((ulonglong)local_98.Alias.AllocatorInstance & 1) != 0) {
          FVar12 = (ForAnyElementType)
                   ((longlong)&local_98.Alias.AllocatorInstance.field_0x0 +
                   ((longlong)local_98.Alias.AllocatorInstance >> 0x18));
        }
        if ((local_98.Alias.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined4 *)((longlong)FVar12 + lVar15);
        uVar9 = 0;
        if ((int)uVar11 < (this->ArrayData).ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(undefined4 *)((this->ArrayData).AllocatorInstance.Data + local_res10);
        uVar9 = 0;
        if ((int)uVar11 < (this->ArrayData).ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = *(undefined4 *)((this->ArrayData).AllocatorInstance.Data + local_res10 + 4);
        if ((local_b8.ArrayNum < local_res8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TableData.Num() >= Offset + EntrySize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                               ,0x27,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res10 = local_res10 + 8;
        local_res8 = local_res8 + 0x10;
        uVar11 = uVar11 + 1;
        lVar15 = lVar15 + 4;
        *(undefined4 *)(local_b8.AllocatorInstance.Data + lVar14) = uVar1;
        *(undefined4 *)(local_b8.AllocatorInstance.Data + lVar14 + 0xc) = uVar2;
        *(undefined4 *)(local_b8.AllocatorInstance.Data + lVar14 + 4) = uVar3;
        *(undefined4 *)(local_b8.AllocatorInstance.Data + lVar14 + 8) = uVar4;
        lVar14 = lVar14 + 0x10;
      } while ((int)uVar11 < (this->ArrayData).ArrayNum);
    }
  }
  SRWLock = &this->BuiltTableDataGuard;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar6 = (this->BuiltTableData).AllocatorInstance.Data;
  uVar7._0_4_ = (this->BuiltTableData).ArrayNum;
  uVar7._4_4_ = (this->BuiltTableData).ArrayMax;
  (this->BuiltTableData).AllocatorInstance.Data = local_b8.AllocatorInstance.Data;
  (this->BuiltTableData).ArrayNum = local_b8.ArrayNum;
  (this->BuiltTableData).ArrayMax = local_b8.ArrayMax;
  lVar14 = this->_padding_;
  local_b8.AllocatorInstance.Data = pFVar6;
  local_b8._8_8_ = uVar7;
  if ((lVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)(lVar14 + 0x18) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  FWeightedRandomSampler::~FWeightedRandomSampler(&local_98);
  return;
}

// CanExecuteOnTarget @ 148e5cf90

bool __thiscall
UNiagaraDataInterfaceArrayDistributionInt::CanExecuteOnTarget
          (UNiagaraDataInterfaceArrayDistributionInt *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148e5ef80

bool __thiscall
UNiagaraDataInterfaceArrayDistributionInt::CopyToInternal
          (UNiagaraDataInterfaceArrayDistributionInt *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *)
                 &param_1[1]._padding_,&this->ArrayData);
      BuildTableData((UNiagaraDataInterfaceArrayDistributionInt *)param_1);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// Equals @ 148e64000

bool __thiscall
UNiagaraDataInterfaceArrayDistributionInt::Equals
          (UNiagaraDataInterfaceArrayDistributionInt *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar4 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt_const_>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
    if ((bVar2) && (iVar1 = (int)param_1[1]._padding_, iVar1 == (this->ArrayData).ArrayNum)) {
      bVar2 = CompareItems<FNDIDistributionIntArrayEntry,int>
                        ((FNDIDistributionIntArrayEntry *)param_1[1]._padding_,
                         (FNDIDistributionIntArrayEntry *)(this->ArrayData).AllocatorInstance.Data,
                         iVar1);
      if (bVar2) {
        return true;
      }
    }
    return false;
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceArrayDistributionInt_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetBuiltTableLength @ 148e68ac0

int __thiscall
UNiagaraDataInterfaceArrayDistributionInt::GetBuiltTableLength
          (UNiagaraDataInterfaceArrayDistributionInt *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  SRWLock = &this->BuiltTableDataGuard;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar3 = (this->BuiltTableData).ArrayNum;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return (int)((iVar3 >> 0x1f & 0xfU) + iVar3) >> 4;
}

// GetPrivateStaticClass @ 148e6e120

UClass * __cdecl UNiagaraDataInterfaceArrayDistributionInt::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceArrayDistributionInt",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceArrayDistributionInt,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceArrayDistributionInt>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceArrayDistributionInt>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayDistributionInt.InnerSingleton;
}

// GetVMExternalFunction @ 148e70040

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::GetVMExternalFunction
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UNiagaraDataInterfaceArrayDistributionInt *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == FNiagaraDataInterfaceArrayImplInternal::Function_LengthName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataInterfaceArrayDistributionInt____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMLength;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
  }
  else if (FVar1 == FNiagaraDataInterfaceArrayImplInternal::Function_IsValidIndexName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataInterfaceArrayDistributionInt____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMIsLastIndex;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      bVar6 = local_40.bDestroyed == false;
      local_50.DelegateSize = 0;
      goto LAB_148e7046e;
    }
  }
  else {
    if (FVar1 != FNiagaraDataInterfaceArrayImplInternal::Function_LastIndexName) {
      if (FVar1 == FNiagaraDataInterfaceArrayImplInternal::Function_GetName) {
        pcVar5 = VMGet;
LAB_148e703bd:
        pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceArrayDistributionInt>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)local_58,this,(pmf_cb2f942e)pcVar5);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
      }
      else {
        if (FVar1 == NDIArrayDistributionIntPrivate::NAME_GetProbabilityAlias) {
          pcVar5 = VMGetProbAlias;
          goto LAB_148e703bd;
        }
        if (FVar1 != NDIArrayDistributionIntPrivate::NAME_GetRandomValue) {
          return;
        }
        pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceArrayDistributionInt>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)local_58,this,(pmf_cb2f942e)0x148e84940);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
      }
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      bVar6 = local_40.bDestroyed == false;
      goto LAB_148e7046e;
    }
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataInterfaceArrayDistributionInt____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = VMGetLastIndex;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      bVar6 = local_40.bDestroyed == false;
      local_50.DelegateSize = 0;
      goto LAB_148e7046e;
    }
  }
  bVar6 = local_40.bDestroyed == false;
LAB_148e7046e:
  if (bVar6) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// PostInitProperties @ 148e76950

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::PostInitProperties
          (UNiagaraDataInterfaceArrayDistributionInt *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostLoad @ 148e76ce0

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::PostLoad(UNiagaraDataInterfaceArrayDistributionInt *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraDataInterfaceArrayDistributionInt **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// SetNiagaraArrayDistributionInt @ 148e7c7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayDistributionInt::SetNiagaraArrayDistributionInt
          (UNiagaraComponent *param_1,FName param_2,
          TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *param_3)

{
  UClass *pUVar1;
  UNiagaraDataInterfaceArrayDistributionInt *this;
  
  pUVar1 = StaticClass();
  this = (UNiagaraDataInterfaceArrayDistributionInt *)
         UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0) {
    TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_>::operator=
              (&this->ArrayData,param_3);
    BuildTableData(this);
  }
  return;
}

// SetShaderParameters @ 148e7d7f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::SetShaderParameters
          (UNiagaraDataInterfaceArrayDistributionInt *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNDIProxy *this_00;
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uint uVar5;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FNDIProxy *)param_1->DataInterfaceProxy;
  NDIArrayDistributionIntPrivate::FNDIProxy::UpdateGpuDataIfNeeded(this_00,param_1->GraphBuilder);
  uVar5 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NDIArrayDistributionIntPrivate::FShaderParameters>::
           GetStructMetadata();
  puVar1 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar4->Size + uVar5;
  *(int *)(puVar1 + uVar5) = this_00->BuiltTableDataLength;
  *(FRHIShaderResourceView **)(puVar1 + (ulonglong)uVar5 + 8) =
       (this_00->BuiltTableData).SRV.Reference;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceArrayDistributionInt @ 148e815b0

void __cdecl
UNiagaraDataInterfaceArrayDistributionInt::
StaticRegisterNativesUNiagaraDataInterfaceArrayDistributionInt(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceArrayDistributionInt_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VMGet @ 148e83ef0

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::VMGet
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVectorVMExternalFunctionContext *param_1
          )

{
  FPlatformRWLock *SRWLock;
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar9;
  float *local_58;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  float *local_38;
  float *local_30;
  int local_28 [4];
  float fVar8;
  
  local_28[0] = 0;
  local_38 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  local_50[0] = 0;
  local_38 = local_38 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_30 = local_38;
  local_58 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  local_40[0] = 0;
  local_58 = local_58 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  local_48 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  SRWLock = &this->BuiltTableDataGuard;
  local_48 = local_48 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar5 = GetBuiltTableLength(this);
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    do {
      pfVar1 = local_38 + local_28[0];
      fVar6 = (float)(iVar5 + -1);
      if ((int)*local_38 < iVar5 + -1) {
        fVar6 = *local_38;
      }
      fVar8 = 0.0;
      if (0 < (int)fVar6) {
        fVar8 = fVar6;
      }
      iVar7 = (int)fVar8 * 0x10;
      local_38 = pfVar1;
      if (((this->BuiltTableData).ArrayNum < iVar7 + 0x10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TableData.Num() >= Offset + EntrySize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                             ,0x33,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = iVar9 + 1;
      pFVar2 = (this->BuiltTableData).AllocatorInstance.Data;
      fVar6 = *(float *)(pFVar2 + (longlong)iVar7 + 0xc);
      *local_58 = *(float *)(pFVar2 + (longlong)iVar7 + 8);
      *local_48 = fVar6;
      local_48 = local_48 + local_40[0];
      local_58 = local_58 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
                    /* WARNING: Could not recover jumptable at 0x000148e840af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// VMGetLastIndex @ 148e840c0

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::VMGetLastIndex
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVectorVMExternalFunctionContext *param_1
          )

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_10 [2];
  
  iVar3 = 0;
  local_10[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar4 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  iVar1 = GetBuiltTableLength(this);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar4;
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)(iVar1 + -1);
      pfVar2 = pfVar2 + local_10[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// VMGetProbAlias @ 148e84770

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::VMGetProbAlias
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVectorVMExternalFunctionContext *param_1
          )

{
  FPlatformRWLock *SRWLock;
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar9;
  float *local_58;
  int local_50 [2];
  float *local_48;
  int local_40 [2];
  float *local_38;
  float *local_30;
  int local_28 [4];
  float fVar8;
  
  local_28[0] = 0;
  local_38 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  local_50[0] = 0;
  local_38 = local_38 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_30 = local_38;
  local_58 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  local_40[0] = 0;
  local_58 = local_58 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  local_48 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  SRWLock = &this->BuiltTableDataGuard;
  local_48 = local_48 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar5 = GetBuiltTableLength(this);
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    do {
      pfVar1 = local_38 + local_28[0];
      fVar6 = (float)(iVar5 + -1);
      if ((int)*local_38 < iVar5 + -1) {
        fVar6 = *local_38;
      }
      fVar8 = 0.0;
      if (0 < (int)fVar6) {
        fVar8 = fVar6;
      }
      iVar7 = (int)fVar8 * 0x10;
      local_38 = pfVar1;
      if (((this->BuiltTableData).ArrayNum < iVar7 + 0x10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TableData.Num() >= Offset + EntrySize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                             ,0x3d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = iVar9 + 1;
      pFVar2 = (this->BuiltTableData).AllocatorInstance.Data;
      fVar6 = *(float *)(pFVar2 + (longlong)iVar7 + 4);
      *local_58 = *(float *)(pFVar2 + iVar7);
      *local_48 = fVar6;
      local_48 = local_48 + local_40[0];
      local_58 = local_58 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
                    /* WARNING: Could not recover jumptable at 0x000148e8492a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// VMGetRandomValue @ 148e84940

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::VMGetRandomValue
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVectorVMExternalFunctionContext *param_1
          )

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  FVectorVMExternalFunctionContext *pFVar8;
  FVectorVMExternalFunctionContext *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  longlong local_res8;
  float *local_108;
  int local_100 [2];
  FVectorVMExternalFunctionContext *local_f8;
  float *local_f0;
  float *local_e8;
  int local_e0 [2];
  float *local_d8;
  float *local_d0;
  int local_c8 [2];
  float *local_c0;
  float *local_b8;
  int local_b0 [2];
  FVectorVMExternalFunctionContext *local_a8;
  undefined8 local_a0;
  float local_98;
  
  iVar19 = 0;
  local_e0[0] = 0;
  local_c8[0] = 0;
  local_b0[0] = 0;
  local_f8 = param_1;
  local_a8 = param_1;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  pFVar8 = local_a8;
  local_f0 = local_f0 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  local_e8 = local_f0;
  local_d8 = FVectorVMExternalFunctionContext::GetNextRegister(local_a8,local_c8);
  pFVar9 = local_a8;
  local_d8 = local_d8 + local_c8[0] * pFVar8->PerInstanceFnInstanceIdx;
  local_d0 = local_d8;
  local_c0 = FVectorVMExternalFunctionContext::GetNextRegister(local_a8,local_b0);
  local_a0 = 0;
  local_98 = 0.0;
  local_100[0] = 0;
  local_c0 = local_c0 + local_b0[0] * pFVar9->PerInstanceFnInstanceIdx;
  local_b8 = local_c0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  SRWLock = &this->BuiltTableDataGuard;
  iVar15 = local_100[0] * param_1->PerInstanceFnInstanceIdx;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0xa2,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar11 = GetBuiltTableLength(this);
  pFVar8 = local_f8;
  fVar7 = __real_33800000;
  fVar6 = __real_3f800000;
  if (0 < param_1->NumInstances) {
    local_res8 = 0;
    local_108 = pfVar13 + iVar15;
    do {
      fVar21 = *local_f0;
      local_f0 = local_f0 + local_e0[0];
      fVar2 = *local_d8;
      local_d8 = local_d8 + local_c8[0];
      local_a0 = CONCAT44(fVar2,fVar21);
      fVar3 = *local_c0;
      local_c0 = local_c0 + local_b0[0];
      local_98 = fVar3;
      if (fVar3 == -NAN) {
        uVar17 = pFVar8->RandStream->Seed * 0xbb38435 + 0x3619636b;
        pFVar8->RandStream->Seed = uVar17;
        uVar12 = pFVar8->RandStream->Seed * 0xbb38435 + 0x3619636b;
        pFVar8->RandStream->Seed = uVar12;
        fVar20 = ((float)(uVar17 >> 9 | 0x3f800000) - fVar6) * (float)iVar11;
        fVar21 = (float)(uVar12 >> 9 | 0x3f800000) - fVar6;
      }
      else {
        if (*pFVar8->RandCounters == (int *)0x0) {
          piVar14 = FMemory::MallocZeroed((longlong)pFVar8->NumInstances << 2,0);
          *pFVar8->RandCounters = piVar14;
        }
        iVar15 = (int)fVar2 * 0x19660d + 0x3c6ef35f;
        uVar12 = *(uint *)((longlong)*pFVar8->RandCounters + local_res8);
        *(uint *)((longlong)*pFVar8->RandCounters + local_res8) = uVar12 + 1;
        iVar16 = ((int)fVar3 << 0x10 | uVar12) * 0x19660d + 0x3c6ef35f;
        iVar18 = (int)fVar21 * 0x19660d + 0x3c6ef35f + iVar16 * iVar15;
        iVar15 = iVar16 * iVar18 + iVar15;
        fVar20 = (float)((iVar15 * iVar18 + iVar16) * iVar15 + iVar18 >> 8 & 0xffffff) *
                 (float)iVar11 * fVar7;
        if (*pFVar8->RandCounters == (int *)0x0) {
          piVar14 = FMemory::MallocZeroed((longlong)pFVar8->NumInstances << 2,0);
          *pFVar8->RandCounters = piVar14;
        }
        uVar12 = (*pFVar8->RandCounters)[iVar19];
        (*pFVar8->RandCounters)[iVar19] = uVar12 + 1;
        iVar16 = ((int)fVar3 << 0x10 | uVar12) * 0x19660d + 0x3c6ef35f;
        iVar15 = (int)fVar2 * 0x19660d + 0x3c6ef35f;
        iVar18 = (int)fVar21 * 0x19660d + 0x3c6ef35f + iVar16 * iVar15;
        iVar15 = iVar16 * iVar18 + iVar15;
        fVar21 = (float)((iVar15 * iVar18 + iVar16) * iVar15 + iVar18 >> 8 & 0xffffff) * fVar7;
      }
      iVar15 = (int)fVar20;
      iVar16 = iVar15 * 0x10;
      if (((this->BuiltTableData).ArrayNum < iVar16 + 0x10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TableData.Num() >= Offset + EntrySize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                              ,0x47,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->BuiltTableData).AllocatorInstance.Data;
      pFVar1 = pFVar4 + iVar16;
      if (*(float *)pFVar1 <= fVar21 && fVar21 != *(float *)pFVar1) {
        iVar15 = *(int *)(pFVar4 + (longlong)iVar16 + 4);
      }
      if (((this->BuiltTableData).ArrayNum < (int)(float)iVar15 * 0x10 + 0x10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TableData.Num() >= Offset + EntrySize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceArrayDistributionInt.cpp"
                              ,0x33,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar19 = iVar19 + 1;
      local_res8 = local_res8 + 4;
      *local_108 = *(float *)((this->BuiltTableData).AllocatorInstance.Data +
                             (longlong)((int)(float)iVar15 * 0x10) + 8);
      local_108 = local_108 + local_100[0];
    } while (iVar19 < param_1->NumInstances);
  }
                    /* WARNING: Could not recover jumptable at 0x000148e84dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// VMIsLastIndex @ 148e85110

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::VMIsLastIndex
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVectorVMExternalFunctionContext *param_1
          )

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_30 [6];
  int local_18 [4];
  
  local_18[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  local_30[0] = 0;
  pfVar3 = pfVar3 + local_18[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  iVar1 = GetBuiltTableLength(this);
  iVar6 = 0;
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + iVar5;
    do {
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + local_18[0];
      if (((int)fVar2 < 0) || (iVar1 <= (int)fVar2)) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = -NAN;
      }
      iVar6 = iVar6 + 1;
      *pfVar4 = fVar2;
      pfVar4 = pfVar4 + local_30[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMLength @ 148e851f0

void __thiscall
UNiagaraDataInterfaceArrayDistributionInt::VMLength
          (UNiagaraDataInterfaceArrayDistributionInt *this,FVectorVMExternalFunctionContext *param_1
          )

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_10 [2];
  
  iVar3 = 0;
  local_10[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  iVar4 = local_10[0] * param_1->PerInstanceFnInstanceIdx;
  fVar1 = (float)GetBuiltTableLength(this);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar4;
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = fVar1;
      pfVar2 = pfVar2 + local_10[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// execSetNiagaraArrayDistributionInt @ 148e867e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceArrayDistributionInt::execSetNiagaraArrayDistributionInt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UNiagaraComponent *pUVar3;
  UClass *pUVar4;
  UNiagaraDataInterfaceArrayDistributionInt *this;
  TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_res10;
  UNiagaraComponent *local_res20;
  TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> local_18;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  pUVar3 = local_res20;
  FVar2 = local_res10;
  pTVar5 = &local_18;
  if ((TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = StaticClass();
  this = (UNiagaraDataInterfaceArrayDistributionInt *)
         UNiagaraFunctionLibrary::GetDataInterface(pUVar4,pUVar3,FVar2);
  if (this != (UNiagaraDataInterfaceArrayDistributionInt *)0x0) {
    TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_>::operator=
              (&this->ArrayData,pTVar5);
    BuildTableData(this);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

