// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 49

// Construct<FPropertyBindingIndex16> @ 14d377f80

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingIndex16>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FPropertyBindingIndex16> @ 14d377f90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyBindingIndex16>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// Destruct<FPropertyBindingIndex16> @ 14d377fa0

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingIndex16>(void *param_1)

{
  return;
}

// Copy<FPropertyBindingIndex16> @ 14d377fb0

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingIndex16>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FPropertyBindingIndex16> @ 14d377fe0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPropertyBindingIndex16>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  undefined2 uVar1;
  FName FVar2;
  FArchive *this;
  undefined2 *puVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  ushort local_res8 [4];
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar2 != FVar5) {
    return false;
  }
  local_res8[0] = 0;
  this = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar3 = (undefined2 *)**(undefined8 **)&this->field_0x8;
  if (puVar3 + 1 <= (undefined2 *)(*(undefined8 **)&this->field_0x8)[1]) {
    uVar1 = *puVar3;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 2;
    *(undefined2 *)param_3 = uVar1;
    return true;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,local_res8,2);
    *(ushort *)param_3 = local_res8[0];
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this,local_res8);
  *(ushort *)param_3 = local_res8[0];
  return true;
}

// GetStructTypeHash<FPropertyBindingIndex16> @ 14d3780d0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPropertyBindingIndex16>(void *param_1)

{
  return (uint)*(ushort *)param_1;
}

// Construct<FPropertyBindingCopyInfoBatch> @ 14d378570

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingCopyInfoBatch>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FPropertyBindingCopyInfoBatch> @ 14d3785a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPropertyBindingCopyInfoBatch>(void *param_1)

{
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  return;
}

// Destruct<FPropertyBindingCopyInfoBatch> @ 14d3785d0

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingCopyInfoBatch>(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    if ((*(longlong *)param_1 != 0) && ((*(uint *)(*(longlong *)param_1 + 8) & 0x40018000) == 0)) {
      (**(code **)(**(longlong **)param_1 + 0x300))
                (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),1);
    }
    FMemory::Free(pvVar1);
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
    return;
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// Copy<FPropertyBindingCopyInfoBatch> @ 14d3785e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingCopyInfoBatch>
          (void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  FInstancedStruct *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FInstancedStruct *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pFVar1) {
        FInstancedStruct::InitializeAs
                  (this,(pFVar1->ScriptStruct).field0_0x0.DebugPtr,pFVar1->StructMemory);
      }
      *(undefined2 *)&this[1].ScriptStruct.field0_0x0 =
           *(undefined2 *)&pFVar1[1].ScriptStruct.field0_0x0;
      *(undefined2 *)((longlong)&this[1].ScriptStruct.field0_0x0 + 2) =
           *(undefined2 *)((longlong)&pFVar1[1].ScriptStruct.field0_0x0 + 2);
      *(undefined2 *)((longlong)&this[1].ScriptStruct.field0_0x0 + 4) =
           *(undefined2 *)((longlong)&pFVar1[1].ScriptStruct.field0_0x0 + 4);
      *(undefined2 *)((longlong)&this[1].ScriptStruct.field0_0x0 + 6) =
           *(undefined2 *)((longlong)&pFVar1[1].ScriptStruct.field0_0x0 + 6);
      param_3 = param_3 + -1;
      this = (FInstancedStruct *)&this[1].StructMemory;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyBindingCopyInfo> @ 14d378840

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingCopyInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  FPropertyBindingCopyInfo::FPropertyBindingCopyInfo(param_1);
  return;
}

// ConstructForTests<FPropertyBindingCopyInfo> @ 14d378870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyBindingCopyInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffff;
  *(undefined2 *)((longlong)param_1 + 4) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x30));
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  return;
}

// Destruct<FPropertyBindingCopyInfo> @ 14d378880

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingCopyInfo>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x30));
  return;
}

