// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FPIEFixupSerializer @ 14834a660

FPIEFixupSerializer * __thiscall
FPIEFixupSerializer::FPIEFixupSerializer(FPIEFixupSerializer *this,UObject *param_1,int param_2)

{
  byte *pbVar1;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  *(code **)&this->SoftObjectPathFixupFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<void___cdecl(int,FSoftObjectPath_&),void,int,FSoftObjectPath_&>::Call;
  *(code **)&(this->SoftObjectPathFixupFunction).field_0x8 =
       ::`anonymous_namespace'::DefaultSoftObjectPathFixupFunction;
  *(undefined8 *)&(this->VisitedObjects).Elements = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x30 = 0xffffffff;
  (this->VisitedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedObjects).HashSize = 0;
  (this->DeferredSerialize).AllocatorInstance.SecondaryData = (ForElementType<UObject_*>)0x0;
  (this->DeferredSerialize).ArrayNum = 0;
  *(undefined8 *)&(this->DeferredSerialize).ArrayMax = 0x20;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0xb;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&___7FPIEFixupSerializer__6B_;
  this->Root = param_1;
  this->PIEInstanceID = param_2;
  return this;
}

// FPIEFixupSerializer @ 14834a730

FPIEFixupSerializer * __thiscall
FPIEFixupSerializer::FPIEFixupSerializer
          (FPIEFixupSerializer *this,UObject *param_1,int param_2,
          TFunctionRef<void___cdecl(int,FSoftObjectPath_&)> *param_3)

{
  byte *pbVar1;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FPIEFixupSerializer__6B_;
  *(undefined8 *)&this->SoftObjectPathFixupFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->SoftObjectPathFixupFunction).field_0x8 = 0;
  *(undefined8 *)&(this->SoftObjectPathFixupFunction).field_0x8 = *(undefined8 *)&param_3->field_0x8
  ;
  *(undefined8 *)&(this->VisitedObjects).Elements = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x34 = 0;
  (this->VisitedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedObjects).HashSize = 0;
  (this->DeferredSerialize).AllocatorInstance.SecondaryData = (ForElementType<UObject_*>)0x0;
  (this->DeferredSerialize).ArrayNum = 0;
  *(undefined8 *)&(this->DeferredSerialize).ArrayMax = 0x20;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0xb;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 8;
  this->Root = param_1;
  this->PIEInstanceID = param_2;
  return this;
}

// operator<< @ 1483504c0

FArchive * __thiscall FPIEFixupSerializer::operator<<(FPIEFixupSerializer *this,UObject **param_1)

{
  TArray<UObject_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  UObjectBaseUtility *this_00;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  ForElementType<UObject_*> FVar9;
  FArchive *pFVar10;
  longlong lVar11;
  longlong *plVar12;
  ForElementType<FSetElementId> FVar13;
  ForElementType<UObject_*> FVar14;
  UObject *local_res8;
  
  this_00 = (UObjectBaseUtility *)*param_1;
  if ((this_00 != (UObjectBaseUtility *)0x0) &&
     ((this_00 == (UObjectBaseUtility *)this->Root ||
      (bVar5 = UObjectBaseUtility::IsIn(this_00,this->Root), bVar5)))) {
    pUVar3 = *param_1;
    uVar6 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(this->VisitedObjects).Elements.field_0x8 !=
        *(int *)&(this->VisitedObjects).Elements.field_0x34) {
      FVar13 = (this->VisitedObjects).Hash.SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&(this->VisitedObjects).Hash;
      }
      iVar7 = *(int *)((longlong)FVar13 +
                      (ulonglong)((this->VisitedObjects).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) *
                      4);
      if (iVar7 != -1) {
        lVar11 = *(longlong *)&(this->VisitedObjects).Elements;
        do {
          if (*(UObject **)(lVar11 + (longlong)iVar7 * 0x10) == pUVar3) goto LAB_1483506c6;
          iVar7 = *(int *)(lVar11 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              (&this->VisitedObjects,&local_res8,(bool *)param_1);
    pUVar3 = *param_1;
    if (pUVar3 != (UObject *)0x0) {
      pUVar8 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
      lVar11 = *(longlong *)&pUVar3->field_0x10;
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)(lVar11 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar8->_padding_)) goto LAB_1483506c6;
    }
    if (this->RecursionCount < 1) {
      this->RecursionCount = this->RecursionCount + 1;
      (**(code **)(*(longlong *)*param_1 + 200))(*param_1,this);
      this->RecursionCount = this->RecursionCount + -1;
    }
    else {
      FVar14 = (this->DeferredSerialize).AllocatorInstance.SecondaryData;
      pTVar1 = &this->DeferredSerialize;
      FVar9 = FVar14;
      if (FVar14 == (ForElementType<UObject_*>)0x0) {
        FVar9 = (ForElementType<UObject_*>)pTVar1;
      }
      if ((ulonglong)FVar9 <= param_1) {
        FVar9 = (ForElementType<UObject_*>)pTVar1;
        if (FVar14 != (ForElementType<UObject_*>)0x0) {
          FVar9 = FVar14;
        }
        if ((param_1 < (UObject **)
                       ((longlong)FVar9 + (longlong)(this->DeferredSerialize).ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FArchive *)(*pcVar4)();
          return pFVar10;
        }
      }
      iVar7 = (this->DeferredSerialize).ArrayNum;
      piVar2 = &(this->DeferredSerialize).ArrayMax;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->DeferredSerialize).ArrayNum = iVar7 + 1;
      FVar14 = (this->DeferredSerialize).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<UObject_*>)0x0) {
        FVar14 = (ForElementType<UObject_*>)pTVar1;
      }
      *(UObject **)((longlong)FVar14 + (longlong)iVar7 * 8) = *param_1;
    }
  }
LAB_1483506c6:
  if (this->RecursionCount == 0) {
    iVar7 = (this->DeferredSerialize).ArrayNum;
    this->RecursionCount = 1;
    while (iVar7 != 0) {
      if (((this->DeferredSerialize).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FArchive *)(*pcVar4)();
        return pFVar10;
      }
      FVar14 = (this->DeferredSerialize).AllocatorInstance.SecondaryData;
      lVar11 = (longlong)(this->DeferredSerialize).ArrayNum;
      if (FVar14 == (ForElementType<UObject_*>)0x0) {
        plVar12 = *(longlong **)((longlong)(&(this->VisitedObjects).Hash + 1) + lVar11 * 2 * 4);
      }
      else {
        plVar12 = *(longlong **)((longlong)FVar14 + -8 + lVar11 * 8);
      }
      piVar2 = &(this->DeferredSerialize).ArrayNum;
      *piVar2 = *piVar2 + -1;
      (**(code **)(*plVar12 + 200))(plVar12,this);
      iVar7 = (this->DeferredSerialize).ArrayNum;
    }
    this->RecursionCount = this->RecursionCount + -1;
  }
  return (FArchive *)this;
}

// operator<< @ 148350790

FArchive * __thiscall
FPIEFixupSerializer::operator<<(FPIEFixupSerializer *this,FLazyObjectPtr *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FUniqueObjectGuid *pFVar4;
  FUniqueObjectGuid local_18;
  
  pFVar4 = FUniqueObjectGuid::FixupForPIE
                     ((FUniqueObjectGuid *)&param_1->field_0x8,&local_18,this->PIEInstanceID);
  *(undefined8 *)param_1 = 0;
  uVar1 = (pFVar4->Guid).B;
  uVar2 = (pFVar4->Guid).C;
  uVar3 = (pFVar4->Guid).D;
  *(uint *)&param_1->field_0x8 = (pFVar4->Guid).A;
  *(uint *)&param_1->field_0xc = uVar1;
  *(uint *)&param_1->field_0x10 = uVar2;
  *(uint *)&param_1->field_0x14 = uVar3;
  return (FArchive *)this;
}

// operator<< @ 1483507e0

FArchive * __thiscall
FPIEFixupSerializer::operator<<(FPIEFixupSerializer *this,FSoftObjectPath *param_1)

{
  TFunctionRef<void___cdecl(int,FSoftObjectPath_&)> local_18;
  
  local_18._0_8_ = *(undefined8 *)&this->SoftObjectPathFixupFunction;
  local_18._8_8_ = *(undefined8 *)&(this->SoftObjectPathFixupFunction).field_0x8;
  FSoftObjectPath::FixupForPIE(param_1,this->PIEInstanceID,&local_18);
  return (FArchive *)this;
}

// operator<< @ 148350830

FArchive * __thiscall
FPIEFixupSerializer::operator<<(FPIEFixupSerializer *this,FSoftObjectPtr *param_1)

{
  (**(code **)(this->_padding_ + 0x140))(this,&param_1->field_0x8);
  return (FArchive *)this;
}

// ShouldSkipProperty @ 1483ac590

bool __thiscall
FPIEFixupSerializer::ShouldSkipProperty(FPIEFixupSerializer *this,FProperty *param_1)

{
  return (bool)((byte)((uint)*(undefined4 *)(param_1->_padding_ + 0x18) >> 0x19) & 1);
}

