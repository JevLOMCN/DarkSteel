// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// Init @ 149113050

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

void __thiscall
FNDIStageTickHandler::Init
          (FNDIStageTickHandler *this,UNiagaraScript *param_1,FNiagaraSystemInstance *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FWeakObjectPtr *pFVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar13;
  int local_48 [4];
  
  if ((param_1 == (UNiagaraScript *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Script",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                         ,0x18,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2 == (FNiagaraSystemInstance *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                         ,0x19,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar1 = &(this->PreStageTickList).ArrayMax;
  this->Usage = param_1->Usage;
  (this->PreStageTickList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->PostStageTickList).ArrayMax;
  (this->PostStageTickList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PostStageTickList).AllocatorInstance,0,piVar1);
  }
  pFVar13 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
  iVar10 = (param_1->ResolvedDataInterfaces).ArrayNum;
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar12 = pFVar13 + (longlong)iVar10 * 0x50;
  do {
    if (pFVar13 == pFVar12) {
      return;
    }
    plVar2 = *(longlong **)(pFVar13 + 0x40);
    if (plVar2 != (longlong *)0x0) {
      cVar8 = (**(code **)(*plVar2 + 0x358))(plVar2,this->Usage);
      cVar9 = (**(code **)(**(longlong **)(pFVar13 + 0x40) + 0x360))
                        (*(longlong **)(pFVar13 + 0x40),this->Usage);
      if ((cVar8 != '\0') || (cVar9 != '\0')) {
        pFVar3 = (FWeakObjectPtr *)
                 (param_2->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
        pUVar4 = *(UObject **)(pFVar13 + 0x40);
        iVar10 = (param_2->DataInterfaceInstanceDataOffsets).ArrayNum;
        for (this_00 = pFVar3;
            this_00 != (FWeakObjectPtr *)((longlong)pFVar3 + (longlong)iVar10 * 0xc);
            this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber) {
          pUVar11 = FWeakObjectPtr::Get(this_00);
          if (pUVar11 == pUVar4) {
            local_48[0] = (int)(((longlong)this_00 - (longlong)pFVar3) / 0xc);
            if (local_48[0] != -1) {
              if (cVar8 != '\0') {
                pFVar5 = (this->PreStageTickList).AllocatorInstance.Data;
                piVar1 = &(this->PreStageTickList).ArrayMax;
                if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
                    ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)*piVar1 * 4)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar10 = (this->PreStageTickList).ArrayNum;
                if (iVar10 == *piVar1) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)this,piVar1);
                }
                (this->PreStageTickList).ArrayNum = iVar10 + 1;
                *(int *)((this->PreStageTickList).AllocatorInstance.Data + (longlong)iVar10 * 4) =
                     local_48[0];
              }
              if (cVar9 != '\0') {
                pFVar5 = (this->PostStageTickList).AllocatorInstance.Data;
                piVar1 = &(this->PostStageTickList).ArrayMax;
                if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
                    ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)*piVar1 * 4)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar10 = (this->PostStageTickList).ArrayNum;
                if (iVar10 == *piVar1) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&(this->PostStageTickList).AllocatorInstance,piVar1);
                }
                (this->PostStageTickList).ArrayNum = iVar10 + 1;
                *(int *)((this->PostStageTickList).AllocatorInstance.Data + (longlong)iVar10 * 4) =
                     local_48[0];
              }
            }
            goto LAB_14911321e;
          }
        }
        local_48[0] = -1;
      }
    }
LAB_14911321e:
    pFVar13 = pFVar13 + 0x50;
  } while( true );
}

// PostStageTick @ 149124600

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