// Copy<FPropertyBindingCopyInfo> @ 14d3788d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingCopyInfo>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined2 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined2 *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1));
      puVar2[1] = *(undefined2 *)((longlong)pvVar1 + 2);
      puVar2[2] = *(undefined2 *)((longlong)pvVar1 + 4);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar1 + 6);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 8));
      }
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)pvVar1 + 8);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 0x10);
      puVar2[0xc] = *(undefined2 *)((longlong)pvVar1 + 0x18);
      puVar2[0xd] = *(undefined2 *)((longlong)pvVar1 + 0x1a);
      puVar2[0xe] = *(undefined2 *)((longlong)pvVar1 + 0x1c);
      *(undefined1 *)(puVar2 + 0xf) = *(undefined1 *)((longlong)pvVar1 + 0x1e);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x20));
      }
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)((longlong)pvVar1 + 0x20);
      *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)((longlong)pvVar1 + 0x28);
      if ((FInstancedStruct *)(puVar2 + 0x18) != (FInstancedStruct *)((longlong)pvVar1 + 0x30)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar2 + 0x18),
                   (((FInstancedStruct *)((longlong)pvVar1 + 0x30))->ScriptStruct).field0_0x0.
                   DebugPtr,*(uchar **)((longlong)pvVar1 + 0x38));
      }
      *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)((longlong)pvVar1 + 0x40);
      *(undefined8 *)(puVar2 + 0x24) = *(undefined8 *)((longlong)pvVar1 + 0x48);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x50) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x50));
      }
      *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)((longlong)pvVar1 + 0x50);
      *(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)((longlong)pvVar1 + 0x58);
      *(undefined1 *)(puVar2 + 0x2e) = *(undefined1 *)((longlong)pvVar1 + 0x5c);
      *(undefined1 *)((longlong)puVar2 + 0x5d) = *(undefined1 *)((longlong)pvVar1 + 0x5d);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x60);
      puVar2 = puVar2 + 0x30;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyBindingPropertyIndirection> @ 14d378b10

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingPropertyIndirection>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FPropertyBindingPropertyIndirection> @ 14d378b30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPropertyBindingPropertyIndirection>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffff;
  *(undefined2 *)((longlong)param_1 + 4) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPropertyBindingPropertyIndirection> @ 14d378b50

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingPropertyIndirection>(void *param_1)

{
  return;
}

// Copy<FPropertyBindingPropertyIndirection> @ 14d378b60

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingPropertyIndirection>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined2 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined2 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined2 *)((longlong)pvVar1 + 2);
      puVar2[2] = *(undefined2 *)((longlong)pvVar1 + 4);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar1 + 6);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 8));
      }
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)pvVar1 + 8);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 0x10);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x18);
      puVar2 = puVar2 + 0xc;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPropertyBindingPropertyIndirection> @ 14d378c10

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPropertyBindingPropertyIndirection>(void *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)param_1;
  uVar3 = (uVar1 >> 2) + 0x9e3779b9 + (uint)*(ushort *)((longlong)param_1 + 2) + (uint)uVar1 * 0x40
          ^ (uint)uVar1;
  uVar3 = (uVar3 >> 2) + *(ushort *)((longlong)param_1 + 4) + 0x9e3779b9 + uVar3 * 0x40 ^ uVar3;
  uVar3 = (uVar3 >> 2) + *(byte *)((longlong)param_1 + 6) + 0x9e3779b9 + uVar3 * 0x40 ^ uVar3;
  uVar2 = ((uint)(*(ulonglong *)((longlong)param_1 + 8) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 8) >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  return (uVar3 >> 2) + 0x9e3779b9 + (uVar2 >> 0x10 ^ uVar2) + uVar3 * 0x40 ^ uVar3;
}

// Construct<FPropertyBindingPath> @ 14d378ca0

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingPath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPropertyBindingPath> @ 14d378cb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyBindingPath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPropertyBindingPath> @ 14d378cc0

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingPath>(void *param_1)

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

// Copy<FPropertyBindingPath> @ 14d378ce0

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingPath>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FPropertyBindingPathSegment *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FPropertyBindingPathSegment *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FPropertyBindingPathSegment,FPropertyBindingPathSegment,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyBindingPathSegment> @ 14d378db0

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingPathSegment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x18) = 9;
  return;
}

// ConstructForTests<FPropertyBindingPathSegment> @ 14d378dd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyBindingPathSegment>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 9;
  return;
}

// Destruct<FPropertyBindingPathSegment> @ 14d378df0

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingPathSegment>(void *param_1)

{
  return;
}

// Copy<FPropertyBindingPathSegment> @ 14d378e00

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingPathSegment>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)pvVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      puVar2[2] = *(undefined8 *)((longlong)pvVar1 + 0x10);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar1 + 0x18);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x20);
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyBindingBindingCollection> @ 14d378ea0

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingBindingCollection>(void *param_1)

