// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 13

// Construct<FInterchangeStepCurve> @ 14e66b210

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeStepCurve>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  return;
}

// ConstructForTests<FInterchangeStepCurve> @ 14e66b270

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeStepCurve>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  return;
}

// Destruct<FInterchangeStepCurve> @ 14e66b2d0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeStepCurve>(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x5c) != -1) {
    DestructItems<FString,int>
              (*(FString **)((longlong)param_1 + 0x50),*(int *)((longlong)param_1 + 0x58));
    if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x50));
    }
  }
  if ((*(int *)((longlong)param_1 + 0x4c) != -1) &&
     (*(void **)((longlong)param_1 + 0x40) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if ((*(int *)((longlong)param_1 + 0x3c) != -1) &&
     (*(void **)((longlong)param_1 + 0x30) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if ((*(int *)((longlong)param_1 + 0x2c) != -1) &&
     (*(void **)((longlong)param_1 + 0x20) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if ((*(int *)((longlong)param_1 + 0x1c) != -1) &&
     (*(void **)((longlong)param_1 + 0x10) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FInterchangeStepCurve> @ 14e66b2e0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeStepCurve>(void *param_1,void *param_2,int param_3)

{
  FInterchangeStepCurve *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FInterchangeStepCurve::operator=
                (this,(FInterchangeStepCurve *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeCurve> @ 14e66b330

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FInterchangeCurve> @ 14e66b340

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FInterchangeCurve> @ 14e66b350

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeCurve>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FInterchangeCurve> @ 14e66b370

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeCurve>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x1c);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeCurveKey> @ 14e66b450

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeCurveKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0x303;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FInterchangeCurveKey> @ 14e66b470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeCurveKey>(void *param_1)

{
  *(undefined2 *)param_1 = 0x303;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FInterchangeCurveKey> @ 14e66b490

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeCurveKey>(void *param_1)

{
  return;
}

// Copy<FInterchangeCurveKey> @ 14e66b4a0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeCurveKey>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// HashString @ 14e66f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Interchange::Private::HashString(FString *__return_storage_ptr__,FString *param_1)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  FGuid local_190;
  FArchiveState local_178;
  undefined8 local_e8;
  ForAnyElementType *local_e0;
  undefined8 local_d8;
  FSHA1 local_c8;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar1 = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x40,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
  local_198 = 0;
  local_178._padding_ = 0;
  local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_178._40_8_ = 0;
  local_178.ArSerializingDefaults = 0;
  local_178.ArPortFlags = 0;
  local_178.ArMaxSerializeSize = 0;
  local_178.ArUEVer.FileVersionUE4 = 0;
  local_178.ArUEVer.FileVersionUE5 = 0;
  local_178.ArLicenseeUEVer = 0;
  local_178.ArEngineVer.Major = 0;
  local_178.ArEngineVer.Minor = 0;
  local_178.ArEngineVer.Patch = 0;
  local_178.ArEngineVer._6_2_ = 0;
  local_178.ArEngineVer.Changelist = 0;
  local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_178.SerializedProperty = (FProperty *)0x0;
  local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_178.bCustomVersionsAreReset = false;
  local_178._129_7_ = 0;
  local_178.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_178);
  local_e8 = 0;
  local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_e0 = &local_1a8;
  uVar2 = (undefined7)((ulonglong)uVar1 >> 8);
  local_d8 = 0;
  FArchiveState::SetIsSaving(&local_178,true);
  (**(code **)(local_178._padding_ + 0x108))(&local_178,CONCAT71(uVar2,1));
  local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_178,param_1);
  FSHA1::FSHA1(&local_c8);
  FSHA1::Update(&local_c8,(uchar *)local_1a8.Data,local_1a0 & 0xffffffff);
  FSHA1::Final(&local_c8);
  FSHA1::GetHash(&local_c8,(uchar *)&local_38);
  local_190.A = local_38 ^ local_28;
  local_190.B = local_34;
  local_190.C = local_30;
  local_190.D = local_2c;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&local_190,__return_storage_ptr__,Base36Encoded);
  FSHA1::~FSHA1(&local_c8);
  FArchive::~FArchive((FArchive *)&local_178);
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return __return_storage_ptr__;
}