void __thiscall
FNDIStageTickHandler::PostStageTick
          (FNDIStageTickHandler *this,FNiagaraSystemInstance *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  FNiagaraSystemInstance *local_58;
  FScriptContainerElement *local_50;
  float local_48;
  ENiagaraScriptUsage local_44;
  
  local_44 = this->Usage;
  pFVar9 = (this->PostStageTickList).AllocatorInstance.Data;
  uVar2 = (this->PostStageTickList).ArrayNum;
  uVar8 = (ulonglong)(int)uVar2;
  local_50 = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar9 + uVar8 * 4;
  local_58 = param_1;
  local_48 = param_2;
LAB_149124657:
  do {
    if ((this->PostStageTickList).ArrayNum != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar1) {
      return;
    }
    uVar3 = *(uint *)pFVar9;
    if (((int)uVar3 < 0) || ((param_1->DataInterfaceInstanceDataOffsets).ArrayNum <= (int)uVar3)) {
      local_50 = (FScriptContainerElement *)0x0;
    }
    else {
      uVar6 = 0;
      if ((int)uVar3 < (param_1->DataInterfaceInstanceDataOffsets).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.
                                    Data + (longlong)(int)uVar3 * 0xc));
      uVar6 = 0;
      if ((int)uVar3 < (param_1->DataInterfaceInstanceDataOffsets).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar3 = *(uint *)((param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 0xc + 8);
      uVar6 = 0;
      if ((int)uVar3 < (param_1->DataInterfaceInstanceData).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_50 = (param_1->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar3;
      if ((pUVar7 != (UObject *)0x0) && (local_50 != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)pUVar7 + 0x310))(pUVar7,&local_58);
        uVar8 = (ulonglong)uVar2;
        pFVar9 = pFVar9 + 4;
        goto LAB_149124657;
      }
    }
    uVar8 = (ulonglong)uVar2;
    pFVar9 = pFVar9 + 4;
  } while( true );
}

// PreStageTick @ 149124820

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

void __thiscall
FNDIStageTickHandler::PreStageTick
          (FNDIStageTickHandler *this,FNiagaraSystemInstance *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  FNiagaraSystemInstance *local_58;
  FScriptContainerElement *local_50;
  float local_48;
  ENiagaraScriptUsage local_44;
  
  local_44 = this->Usage;
  pFVar9 = (this->PreStageTickList).AllocatorInstance.Data;
  uVar2 = (this->PreStageTickList).ArrayNum;
  uVar8 = (ulonglong)(int)uVar2;
  local_50 = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar9 + uVar8 * 4;
  local_58 = param_1;
  local_48 = param_2;
LAB_149124876:
  do {
    if ((this->PreStageTickList).ArrayNum != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar1) {
      return;
    }
    uVar3 = *(uint *)pFVar9;
    if (((int)uVar3 < 0) || ((param_1->DataInterfaceInstanceDataOffsets).ArrayNum <= (int)uVar3)) {
      local_50 = (FScriptContainerElement *)0x0;
    }
    else {
      uVar6 = 0;
      if ((int)uVar3 < (param_1->DataInterfaceInstanceDataOffsets).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.
                                    Data + (longlong)(int)uVar3 * 0xc));
      uVar6 = 0;
      if ((int)uVar3 < (param_1->DataInterfaceInstanceDataOffsets).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar3 = *(uint *)((param_1->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 0xc + 8);
      uVar6 = 0;
      if ((int)uVar3 < (param_1->DataInterfaceInstanceData).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_50 = (param_1->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar3;
      if ((pUVar7 != (UObject *)0x0) && (local_50 != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)pUVar7 + 0x308))(pUVar7,&local_58);
        uVar8 = (ulonglong)uVar2;
        pFVar9 = pFVar9 + 4;
        goto LAB_149124876;
      }
    }
    uVar8 = (ulonglong)uVar2;
    pFVar9 = pFVar9 + 4;
  } while( true );
}

// Empty @ 14929add0

void __thiscall FNDIStageTickHandler::Empty(FNDIStageTickHandler *this)

{
  int *piVar1;
  
  piVar1 = &(this->PreStageTickList).ArrayMax;
  (this->PreStageTickList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->PostStageTickList).ArrayMax;
  (this->PostStageTickList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PostStageTickList).AllocatorInstance,0,piVar1);
  }
  return;
}

