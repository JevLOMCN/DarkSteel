// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator<< @ 1421b76f0

FArchive * __thiscall
UE::RemoteObject::Serialization::FArchiveSubObjectGatherer::operator<<
          (FArchiveSubObjectGatherer *this,FObjectPtr *param_1)

{
  undefined1 *puVar1;
  UObjectBaseUtility *this_00;
  TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>,FDefaultSetAllocator>
  *this_01;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  int iVar5;
  FArchive *pFVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  bool bVar10;
  TPairInitializer<UObject_const_*_&&,UObject_*_const_&> local_res8;
  UObject ***local_58;
  FObjectPtr_u_0 *local_50;
  UObjectBaseUtility *local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  bool bStack_37;
  undefined6 uStack_36;
  FObjectPtr_u_0 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  this_00 = (UObjectBaseUtility *)(param_1->field0_0x0).Handle;
  pUVar7 = this->RootObject;
  local_48 = (UObjectBaseUtility *)0x0;
  local_38 = 0;
  bStack_37 = false;
  uStack_40 = 0;
  pUVar8 = (UObject *)0x0;
  if ((this_00 != (UObjectBaseUtility *)0x0) &&
     ((local_48 = this_00, bStack_37 = UObjectBaseUtility::IsIn(this_00,pUVar7),
      pUVar8 = (UObject *)this_00, this_00 == (UObjectBaseUtility *)pUVar7 ||
      (local_38 = 2, bStack_37)))) {
    local_38 = 1;
  }
  local_20 = CONCAT62(uStack_36,CONCAT11(bStack_37,local_38));
  local_30.Handle = (UObject *)local_48;
  uStack_28 = uStack_40;
  if (bStack_37 == false) {
    return (FArchive *)this;
  }
  this_01 = (TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>,FDefaultSetAllocator>
             *)this->ArchetypeToObjectMap;
  if (GUseImmutableArchetypes == 0) {
LAB_1421b77c1:
    local_res8.Value = (UObject **)UObject::GetArchetype(pUVar8);
  }
  else {
    bVar10 = true;
    pUVar7 = pUVar8;
    if (pUVar8 != (UObject *)0x0) {
      do {
        if (!bVar10) goto LAB_1421b77c1;
        puVar1 = &pUVar7->field_0x10;
        pUVar7 = *(UObject **)&pUVar7->field_0x20;
        uVar9 = *(uint *)(*(longlong *)puVar1 + 0xd4) & 0x40000;
        bVar10 = uVar9 == 0;
      } while (pUVar7 != (UObject *)0x0);
      if (uVar9 != 0) goto LAB_1421b77c1;
    }
    local_res8.Value = (UObject **)FindImmutableArchetype(pUVar8);
  }
  local_58 = &local_res8.Value;
  local_50 = &local_30;
  TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_const_*_&&,UObject_*_const_&>_>
            (this_01,&local_res8,(bool *)&local_58);
  pTVar2 = this->ObjectsToSerialize;
  pFVar3 = (FObjectPtr_u_0 *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= &local_30) && (&local_30 < pFVar3 + pTVar2->ArrayMax)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FArchive *)(*pcVar4)();
    return pFVar6;
  }
  iVar5 = pTVar2->ArrayNum;
  if (iVar5 == pTVar2->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar5 + 1;
  *(FObjectPtr_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_30;
  return (FArchive *)this;
}