{
  memset(param_1,0,0xc0);
  *(undefined ***)param_1 = &___7FPropertyBindingBindingCollection__6B_;
  return;
}

// ConstructForTests<FPropertyBindingBindingCollection> @ 14d378ed0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPropertyBindingBindingCollection>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyBindingBindingCollection__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  return;
}

// Destruct<FPropertyBindingBindingCollection> @ 14d378f30

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingBindingCollection>(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0xa0);
    if (*(longlong **)((longlong)param_1 + 0xb8) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0xb8);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x70);
    if (*(longlong **)((longlong)param_1 + 0x88) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x88);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FPropertyBindingCopyInfo,int>
            (*(FPropertyBindingCopyInfo **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FPropertyBindingCopyInfoBatch,int>
            (*(FPropertyBindingCopyInfoBatch **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FPropertyBindingBindingCollection> @ 14d379100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingBindingCollection>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FPropertyBindingCopyInfoBatch *pFVar4;
  FPropertyBindingCopyInfo *pFVar5;
  FPropertyBindingPropertyIndirection *pFVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStackY_d8 [32];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      DestructItems<FPropertyBindingCopyInfoBatch,int>
                ((FPropertyBindingCopyInfoBatch *)pFVar1->Data,*(int *)((longlong)param_1 + 0x18));
      iVar3 = *(int *)((longlong)param_2 + 0x18);
      piVar2 = (int *)((longlong)param_1 + 0x1c);
      pFVar4 = (FPropertyBindingCopyInfoBatch *)
               ((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FPropertyBindingCopyInfoBatch,FPropertyBindingCopyInfoBatch,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FPropertyBindingCopyInfo,int>
                ((FPropertyBindingCopyInfo *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar5 = (FPropertyBindingCopyInfo *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FPropertyBindingCopyInfo,FPropertyBindingCopyInfo,int>
                  (pFVar1->Data,pFVar5,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x30);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x30)) {
      iVar3 = *(int *)((longlong)param_2 + 0x38);
      piVar2 = (int *)((longlong)param_1 + 0x3c);
      pFVar6 = (FPropertyBindingPropertyIndirection *)
               ((ForAnyElementType *)((longlong)param_2 + 0x30))->Data;
      *(int *)((longlong)param_1 + 0x38) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FPropertyBindingPropertyIndirection,FPropertyBindingPropertyIndirection,int>
                  (pFVar1->Data,pFVar6,iVar3);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x40) = *(undefined1 *)((longlong)param_2 + 0x40);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x48) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x48));
    }
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x58) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x58));
    }
    *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
    lVar7 = *(longlong *)((longlong)param_2 + 0x60);
    uStack_50 = (longlong *)0x0;
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)((longlong)param_2 + 0x70);
      if (*(undefined8 **)((longlong)param_2 + 0x88) != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)((longlong)param_2 + 0x88);
      }
      (**(code **)*puVar16)(puVar16,&local_68);
    }
    lVar14 = *(longlong *)((longlong)param_1 + 0x60);
    uVar15 = *(undefined8 *)((longlong)param_1 + 0x68);
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x70);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x74);
    uVar10 = *(undefined4 *)((longlong)param_1 + 0x78);
    uVar11 = *(undefined4 *)((longlong)param_1 + 0x7c);
    uVar12 = *(undefined8 *)((longlong)param_1 + 0x80);
    plVar13 = *(longlong **)((longlong)param_1 + 0x88);
    *(longlong *)((longlong)param_1 + 0x60) = lVar7;
    *(undefined8 *)((longlong)param_1 + 0x68) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x70) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x74) = local_68._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x78) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_5c;
    *(undefined4 *)((longlong)param_1 + 0x80) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0x84) = local_58._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x88) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_50._4_4_;
    local_68._0_4_ = uVar8;
    local_68._4_4_ = uVar9;
    uStack_60 = uVar10;
    uStack_5c = uVar11;
    local_58 = uVar12;
    uStack_50 = plVar13;
    if (lVar14 != 0) {
      plVar17 = &local_68;
      if (plVar13 != (longlong *)0x0) {
        plVar17 = plVar13;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    lVar7 = *(longlong *)((longlong)param_2 + 0x90);
    uStack_50 = (longlong *)0x0;
    if (lVar7 != 0) {
      puVar16 = (undefined8 *)((longlong)param_2 + 0xa0);
      if (*(undefined8 **)((longlong)param_2 + 0xb8) != (undefined8 *)0x0) {
        puVar16 = *(undefined8 **)((longlong)param_2 + 0xb8);
      }
      (**(code **)*puVar16)(puVar16,&local_68);
    }
    lVar14 = *(longlong *)((longlong)param_1 + 0x90);
    uStack_70 = *(undefined8 *)((longlong)param_1 + 0x98);
    uVar8 = *(undefined4 *)((longlong)param_1 + 0xa0);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0xa4);
    uVar10 = *(undefined4 *)((longlong)param_1 + 0xa8);
    uVar11 = *(undefined4 *)((longlong)param_1 + 0xac);
    uVar12 = *(undefined8 *)((longlong)param_1 + 0xb0);
    plVar13 = *(longlong **)((longlong)param_1 + 0xb8);
    *(longlong *)((longlong)param_1 + 0x90) = lVar7;
    *(undefined8 *)((longlong)param_1 + 0x98) = uVar15;
    *(undefined4 *)((longlong)param_1 + 0xa0) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0xa4) = local_68._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xa8) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xac) = uStack_5c;
    *(undefined4 *)((longlong)param_1 + 0xb0) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0xb4) = local_58._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xb8) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_50._4_4_;
    local_68._0_4_ = uVar8;
    local_68._4_4_ = uVar9;
    uStack_60 = uVar10;
    uStack_5c = uVar11;
    local_58 = uVar12;
    uStack_50 = plVar13;
    if (lVar14 != 0) {
      plVar17 = &local_68;
      if (plVar13 != (longlong *)0x0) {
        plVar17 = plVar13;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    param_1 = (void *)((longlong)param_1 + 0xc0);
    param_2 = (void *)((longlong)param_2 + 0xc0);
  }
  return true;
}

