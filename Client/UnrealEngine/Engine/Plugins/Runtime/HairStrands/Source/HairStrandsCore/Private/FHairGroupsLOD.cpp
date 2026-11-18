// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// StaticStruct @ 14df94560

UScriptStruct * __cdecl FHairGroupsLOD::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupsLOD.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupsLOD.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsLOD,(UObject *)pUVar1,L"HairGroupsLOD"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupsLOD.OuterSingleton;
}

// FHairGroupsLOD @ 14dfacaf0

FHairGroupsLOD * __thiscall
FHairGroupsLOD::FHairGroupsLOD(FHairGroupsLOD *this,FHairGroupsLOD *param_1)

{
  TArray<FHairLODSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->LODs;
  this->AutoLODBias = param_1->AutoLODBias;
  piVar2 = &(this->LODs).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->LODs).ArrayNum;
  _Src = (param_1->LODs).AllocatorInstance.Data;
  (this->LODs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x1c);
  }
  return this;
}

// operator== @ 14dfb1db0

bool __thiscall FHairGroupsLOD::operator==(FHairGroupsLOD *this,FHairGroupsLOD *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar1 = (this->LODs).ArrayNum;
  if (uVar1 == (param_1->LODs).ArrayNum) {
    uVar9 = 0;
    if (uVar1 != 0) {
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->LODs).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->LODs).AllocatorInstance.Data;
        lVar8 = (longlong)(int)uVar9 * 0x1c;
        uVar7 = 0;
        if ((int)uVar9 < (param_1->LODs).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (param_1->LODs).AllocatorInstance.Data;
        if ((((*(float *)(pFVar3 + lVar8 + 4) != *(float *)(pFVar2 + lVar8 + 4)) ||
             (*(float *)(pFVar3 + lVar8 + 8) != *(float *)(pFVar2 + lVar8 + 8))) ||
            (*(float *)(pFVar3 + lVar8) != *(float *)(pFVar2 + lVar8))) ||
           (((*(float *)(pFVar3 + lVar8 + 0x10) != *(float *)(pFVar2 + lVar8 + 0x10) ||
             (pFVar2[lVar8 + 0x14] != pFVar3[lVar8 + 0x14])) ||
            (*(float *)(pFVar3 + lVar8 + 0xc) != *(float *)(pFVar2 + lVar8 + 0xc)))))
        goto LAB_14dfb1ee3;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    bVar5 = true;
  }
  else {
LAB_14dfb1ee3:
    bVar5 = false;
  }
  return bVar5;
}

// BuildDDCKey @ 14dfb8750

void __thiscall FHairGroupsLOD::BuildDDCKey(FHairGroupsLOD *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint local_res8 [2];
  
  pFVar8 = (this->LODs).AllocatorInstance.Data;
  iVar2 = (this->LODs).ArrayNum;
  pFVar7 = pFVar8 + 8;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x1c;
  while( true ) {
    if ((this->LODs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairLODSettings,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) break;
    puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar8);
      }
    }
    else {
      *(undefined4 *)pFVar8 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pFVar6 = pFVar7 + -4;
    puVar1 = &param_1->field_0x2a;
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar6,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar6);
      }
    }
    else {
      *(uint *)pFVar6 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar7);
      }
    }
    else {
      *(undefined4 *)pFVar7 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pFVar6 = pFVar7 + 4;
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar6,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar6);
      }
    }
    else {
      *(uint *)pFVar6 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pFVar6 = pFVar7 + 8;
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar6,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar6);
      }
    }
    else {
      *(uint *)pFVar6 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
      local_res8[0] = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_res8[0] = (uint)(pFVar7[0xc] != (FScriptContainerElement)0x0);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        pFVar7[0xc] = (FScriptContainerElement)(local_res8[0] != 0);
      }
    }
    else {
      pFVar7[0xc] = (FScriptContainerElement)(*piVar5 != 0);
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pFVar6 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
    if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7 + 0xe,1);
    }
    else {
      pFVar7[0xe] = *pFVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pFVar6 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
    if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7 + 0xd,1);
    }
    else {
      pFVar7[0xd] = *pFVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pFVar6 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
    if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7 + 0xf,1);
    }
    else {
      pFVar7[0xf] = *pFVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    pFVar6 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
    if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7 + 0x10,1);
      pFVar8 = pFVar8 + 0x1c;
      pFVar7 = pFVar7 + 0x1c;
    }
    else {
      pFVar8 = pFVar8 + 0x1c;
      pFVar7[0x10] = *pFVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      pFVar7 = pFVar7 + 0x1c;
    }
  }
  return;
}

// GetDefault @ 14dfc69a0

FHairGroupsLOD * __cdecl FHairGroupsLOD::GetDefault(FHairGroupsLOD *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(__return_storage_ptr__->LODs).ArrayMax;
  __return_storage_ptr__->AutoLODBias = 0.0;
  (__return_storage_ptr__->LODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->LODs).ArrayNum = 0;
  *piVar1 = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x41c,&(__return_storage_ptr__->LODs).AllocatorInstance,piVar1);
  pFVar3 = (__return_storage_ptr__->LODs).AllocatorInstance.Data;
  (__return_storage_ptr__->LODs).ArrayNum = iVar2 + 1;
  pFVar3 = pFVar3 + (longlong)iVar2 * 0x1c;
  DefaultConstructItems<FHairLODSettings,int>(pFVar3,1);
  *(undefined4 *)(pFVar3 + 0xc) = 0x3f800000;
  *(undefined4 *)pFVar3 = 0x3f800000;
  return __return_storage_ptr__;
}

