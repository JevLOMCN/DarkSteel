// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// operator() @ 1420eee60

void __thiscall
`FObjectDataResource::Serialize'::__l2::<lambda_1>::operator()
          (void *this,FStructuredArchiveSlot param_1,uint param_2,FObjectDataResource *param_3)

{
  long64 *plVar1;
  FPackageIndex *pFVar2;
  uint *puVar3;
  FArchive *pFVar4;
  EObjectDataResourceFlags *pEVar5;
  longlong *plVar6;
  uchar *puVar7;
  long64 *plVar8;
  int *piVar9;
  uint *puVar10;
  
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  pEVar5 = (EObjectDataResourceFlags *)**(undefined8 **)&pFVar4->field_0x8;
  if ((EObjectDataResourceFlags *)(*(undefined8 **)&pFVar4->field_0x8)[1] < pEVar5 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,param_3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,&param_3->Flags);
    }
  }
  else {
    param_3->Flags = *pEVar5;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  if (1 < param_2) {
    plVar6 = *(longlong **)(*(longlong *)param_1 + 8);
    puVar7 = *(uchar **)plVar6[1];
    if ((uchar *)((undefined8 *)plVar6[1])[1] < puVar7 + 1) {
      (**(code **)(*plVar6 + 0x188))(plVar6,&param_3->CookedIndex,1);
    }
    else {
      (param_3->CookedIndex).Value = *puVar7;
      *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 1;
    }
  }
  plVar1 = &param_3->SerialOffset;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  plVar8 = (long64 *)**(longlong **)&pFVar4->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar4->field_0x8)[1] < plVar8 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar8;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
  }
  plVar1 = &param_3->DuplicateSerialOffset;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  plVar8 = (long64 *)**(longlong **)&pFVar4->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar4->field_0x8)[1] < plVar8 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar8;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
  }
  plVar1 = &param_3->SerialSize;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  plVar8 = (long64 *)**(longlong **)&pFVar4->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar4->field_0x8)[1] < plVar8 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar8;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
  }
  plVar1 = &param_3->RawSize;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  plVar8 = (long64 *)**(longlong **)&pFVar4->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar4->field_0x8)[1] < plVar8 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar8;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
  }
  pFVar2 = &param_3->OuterIndex;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar9 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)pFVar2);
    }
  }
  else {
    pFVar2->Index = *piVar9;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  puVar3 = &param_3->LegacyBulkDataFlags;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar10 = (uint *)**(undefined8 **)&pFVar4->field_0x8;
  if (puVar10 + 1 <= (uint *)(*(undefined8 **)&pFVar4->field_0x8)[1]) {
    *puVar3 = *puVar10;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    return;
  }
  if ((pFVar4->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420ef0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,puVar3,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar4,puVar3);
  return;
}

// Serialize @ 14210e070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl
FObjectDataResource::Serialize
          (FArchive *param_1,TArray<FObjectDataResource,TSizedDefaultAllocator<32>_> *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  Serialize(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// Serialize @ 14210e0f0

void __cdecl
FObjectDataResource::Serialize
          (FStructuredArchiveSlot param_1,
          TArray<FObjectDataResource,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  FArchive *pFVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  FObjectDataResource *pFVar9;
  int iVar10;
  longlong lVar11;
  FObjectDataResource *pFVar12;
  FSlotBase local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_38 [4];
  
  local_38[0] = 2;
  pFVar7 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_38,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_38);
    }
  }
  else {
    local_38[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  local_res20[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  pFVar7 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar7->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar7,local_res20);
    }
  }
  else {
    local_res20[0] = *puVar2;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
  }
  if (local_res20[0] != 0) {
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    uVar4 = local_res20[0];
    if ((pFVar7->field_0x28 & 1) != 0) {
      lVar11 = (longlong)(int)local_res20[0];
      iVar10 = *piVar1;
      if (iVar10 < (int)local_res20[0]) {
        iVar10 = local_res20[0] - iVar10;
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,iVar10,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
        DefaultConstructItems<FObjectDataResource,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30,iVar10);
      }
      else {
        if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
        }
        if ((int)local_res20[0] < iVar10) {
          uVar8 = iVar10 - local_res20[0];
          if (((int)(local_res20[0] | uVar8) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar8 != 0) {
            _Dst = (param_2->AllocatorInstance).Data + lVar11 * 0x30;
            iVar10 = (*piVar1 - uVar8) - uVar4;
            if (iVar10 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x30,(longlong)iVar10 * 0x30);
            }
            *piVar1 = *piVar1 - uVar8;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
          }
        }
      }
    }
    pFVar12 = (FObjectDataResource *)(param_2->AllocatorInstance).Data;
    iVar10 = *piVar1;
    pFVar9 = pFVar12 + iVar10;
    while( true ) {
      if (*piVar1 != iVar10) {
        `TCheckedPointerIterator<FObjectDataResource,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar12 == pFVar9) break;
      `FObjectDataResource::Serialize'::__l2::<lambda_1>::operator()
                (local_res18,param_1,local_38[0],pFVar12);
      pFVar12 = pFVar12 + 1;
    }
  }
  return;
}