// Construct<FPropertyBindingBinding> @ 14d379560

void __cdecl UE::CoreUObject::Private::Construct<FPropertyBindingBinding>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyBindingBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FPropertyBindingBinding> @ 14d379590

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyBindingBinding>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyBindingBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FPropertyBindingBinding> @ 14d3795c0

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyBindingBinding>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPropertyBindingBinding> @ 14d379600

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingBinding>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      pvVar1 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar2);
      if (pvVar2 != pvVar1) {
        FPropertyBindingPath::operator=
                  ((FPropertyBindingPath *)((longlong)pvVar2 + 8),
                   (FPropertyBindingPath *)((longlong)pvVar1 + 8));
        FPropertyBindingPath::operator=
                  ((FPropertyBindingPath *)((longlong)pvVar2 + 0x18),
                   (FPropertyBindingPath *)((longlong)pvVar1 + 0x18));
      }
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyBindingBindableStructDescriptor> @ 14d379750

void __cdecl
UE::CoreUObject::Private::Construct<FPropertyBindingBindableStructDescriptor>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyBindingBindableStructDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPropertyBindingBindableStructDescriptor> @ 14d379770

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPropertyBindingBindableStructDescriptor>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyBindingBindableStructDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPropertyBindingBindableStructDescriptor> @ 14d379850

void __cdecl
UE::CoreUObject::Private::Destruct<FPropertyBindingBindableStructDescriptor>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPropertyBindingBindableStructDescriptor__6B_;
  return;
}

// Copy<FPropertyBindingBindableStructDescriptor> @ 14d379870

bool __cdecl
UE::CoreUObject::Private::Copy<FPropertyBindingBindableStructDescriptor>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// GetStructRef<FPropertyBindingBindableStructDescriptor> @ 14d37a1c0

FPropertyBindingBindableStructDescriptor * __cdecl
UE::StructUtils::GetStructRef<FPropertyBindingBindableStructDescriptor>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPropertyBindingBindableStructDescriptor *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPropertyBindingBindableStructDescriptor *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPropertyBindingBindableStructDescriptor *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingBindableStructDescriptor,
                         (UObject *)pUVar5,L"PropertyBindingBindableStructDescriptor");
  }
  if (param_1 ==
      Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingBindableStructDescriptor,
                         (UObject *)pUVar5,L"PropertyBindingBindableStructDescriptor");
    if (Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d37a2bb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.
               OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton)->
       _padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d37a2bb:
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingBindableStructDescriptor,
                         (UObject *)pUVar5,L"PropertyBindingBindableStructDescriptor");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FPropertyBindingBindableStructDescriptor.
             OuterSingleton,&local_18,(UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FPropertyBindingBindableStructDescriptor *)(*pcVar2)();
  return pFVar4;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBagPropertyDesc>_> @ 14d37a550

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBagPropertyDesc>_>
          (ushort param_1,ForElementType<FPropertyBagPropertyDesc> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPropertyBagPropertyDesc>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_> @ 14d37a620

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
          (ushort param_1,ForElementType<FPropertyBindingPathIndirection> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPropertyBindingPathIndirection>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPropertyIndirection>_> @ 14d37a6f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPropertyIndirection>_>
          (ushort param_1,ForElementType<FPropertyBindingPropertyIndirection> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPropertyBindingPropertyIndirection>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPropertyIndirection>_> @ 14d37a7c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPropertyIndirection>_>
          (uint param_1,uint param_2,ForElementType<FPropertyBindingPropertyIndirection> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPropertyBindingPropertyIndirection>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBagPropertyDesc>_> @ 14d37a880

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBagPropertyDesc>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPropertyBagPropertyDesc> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPropertyBagPropertyDesc>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_> @ 14d37a900

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FPropertyBindingPathIndirection> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPropertyBindingPathIndirection>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// CreateUniquelyNamedPropertiesInPropertyBag @ 14d37f260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __cdecl
UE::PropertyBinding::CreateUniquelyNamedPropertiesInPropertyBag
          (TArrayView<UE::PropertyBinding::FPropertyCreationDescriptor,int> *param_1,
          FInstancedPropertyBag *param_2)

{
  uint uVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FPropertyBagPropertyDesc *pFVar6;
  ForElementType<FPropertyBagPropertyDesc> FVar7;
  longlong lVar8;
  FPropertyCreationDescriptor *pFVar9;
  FName *pFVar10;
  FPropertyCreationDescriptor *pFVar11;
  ForElementType<FPropertyBagPropertyDesc> FVar12;
  ForElementType<FPropertyBagPropertyDesc> FVar13;
  undefined1 auStackY_108 [32];
  undefined4 uStack_9c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_98;
  ForElementType<FPropertyBagPropertyDesc> local_88;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar1 = param_1->ArrayNum;
  local_3c = 1;
  local_88.SecondaryData = (ForElementType<FPropertyBagPropertyDesc>)0x0;
  local_40 = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (1 < (int)uVar1) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBagPropertyDesc>_>
              (0x40,8,uVar1,&local_88,0,&local_3c);
  }
  FVar12 = (ForElementType<FPropertyBagPropertyDesc>)param_1->DataPtr;
  FVar13 = (ForElementType<FPropertyBagPropertyDesc>)
           ((longlong)(int)uVar1 * 0x50 + (longlong)FVar12);
  if (FVar12 != FVar13) {
    pFVar10 = (FName *)((longlong)FVar12 + 0x18);
    do {
      uVar1 = pFVar10->Number;
      pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(param_2,*pFVar10);
      while (pFVar6 != (FPropertyBagPropertyDesc *)0x0) {
        FVar3.Number = uVar1;
        FVar3.ComparisonIndex.Value = (pFVar10->ComparisonIndex).Value;
        *pFVar10 = FVar3;
        pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(param_2,FVar3);
        uVar1 = uVar1 + 1;
      }
      FVar7 = (ForElementType<FPropertyBagPropertyDesc>)&local_88;
      if (local_88.SecondaryData != (ForElementType<FPropertyBagPropertyDesc>)0x0) {
        FVar7 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar7 <= (ulonglong)FVar12) {
        FVar7 = (ForElementType<FPropertyBagPropertyDesc>)&local_88;
        if (local_88.SecondaryData != (ForElementType<FPropertyBagPropertyDesc>)0x0) {
          FVar7 = local_88.SecondaryData;
        }
        if (((ulonglong)FVar12 < (ulonglong)((longlong)local_3c * 0x40 + (longlong)FVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_40 == local_3c) {
        local_40 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBagPropertyDesc>_>
                             (0x840,&local_88,&local_3c);
      }
      FVar7 = (ForElementType<FPropertyBagPropertyDesc>)&local_88;
      if (local_88.SecondaryData != (ForElementType<FPropertyBagPropertyDesc>)0x0) {
        FVar7 = local_88.SecondaryData;
      }
      lVar8 = (longlong)local_40;
      local_40 = local_40 + 1;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(lVar8 * 0x40 + (longlong)FVar7),
                 (FPropertyBagPropertyDesc *)FVar12);
      FVar12 = (ForElementType<FPropertyBagPropertyDesc>)((longlong)FVar12 + 0x50);
      pFVar10 = pFVar10 + 10;
    } while (FVar12 != FVar13);
  }
  iVar4 = local_40;
  FVar12 = (ForElementType<FPropertyBagPropertyDesc>)&local_88;
  if (local_88.SecondaryData != (ForElementType<FPropertyBagPropertyDesc>)0x0) {
    FVar12 = local_88.SecondaryData;
  }
  if ((local_40 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98._12_4_ = uStack_9c;
  local_98.ArrayNum = iVar4;
  local_98.DataPtr = (FPropertyBagPropertyDesc *)FVar12;
  FInstancedPropertyBag::AddProperties(param_2,&local_98,true);
  pFVar9 = param_1->DataPtr;
  pFVar11 = pFVar9 + param_1->ArrayNum;
  for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 1) {
    if ((pFVar9->SourceProperty != (FProperty *)0x0) &&
       (pFVar9->SourceContainerAddress != (void *)0x0)) {
      FInstancedPropertyBag::SetValue
                (param_2,(pFVar9->PropertyDesc).Name,pFVar9->SourceProperty,
                 pFVar9->SourceContainerAddress);
    }
  }
  if (local_88.SecondaryData != (ForElementType<FPropertyBagPropertyDesc>)0x0) {
    FMemory::Free((void *)local_88.SecondaryData);
  }
  return;
}

// GetDescriptorAndPathAsString @ 14d3806c0

FString * __cdecl
UE::PropertyBinding::GetDescriptorAndPathAsString
          (FString *__return_storage_ptr__,FPropertyBindingBindableStructDescriptor *param_1,
          FPropertyBindingPath *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  FString *pFVar8;
  ulong64 uVar9;
  FName *pFVar10;
  int iVar11;
  FName *pFVar12;
  int iVar13;
  int iVar14;
  FName local_res8;
  FString local_88;
  void *local_78 [2];
  TStringBuilderBase<wchar_t> local_68;
  TStringBuilderBase<wchar_t> local_48;
  
  iVar13 = 0;
  local_48.End = (wchar_t *)0x0;
  local_48.bIsDynamic = false;
  local_48.bIsExternal = false;
  local_48.Base = (wchar_t *)0x0;
  local_48.CurPos = (wchar_t *)0x0;
  puVar6 = (undefined8 *)(**(code **)(param_1->_padding_ + 8))(param_1,local_78);
  pvVar7 = (void *)*puVar6;
  iVar14 = 0;
  iVar11 = *(int *)(puVar6 + 1) + -1;
  if (*(int *)(puVar6 + 1) == 0) {
    iVar11 = iVar14;
  }
  uVar9 = (ulong64)iVar11;
  if (local_48.End < local_48.CurPos + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,uVar9);
  }
  if (iVar11 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_48.CurPos,pvVar7,uVar9 * 2);
    local_48.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
  }
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  if ((param_2->Segments).ArrayNum != 0) {
    if (local_48.End < local_48.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_48,1);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_48.CurPos,&::u__,2);
    iVar11 = (param_2->Segments).ArrayNum;
    local_48.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
    pFVar1 = (param_2->Segments).AllocatorInstance.Data;
    local_68.End = (wchar_t *)0x0;
    local_68.bIsDynamic = false;
    local_68.bIsExternal = false;
    local_68.Base = (wchar_t *)0x0;
    local_68.CurPos = (wchar_t *)0x0;
    if ((iVar11 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar2)();
      return pFVar8;
    }
    iVar5 = iVar14;
    if (iVar11 < 0) {
      iVar5 = iVar11;
    }
    pFVar10 = (FName *)(pFVar1 + (longlong)iVar5 * 0x20);
    if (0 < iVar11 - iVar5) {
      iVar14 = iVar11 - iVar5;
    }
    if ((iVar14 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar2)();
      return pFVar8;
    }
    pFVar12 = pFVar10 + (longlong)iVar14 * 4;
    for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 4) {
      if (0 < iVar13) {
        if (local_68.End < local_68.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_68,1);
        }
        *local_68.CurPos = L'.';
        local_68.CurPos = local_68.CurPos + 1;
      }
      local_res8 = *pFVar10;
      ::FName::AppendString(&local_res8,&local_68);
      if (-1 < (int)pFVar10[1].ComparisonIndex.Value) {
        if (local_68.End < local_68.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_68,1);
        }
        *local_68.CurPos = L'[';
        local_68.CurPos = local_68.CurPos + 1;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_68,L"%d");
        if (local_68.End < local_68.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_68,1);
        }
        *local_68.CurPos = L']';
        local_68.CurPos = local_68.CurPos + 1;
      }
      iVar13 = iVar13 + 1;
    }
    if (local_68.End < local_68.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_68,1);
    }
    *local_68.CurPos = L'\0';
    ::FString::FString(&local_88,local_68.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_68);
    FVar3.Data = local_88.Data.AllocatorInstance.Data;
    iVar13 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    uVar9 = (ulong64)iVar13;
    if (local_48.End < local_48.CurPos + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_48,uVar9);
    }
    if (iVar13 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_48.CurPos,FVar3.Data,uVar9 * 2);
      local_48.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.End < local_48.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_48,1);
  }
  *local_48.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_48.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_48);
  return __return_storage_ptr__;
}

// GetPropertyCompatibility @ 14d380b00

EPropertyCompatibility __cdecl
UE::PropertyBinding::GetPropertyCompatibility(FProperty *param_1,FProperty *param_2)

{
  ulonglong uVar1;
  char cVar2;
  EPropertyCompatibility EVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == param_2) {
    return Compatible;
  }
  if ((param_1 == (FProperty *)0x0) || (param_2 == (FProperty *)0x0)) {
LAB_14d380c73:
    EVar3 = Incompatible;
  }
  else {
    if (((*(uint *)(param_1->_padding_ + 0x18) >> 0x1a & 1) != 0) &&
       ((*(uint *)(param_2->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
      lVar4 = param_2[1]._padding_;
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_1[1]._padding_ + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(param_1[1]._padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          return Compatible;
        }
      }
      return Incompatible;
    }
    uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
    if ((uVar6 & 0x40) == 0) {
      if ((uVar6 & 0x1000000000000) != 0) {
        lVar4 = param_2[1]._padding_;
        goto LAB_14d380bba;
      }
    }
    else {
      lVar4 = (**(code **)(param_2->_padding_ + 0x1e0))(param_2);
LAB_14d380bba:
      if (lVar4 != 0) {
        uVar6 = *(ulonglong *)(param_1->_padding_ + 0x18);
        if ((uVar6 & 0x40) != 0) {
          lVar5 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
          return lVar4 == lVar5;
        }
        if ((uVar6 & 0x1000000000000) == 0) {
          return lVar4 == 0;
        }
        return lVar4 == param_1[1]._padding_;
      }
    }
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      param_1 = (FProperty *)param_1[1]._padding_;
    }
    cVar2 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_2);
    if (cVar2 != '\0') {
      return Compatible;
    }
    uVar6 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if ((uVar6 >> 0x11 & 1) == 0) {
      if ((uVar6 & 0x40) != 0) {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        goto LAB_14d380c49;
      }
      if ((char)uVar6 < '\0') {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        goto LAB_14d380c5c;
      }
      if ((uVar6 >> 0xb & 1) != 0) {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        goto LAB_14d380c5c;
      }
      if ((uVar6 >> 8 & 1) != 0) {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        if ((char)uVar6 < '\0') goto LAB_14d380ce2;
        uVar1 = uVar6 & 0x400000;
        goto LAB_14d380c6a;
      }
      if ((uVar6 >> 0x20 & 1) == 0) goto LAB_14d380c73;
      uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
      if (((char)uVar6 < '\0') || ((uVar6 >> 0x16 & 1) != 0)) goto LAB_14d380ce2;
      uVar6 = uVar6 >> 8;
joined_r0x00014d380ce0:
      if ((uVar6 & 1) == 0) goto LAB_14d380c73;
    }
    else {
      uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
      if ((uVar6 & 0x40) != 0) goto LAB_14d380ce2;
LAB_14d380c49:
      if ((-1 < (char)uVar6) && ((uVar6 >> 0xb & 1) == 0)) {
LAB_14d380c5c:
        if ((uVar6 >> 0x16 & 1) == 0) {
          uVar1 = uVar6 & 0x100;
LAB_14d380c6a:
          if (uVar1 == 0) {
            uVar6 = uVar6 >> 0x20;
            goto joined_r0x00014d380ce0;
          }
        }
      }
    }
LAB_14d380ce2:
    EVar3 = Promotable;
  }
  return EVar3;
}

