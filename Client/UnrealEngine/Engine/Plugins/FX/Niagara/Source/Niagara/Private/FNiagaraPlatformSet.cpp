// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 35

// FNiagaraPlatformSet @ 149276790

FNiagaraPlatformSet * __thiscall
FNiagaraPlatformSet::FNiagaraPlatformSet(FNiagaraPlatformSet *this,FNiagaraPlatformSet *param_1)

{
  int *piVar1;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->DeviceProfileStates).ArrayMax;
  (this->DeviceProfileStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->DeviceProfileStates).ArrayNum;
  pFVar4 = (param_1->DeviceProfileStates).AllocatorInstance.Data;
  (this->DeviceProfileStates).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->DeviceProfileStates).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 4);
  }
  pTVar2 = &this->CVarConditions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CVarConditions).ArrayMax;
  iVar3 = (param_1->CVarConditions).ArrayNum;
  pFVar4 = (param_1->CVarConditions).AllocatorInstance.Data;
  (this->CVarConditions).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x30);
  }
  this->QualityLevelMask = param_1->QualityLevelMask;
  *(uint *)&this->field_0x24 =
       *(uint *)&this->field_0x24 ^
       (this->bEnabledForCurrentProfileAndEffectQuality ^
       param_1->bEnabledForCurrentProfileAndEffectQuality) & 1;
  this->LastBuiltFrame = param_1->LastBuiltFrame;
  return this;
}

// operator= @ 14927bc20

FNiagaraPlatformSet * __thiscall
FNiagaraPlatformSet::operator=(FNiagaraPlatformSet *this,FNiagaraPlatformSet *param_1)

{
  int *piVar1;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  if (this != param_1) {
    iVar3 = (param_1->DeviceProfileStates).ArrayNum;
    piVar1 = &(this->DeviceProfileStates).ArrayMax;
    pFVar4 = (param_1->DeviceProfileStates).AllocatorInstance.Data;
    (this->DeviceProfileStates).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->DeviceProfileStates).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 4);
      }
    }
  }
  pTVar2 = &this->CVarConditions;
  if (pTVar2 != &param_1->CVarConditions) {
    iVar3 = (param_1->CVarConditions).ArrayNum;
    piVar1 = &(this->CVarConditions).ArrayMax;
    pFVar4 = (param_1->CVarConditions).AllocatorInstance.Data;
    (this->CVarConditions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x30);
      }
    }
  }
  this->QualityLevelMask = param_1->QualityLevelMask;
  *(uint *)&this->field_0x24 =
       *(uint *)&this->field_0x24 ^
       (this->bEnabledForCurrentProfileAndEffectQuality ^
       param_1->bEnabledForCurrentProfileAndEffectQuality) & 1;
  this->LastBuiltFrame = param_1->LastBuiltFrame;
  return this;
}

// StaticStruct @ 149316f30

UScriptStruct * __cdecl FNiagaraPlatformSet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSet.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraPlatformSet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSet,(UObject *)pUVar1,
                         L"NiagaraPlatformSet");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSet.OuterSingleton;
}

// FNiagaraPlatformSet @ 149333620

FNiagaraPlatformSet * __thiscall
FNiagaraPlatformSet::FNiagaraPlatformSet(FNiagaraPlatformSet *this,int param_1)

{
  this->bEnabledForCurrentProfileAndEffectQuality = 0;
  (this->DeviceProfileStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceProfileStates).ArrayNum = 0;
  (this->DeviceProfileStates).ArrayMax = 0;
  (this->CVarConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVarConditions).ArrayNum = 0;
  (this->CVarConditions).ArrayMax = 0;
  this->LastBuiltFrame = 0;
  this->QualityLevelMask = param_1;
  IsActive(this);
  return this;
}

// FNiagaraPlatformSet @ 149333660

FNiagaraPlatformSet * __thiscall FNiagaraPlatformSet::FNiagaraPlatformSet(FNiagaraPlatformSet *this)

{
  this->bEnabledForCurrentProfileAndEffectQuality = 0;
  (this->DeviceProfileStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceProfileStates).ArrayNum = 0;
  (this->DeviceProfileStates).ArrayMax = 0;
  (this->CVarConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVarConditions).ArrayNum = 0;
  (this->CVarConditions).ArrayMax = 0;
  this->LastBuiltFrame = 0;
  this->QualityLevelMask = -1;
  return this;
}

// operator== @ 149337140

bool __thiscall
FNiagaraPlatformSet::operator==(FNiagaraPlatformSet *this,FNiagaraPlatformSet *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((this->QualityLevelMask == param_1->QualityLevelMask) &&
     (iVar1 = (this->DeviceProfileStates).ArrayNum, iVar1 == (param_1->DeviceProfileStates).ArrayNum
     )) {
    bVar2 = CompareItems<FNiagaraDeviceProfileStateEntry,int>
                      ((FNiagaraDeviceProfileStateEntry *)
                       (this->DeviceProfileStates).AllocatorInstance.Data,
                       (FNiagaraDeviceProfileStateEntry *)
                       (param_1->DeviceProfileStates).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// operator() @ 149337c30

void __thiscall
`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>::operator()
          (void *this,FNiagaraPlatformSet *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  iVar1 = (param_1->CVarConditions).ArrayNum;
  pFVar3 = (param_1->CVarConditions).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x30;
  do {
    while( true ) {
      if ((param_1->CVarConditions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar4) {
        return;
      }
      if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data !=
          FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
          (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) break;
LAB_149337caa:
      pFVar3 = pFVar3 + 0x30;
    }
    FVar2.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
    do {
      if (*(longlong *)FVar2.Data == *(longlong *)pFVar3) {
        **(undefined1 **)this = 1;
        goto LAB_149337caa;
      }
      FVar2.Data = FVar2.Data + 8;
    } while (FVar2.Data !=
             FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
             (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
    pFVar3 = pFVar3 + 0x30;
  } while( true );
}

// ApplyRedirects @ 14933c3f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNiagaraPlatformSet::ApplyRedirects(FNiagaraPlatformSet *this)

{
  int *piVar1;
  TArray<FNiagaraPlatformSetCVarCondition,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  UClass *this_00;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  FName *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  FName *this_01;
  longlong *plVar21;
  FNiagaraPlatformSet *pFVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  bool local_res8;
  undefined1 local_res10 [8];
  uint local_res18;
  longlong *local_res20;
  TIndexedContainerIterator<TArray<FNiagaraDeviceProfileStateEntry,TSizedDefaultAllocator<32>_>,FNiagaraDeviceProfileStateEntry,int>
  local_80;
  FString local_70;
  FString local_60 [2];
  
  this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar4 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar4 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                         ,0x319,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_res18 = *(uint *)&pUVar4[7].field_0x10;
  uVar12 = (ulonglong)(int)local_res18;
  plVar24 = *(longlong **)&pUVar4[7].field_0x8;
  plVar21 = plVar24 + uVar12 * 0x10;
  local_res8 = true;
  pFVar26 = (FScriptContainerElement *)(plVar24 + 4);
  do {
    while( true ) {
      local_res20 = plVar24;
      if (*(int *)&pUVar4[7].field_0x10 != (int)uVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FNiagaraPlatformSetRedirect_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar24 == plVar21) {
        iVar18 = (this->DeviceProfileStates).ArrayNum;
        local_res18 = 0;
        if (0 < iVar18) {
          lVar25 = 0;
          local_res20 = (longlong *)0x0;
          do {
            plVar24 = local_res20;
            uVar19 = local_res18;
            uVar20 = 0;
            if ((int)local_res18 < iVar18) {
              uVar20 = ~local_res18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            uVar20 = uVar19 + 1;
            iVar18 = (this->DeviceProfileStates).ArrayNum;
            lVar13 = lVar25 + 1;
            pFVar26 = (this->DeviceProfileStates).AllocatorInstance.Data + (longlong)plVar24;
            if ((int)uVar20 < iVar18) {
              lVar27 = (longlong)plVar24 + 0x10;
              do {
                uVar19 = 0;
                if ((int)uVar20 < iVar18) {
                  uVar19 = ~uVar20 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                pFVar16 = (this->DeviceProfileStates).AllocatorInstance.Data;
                if ((lVar25 == lVar13) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("i!=j",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                                       ,0x396,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                if (((*(longlong *)pFVar26 == *(longlong *)(pFVar16 + lVar27)) &&
                    (*(int *)(pFVar26 + 8) == *(int *)(pFVar16 + lVar27 + 8))) &&
                   (*(int *)(pFVar26 + 0xc) == *(int *)(pFVar16 + lVar27 + 0xc))) {
                  uVar19 = 0;
                  if ((int)uVar20 < (this->DeviceProfileStates).ArrayNum) {
                    uVar19 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    uVar8 = (*pcVar6)();
                    return (bool)uVar8;
                  }
                  iVar18 = (this->DeviceProfileStates).ArrayNum;
                  pFVar16 = (this->DeviceProfileStates).AllocatorInstance.Data;
                  iVar14 = ~uVar20 + iVar18;
                  if (1 < iVar14) {
                    iVar14 = 1;
                  }
                  if (iVar14 != 0) {
                    memmove(pFVar16 + (longlong)(int)uVar20 * 0x10,
                            pFVar16 + (longlong)(iVar18 - iVar14) * 0x10,(longlong)iVar14 << 4);
                  }
                  piVar1 = &(this->DeviceProfileStates).ArrayNum;
                  *piVar1 = *piVar1 + -1;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,(ForAnyElementType *)this,(this->DeviceProfileStates).ArrayNum,
                             &(this->DeviceProfileStates).ArrayMax);
                }
                else {
                  uVar20 = uVar20 + 1;
                  lVar13 = lVar13 + 1;
                  lVar27 = lVar27 + 0x10;
                }
                iVar18 = (this->DeviceProfileStates).ArrayNum;
                plVar24 = local_res20;
                uVar19 = local_res18;
              } while ((int)uVar20 < iVar18);
            }
            local_res18 = uVar19 + 1;
            local_res20 = (longlong *)((longlong)plVar24 + 0x10);
            lVar25 = lVar25 + 1;
          } while ((int)local_res18 < iVar18);
        }
        return local_res8;
      }
      if (pFVar26[-0x10] != (FScriptContainerElement)0x0) break;
      bVar7 = false;
      bVar10 = false;
      uVar19 = 0;
      while ((-1 < (int)uVar19 && ((int)uVar19 < (this->DeviceProfileStates).ArrayNum))) {
        if (((int)uVar19 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar16 = (this->DeviceProfileStates).AllocatorInstance.Data;
        plVar15 = (longlong *)*local_res20;
        lVar25 = (longlong)(int)uVar19 * 0x10;
        plVar24 = plVar15 + *(int *)(pFVar26 + -0x18);
        if (plVar15 == plVar24) {
LAB_14933c606:
          uVar19 = uVar19 + 1;
        }
        else {
          do {
            if (*plVar15 == *(longlong *)(pFVar16 + lVar25)) {
              if (*(int *)(pFVar16 + lVar25 + 8) == 0) {
                bVar10 = true;
              }
              else {
                bVar7 = true;
              }
              uVar20 = 0;
              if ((int)uVar19 < (this->DeviceProfileStates).ArrayNum) {
                uVar20 = ~uVar19 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              pFVar16 = (this->DeviceProfileStates).AllocatorInstance.Data + lVar25;
              iVar18 = (this->DeviceProfileStates).ArrayNum + ~uVar19;
              if (iVar18 != 0) {
                memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar18 << 4);
              }
              piVar1 = &(this->DeviceProfileStates).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,(ForAnyElementType *)this,(this->DeviceProfileStates).ArrayNum,
                         &(this->DeviceProfileStates).ArrayMax);
              uVar19 = uVar19 - 1;
              goto LAB_14933c606;
            }
            plVar15 = plVar15 + 1;
          } while (plVar15 != plVar24);
          uVar19 = uVar19 + 1;
        }
      }
      pTVar2 = &this->CVarConditions;
      if (bVar7) {
        pFVar16 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar16 <= pFVar26) &&
            (pFVar26 < pFVar16 + (longlong)(this->CVarConditions).ArrayMax * 0x30)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar18 = (this->CVarConditions).ArrayNum;
        piVar1 = &(this->CVarConditions).ArrayMax;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar13 = (longlong)iVar18;
        (this->CVarConditions).ArrayNum = iVar18 + 1;
        lVar25 = *(longlong *)(pFVar26 + 8);
        pFVar16 = (pTVar2->AllocatorInstance).Data;
        *(longlong *)(pFVar16 + lVar13 * 0x30) = *(longlong *)pFVar26;
        *(longlong *)(pFVar16 + lVar13 * 0x30 + 8) = lVar25;
        lVar25 = *(longlong *)(pFVar26 + 0x18);
        *(longlong *)(pFVar16 + lVar13 * 0x30 + 0x10) = *(longlong *)(pFVar26 + 0x10);
        *(longlong *)(pFVar16 + lVar13 * 0x30 + 0x10 + 8) = lVar25;
        lVar25 = *(longlong *)(pFVar26 + 0x28);
        *(longlong *)(pFVar16 + lVar13 * 0x30 + 0x20) = *(longlong *)(pFVar26 + 0x20);
        *(longlong *)(pFVar16 + lVar13 * 0x30 + 0x20 + 8) = lVar25;
      }
      if (bVar10) {
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        pFVar16 = pFVar26 + 0x30;
        if (((pFVar5 <= pFVar16) &&
            (pFVar16 < pFVar5 + (longlong)(this->CVarConditions).ArrayMax * 0x30)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar18 = (this->CVarConditions).ArrayNum;
        piVar1 = &(this->CVarConditions).ArrayMax;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar2->AllocatorInstance,piVar1);
          (this->CVarConditions).ArrayNum = iVar18;
        }
        lVar13 = (longlong)iVar18;
        (this->CVarConditions).ArrayNum = iVar18 + 1;
        lVar25 = *(longlong *)(pFVar26 + 0x38);
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        *(longlong *)(pFVar5 + lVar13 * 0x30) = *(longlong *)pFVar16;
        *(longlong *)(pFVar5 + lVar13 * 0x30 + 8) = lVar25;
        lVar25 = *(longlong *)(pFVar26 + 0x48);
        *(longlong *)(pFVar5 + lVar13 * 0x30 + 0x10) = *(longlong *)(pFVar26 + 0x40);
        *(longlong *)(pFVar5 + lVar13 * 0x30 + 0x10 + 8) = lVar25;
        lVar25 = *(longlong *)(pFVar26 + 0x58);
        *(longlong *)(pFVar5 + lVar13 * 0x30 + 0x20) = *(longlong *)(pFVar26 + 0x50);
        *(longlong *)(pFVar5 + lVar13 * 0x30 + 0x20 + 8) = lVar25;
      }
LAB_14933c77f:
      plVar24 = local_res20 + 0x10;
      pFVar26 = pFVar26 + 0x80;
      uVar12 = (ulonglong)local_res18;
    }
    if (pFVar26[-0x10] == (FScriptContainerElement)0x1) {
      bVar7 = false;
      uVar20 = 0xffffffff;
      uVar23 = 0;
      uVar19 = 0xffffffff;
      pFVar22 = this;
      local_80.Container = &this->DeviceProfileStates;
LAB_14933c7cb:
      do {
        local_80.Index = uVar23;
        if (((int)uVar23 < 0) ||
           (iVar18 = (pFVar22->DeviceProfileStates).ArrayNum, iVar18 <= (int)uVar23))
        goto LAB_14933c77f;
        uVar11 = 0;
        if ((int)uVar23 < iVar18) {
          uVar11 = ~uVar23 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        this_01 = (FName *)((pFVar22->DeviceProfileStates).AllocatorInstance.Data +
                           (longlong)(int)uVar23 * 0x10);
        pFVar17 = (FName *)*local_res20;
        pFVar3 = pFVar17 + *(int *)(pFVar26 + -0x18);
        if (pFVar17 == pFVar3) {
LAB_14933c8a5:
          uVar23 = uVar23 + 1;
        }
        else {
          do {
            if (*pFVar17 == *this_01) {
              if (!bVar7) {
                bVar7 = true;
                uVar19 = this_01[1].ComparisonIndex.Value;
                uVar20 = this_01[1].Number;
                *this_01 = *(FName *)(pFVar26 + -0xc);
                goto LAB_14933c8a5;
              }
              if ((uVar19 == this_01[1].ComparisonIndex.Value) && (uVar20 == this_01[1].Number)) {
                TIndexedContainerIterator<TArray<FNiagaraDeviceProfileStateEntry,TSizedDefaultAllocator<32>_>,FNiagaraDeviceProfileStateEntry,int>
                ::RemoveCurrent(&local_80);
                uVar23 = local_80.Index + 1;
                pFVar22 = (FNiagaraPlatformSet *)local_80.Container;
                goto LAB_14933c7cb;
              }
              plVar24 = local_res20;
              if (2 < (byte)LogNiagara._0_1_) {
                ::FName::ToString((FName *)(pFVar26 + -0xc),local_60);
                ::FName::ToString(this_01,&local_70);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_70.Data.AllocatorInstance.Data);
                }
                plVar24 = local_res20;
                if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                  plVar24 = local_res20;
                }
              }
              goto LAB_14933c959;
            }
            pFVar17 = pFVar17 + 1;
          } while (pFVar17 != pFVar3);
          uVar23 = uVar23 + 1;
        }
      } while( true );
    }
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
LAB_14933c959:
    uVar12 = (ulonglong)local_res18;
    plVar24 = plVar24 + 0x10;
    local_res8 = false;
    pFVar26 = pFVar26 + 0x80;
  } while( true );
}

// CanChangeScalabilityAtRuntime @ 14933f310

bool __cdecl FNiagaraPlatformSet::CanChangeScalabilityAtRuntime(UDeviceProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 != (UDeviceProfile *)0x0) {
    return GbNiagaraAllowRuntimeScalabilityChanges != 0;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5046260443048313939>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                     ,0x453,"DeviceProfile");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// CanChangeScalabilityAtRuntime @ 14933f370

bool __cdecl FNiagaraPlatformSet::CanChangeScalabilityAtRuntime(void)

{
  return GbNiagaraAllowRuntimeScalabilityChanges != 0;
}

// CanConsiderDeviceProfile @ 14933f390

bool __thiscall
FNiagaraPlatformSet::CanConsiderDeviceProfile(FNiagaraPlatformSet *this,UDeviceProfile *param_1)

{
  if ((GbAllowAllDeviceProfiles == 0) && (param_1->bIsVisibleForAssets == 0)) {
    return false;
  }
  return true;
}

// ClearNiagaraQualityLevelOverride @ 14933f9a0

void __cdecl FNiagaraPlatformSet::ClearNiagaraQualityLevelOverride(void)

{
  if (QualityLevelOverride != -1) {
    LastDirtiedFrame = GFrameNumber;
    QualityLevelOverride = -1;
    CachedQualityLevel = -1;
    RefreshScalability();
    return;
  }
  return;
}

// GetActiveQualityMaskForDeviceProfile @ 14934e7f0

int __cdecl FNiagaraPlatformSet::GetActiveQualityMaskForDeviceProfile(UDeviceProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDeviceProfileManager *pUVar4;
  UDeviceProfile *pUVar5;
  
  pUVar4 = UDeviceProfileManager::Get(false);
  pUVar5 = UDeviceProfileManager::GetPreviewDeviceProfile(pUVar4);
  if ((pUVar5 == (UDeviceProfile *)0x0) &&
     (pUVar5 = (UDeviceProfile *)FWeakObjectPtr::Get(&GNiagaraPlatformOverride.WeakPtr),
     pUVar5 == (UDeviceProfile *)0x0)) {
    pUVar4 = UDeviceProfileManager::Get(false);
    pUVar5 = UDeviceProfileManager::GetActiveProfile(pUVar4);
  }
  if ((param_1 != pUVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Profile == NiagaraGetActiveDeviceProfile()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                         ,0x208,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (GbNiagaraAllowRuntimeScalabilityChanges != 0) {
    return -1;
  }
  iVar3 = QualityLevelOverride;
  if (QualityLevelOverride == -1) {
    iVar3 = CachedQualityLevel;
    if (CachedQualityLevel == -1) {
      iVar3 = GNiagaraQualityLevel;
    }
    if (iVar3 == -1) {
      return -1;
    }
  }
  return 1 << ((byte)iVar3 & 0x1f);
}

// GetAvailableQualityLevelMask @ 14934ea80

int __cdecl FNiagaraPlatformSet::GetAvailableQualityLevelMask(void)

{
  uint uVar1;
  int iVar2;
  
  if (CachedAvailableQualityLevelMask == -1) {
    if ((GbNiagaraAllowRuntimeScalabilityChanges == 0) &&
       ((CachedAvailableQualityLevelMask = 0, GNiagaraMinQualityLevel != -1 ||
        (GNiagaraMaxQualityLevel != -1)))) {
      iVar2 = GNiagaraMaxQualityLevel;
      if (GNiagaraMaxQualityLevel == -1) {
        iVar2 = 0x1f;
      }
      uVar1 = GNiagaraMinQualityLevel;
      if (GNiagaraMinQualityLevel == -1) {
        uVar1 = CachedAvailableQualityLevelMask;
      }
      if (iVar2 < (int)uVar1) {
        CachedAvailableQualityLevelMask = 0;
        return 0;
      }
      do {
        CachedAvailableQualityLevelMask = CachedAvailableQualityLevelMask | 1 << (uVar1 & 0x1f);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 <= iVar2);
      return CachedAvailableQualityLevelMask;
    }
    CachedAvailableQualityLevelMask = -1;
  }
  return CachedAvailableQualityLevelMask;
}

// GetAvailableQualityMaskForDeviceProfile @ 14934eb00

int __cdecl FNiagaraPlatformSet::GetAvailableQualityMaskForDeviceProfile(UDeviceProfile *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (CachedAvailableQualityLevelMask == -1) {
    if ((GbNiagaraAllowRuntimeScalabilityChanges == 0) &&
       ((CachedAvailableQualityLevelMask = 0, GNiagaraMinQualityLevel != -1 ||
        (GNiagaraMaxQualityLevel != -1)))) {
      iVar2 = GNiagaraMaxQualityLevel;
      if (GNiagaraMaxQualityLevel == -1) {
        iVar2 = 0x1f;
      }
      uVar1 = GNiagaraMinQualityLevel;
      if (GNiagaraMinQualityLevel == -1) {
        uVar1 = CachedAvailableQualityLevelMask;
      }
      if (iVar2 < (int)uVar1) {
        CachedAvailableQualityLevelMask = 0;
        return 0;
      }
      do {
        CachedAvailableQualityLevelMask = CachedAvailableQualityLevelMask | 1 << (uVar1 & 0x1f);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 <= iVar2);
      return CachedAvailableQualityLevelMask;
    }
    CachedAvailableQualityLevelMask = -1;
  }
  return CachedAvailableQualityLevelMask;
}

// GetCVar @ 14934ec30

IConsoleVariable * __cdecl FNiagaraPlatformSet::GetCVar(FName param_1)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  IConsoleVariable *pIVar6;
  FString *pFVar7;
  IConsoleVariable *pIVar8;
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this;
  FDelegateHandle FVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FName local_res8;
  TKeyInitializer<FName_const_&> local_res10;
  FName *local_res18;
  undefined1 local_res20 [8];
  FString local_38;
  
  local_res8 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&CachedCVarInfoCritSec);
  FVar3 = local_res8;
  uVar5 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  pIVar6 = (IConsoleVariable *)0x0;
  if (CachedCVarInfo._8_4_ != CachedCVarInfo._52_4_) {
    lVar12 = 0x154c81c08;
    if (CachedCVarInfo._64_8_ != 0) {
      lVar12 = CachedCVarInfo._64_8_;
    }
    uVar5 = *(uint *)(lVar12 + (ulonglong)(CachedCVarInfo._72_4_ - 1 & FVar3.Number + uVar5) * 4);
    while (uVar5 != 0xffffffff) {
      pFVar10 = (FName *)((longlong)(int)uVar5 * 0x20 + CachedCVarInfo._0_8_);
      if (*pFVar10 == FVar3) {
        pIVar8 = (IConsoleVariable *)(pFVar10 + 1);
        if (pFVar10 == (FName *)0x0) {
          pIVar8 = pIVar6;
        }
        if (pIVar8 != (IConsoleVariable *)0x0) {
          pIVar6 = *(IConsoleVariable **)pIVar8;
          goto LAB_14934edcc;
        }
        break;
      }
      uVar5 = pFVar10[3].ComparisonIndex.Value;
    }
  }
  pwVar11 = L"";
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pIVar6 = (IConsoleVariable *)(*pcVar1)();
    return pIVar6;
  }
  pIVar2 = IConsoleManager::Singleton;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xc0);
  pFVar7 = ::FName::ToString(&local_res8,&local_38);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pIVar8 = (IConsoleVariable *)(*pcVar1)(pIVar2,pwVar11,1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pIVar8 != (IConsoleVariable *)0x0) {
    local_res18 = &local_res8;
    TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
                *)&CachedCVarInfo,&local_res10,(bool *)&local_res18);
    lVar12 = (longlong)(int)local_res10.Key * 0x20 + CachedCVarInfo._0_8_;
    *(IConsoleVariable **)(lVar12 + 8) = pIVar8;
    this = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
            *)(**(code **)(*(longlong *)pIVar8 + 0xe8))(pIVar8);
    FVar9 = TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
            ::AddStatic<>(this,(_func___cdecl_void_IConsoleVariable_ptr *)local_res20);
    *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)FVar9.ID;
    pIVar6 = pIVar8;
  }
LAB_14934edcc:
  LeaveCriticalSection((LPCRITICAL_SECTION)&CachedCVarInfoCritSec);
  return pIVar6;
}

// GetEnabledMaskForDeviceProfile @ 1493547b0

int __thiscall
FNiagaraPlatformSet::GetEnabledMaskForDeviceProfile
          (FNiagaraPlatformSet *this,UDeviceProfile *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UClass *this_00;
  uint uVar6;
  uint uVar7;
  char local_res19;
  uint7 in_stack_ffffffffffffffd9;
  
  this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                         ,0x17d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < *(int *)&pUVar1[3].field_0x10) {
    do {
      IsEnabled(this,(UDeviceProfile *)&stack0x00000018,(int)param_1,SUB41(uVar6,0),
                (FNiagaraPlatformSetEnabledStateDetails *)
                ((ulonglong)in_stack_ffffffffffffffd9 << 8));
      if (local_res19 != '\0') {
        if (uVar6 == 0xffffffff) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 1 << (SUB41(uVar6,0) & 0x1fU);
        }
        uVar7 = uVar7 | uVar5;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)&pUVar1[3].field_0x10);
  }
  return uVar7;
}

// GetFullQualityLevelMask @ 1493548a0

int __cdecl FNiagaraPlatformSet::GetFullQualityLevelMask(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (0 < param_1) {
    do {
      uVar1 = uVar1 | 1 << (uVar2 & 0x1f);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_1);
  }
  return uVar1;
}

// GetMaxQualityLevel @ 149354970

int __cdecl FNiagaraPlatformSet::GetMaxQualityLevel(void)

{
  return GNiagaraMaxQualityLevel;
}

// GetMinQualityLevel @ 149354980

int __cdecl FNiagaraPlatformSet::GetMinQualityLevel(void)

{
  return GNiagaraMinQualityLevel;
}

// GetOverridenDeviceProfiles @ 1493550e0

void __thiscall
FNiagaraPlatformSet::GetOverridenDeviceProfiles
          (FNiagaraPlatformSet *this,int param_1,
          TArray<UDeviceProfile_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UDeviceProfile_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  UDeviceProfile *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UDeviceProfileManager *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  UDeviceProfile *local_38 [2];
  
  if (param_1 == -1) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = 1 << ((byte)param_1 & 0x1f);
  }
  iVar1 = (this->DeviceProfileStates).ArrayNum;
  pFVar10 = (this->DeviceProfileStates).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x10;
LAB_149355130:
  do {
    if ((this->DeviceProfileStates).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraDeviceProfileStateEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar8 = UDeviceProfileManager::Get(false);
    pFVar9 = (pUVar8->Profiles).AllocatorInstance.Data;
    pFVar3 = pFVar9 + (longlong)(pUVar8->Profiles).ArrayNum * 8;
    if (pFVar9 != pFVar3) {
      do {
        pUVar2 = *(UDeviceProfile **)pFVar9;
        if (pUVar2->_padding_ == *(longlong *)pFVar10) {
          local_38[0] = pUVar2;
          if ((GbAllowAllDeviceProfiles == 0) && (pUVar2->bIsVisibleForAssets == 0))
          goto LAB_149355316;
          uVar6 = GetAvailableQualityMaskForDeviceProfile(pUVar2);
          if ((uVar6 != 0xffffffff) && ((uVar6 & uVar11) == 0)) goto LAB_149355316;
          if (param_1 == -1) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = 1 << ((byte)param_1 & 0x1f);
          }
          if ((*(uint *)(pFVar10 + 0xc) & uVar6) == 0) goto LAB_149355316;
          if ((*(uint *)(pFVar10 + 8) & uVar6) != 0) {
            pFVar3 = (param_2->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
               ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_2->ArrayMax * 8)) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar7 = param_2->ArrayNum;
            if (iVar7 == param_2->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            pFVar10 = pFVar10 + 0x10;
            param_2->ArrayNum = iVar7 + 1;
            *(UDeviceProfile **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                 local_38[0];
            goto LAB_149355130;
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
             ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_3->ArrayMax * 8)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == param_3->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar7 + 1;
          *(UDeviceProfile **)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_38[0];
          goto LAB_149355316;
        }
        pFVar9 = pFVar9 + 8;
      } while (pFVar9 != pFVar3);
      pFVar10 = pFVar10 + 0x10;
      goto LAB_149355130;
    }
LAB_149355316:
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// GetQualityLevel @ 1493564e0

int __cdecl FNiagaraPlatformSet::GetQualityLevel(void)

{
  int iVar1;
  
  iVar1 = QualityLevelOverride;
  if (QualityLevelOverride == -1) {
    iVar1 = CachedQualityLevel;
    if (CachedQualityLevel == -1) {
      iVar1 = GNiagaraQualityLevel;
    }
  }
  return iVar1;
}

// GetQualityLevelMaskText @ 149356510

FText * __cdecl
FNiagaraPlatformSet::GetQualityLevelMaskText(FText *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"NiagaraPlatformSet",L"QualityLevelAll",L"All");
    return __return_storage_ptr__;
  }
  if (param_1 == 0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"NiagaraPlatformSet",L"QualityLevelNone",L"None");
    return __return_storage_ptr__;
  }
  iVar1 = 0;
  do {
    if ((param_1 & 1U) != 0) goto LAB_149356580;
    iVar1 = iVar1 + 1;
    param_1 = param_1 >> 1;
  } while (param_1 != 0);
  iVar1 = -1;
LAB_149356580:
  GetQualityLevelText(__return_storage_ptr__,iVar1);
  return __return_storage_ptr__;
}

// GetQualityLevelText @ 1493565a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl FNiagaraPlatformSet::GetQualityLevelText(FText *__return_storage_ptr__,int param_1)

{
  UObject *pUVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *this;
  FText *pFVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  TSharedPtr<FCulture,1> local_18;
  
  this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((-1 < param_1) && (param_1 < *(int *)&pUVar1[3].field_0x10)) {
    uVar5 = 0;
    if (param_1 < *(int *)&pUVar1[3].field_0x10) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar3)();
        return pFVar6;
      }
    }
    plVar7 = (longlong *)((longlong)param_1 * 0x10 + *(longlong *)&pUVar1[3].field_0x8);
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (ITextData *)*plVar7;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
    }
    __return_storage_ptr__->Flags = *(uint *)(plVar7 + 1);
    return __return_storage_ptr__;
  }
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(__return_storage_ptr__,param_1,(FNumberFormattingOptions *)0x0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// InvalidateCachedData @ 14935e4f0

void __cdecl FNiagaraPlatformSet::InvalidateCachedData(void)

{
  LastDirtiedFrame = GFrameNumber;
  CachedQualityLevel = -1;
  return;
}

// IsActive @ 14935eb80

bool __thiscall FNiagaraPlatformSet::IsActive(FNiagaraPlatformSet *this)

{
  UDeviceProfileManager *pUVar1;
  UDeviceProfile *pUVar2;
  int iVar3;
  byte local_res8;
  undefined7 in_stack_ffffffffffffffe9;
  
  if ((this->LastBuiltFrame <= LastDirtiedFrame) || (this->LastBuiltFrame == 0)) {
    pUVar1 = UDeviceProfileManager::Get(false);
    pUVar2 = UDeviceProfileManager::GetPreviewDeviceProfile(pUVar1);
    if (pUVar2 == (UDeviceProfile *)0x0) {
      pUVar2 = (UDeviceProfile *)FWeakObjectPtr::Get(&GNiagaraPlatformOverride.WeakPtr);
      if (pUVar2 == (UDeviceProfile *)0x0) {
        pUVar1 = UDeviceProfileManager::Get(false);
        pUVar2 = UDeviceProfileManager::GetActiveProfile(pUVar1);
      }
    }
    iVar3 = QualityLevelOverride;
    if (QualityLevelOverride == -1) {
      iVar3 = CachedQualityLevel;
      if (CachedQualityLevel == -1) {
        iVar3 = GNiagaraQualityLevel;
      }
    }
    IsEnabled(this,(UDeviceProfile *)&local_res8,(int)pUVar2,SUB41(iVar3,0),
              (FNiagaraPlatformSetEnabledStateDetails *)CONCAT71(in_stack_ffffffffffffffe9,1));
    *(uint *)&this->field_0x24 =
         *(uint *)&this->field_0x24 ^
         ((uint)local_res8 ^ this->bEnabledForCurrentProfileAndEffectQuality) & 1;
    this->LastBuiltFrame = GFrameNumber;
  }
  return this->bEnabledForCurrentProfileAndEffectQuality;
}

// IsEnabled @ 14935ec40

FNiagaraPlatformSetEnabledState __thiscall
FNiagaraPlatformSet::IsEnabled
          (FNiagaraPlatformSet *this,UDeviceProfile *param_1,int param_2,bool param_3,
          FNiagaraPlatformSetEnabledStateDetails *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  FNiagaraPlatformSetEnabledState FVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FNiagaraPlatformSetCVarCondition *this_00;
  ulonglong uVar14;
  undefined4 in_register_00000084;
  UDeviceProfile *pUVar15;
  UDeviceProfile *pUVar16;
  uint uVar17;
  undefined7 in_register_00000089;
  uint uVar18;
  FNiagaraPlatformSetCVarCondition *pFVar19;
  bool local_res10 [8];
  UDeviceProfile *local_res18;
  uint local_res20;
  bool local_58 [24];
  
  pUVar15 = (UDeviceProfile *)CONCAT44(in_register_00000084,param_2);
  uVar17 = (uint)CONCAT71(in_register_00000089,param_3);
  *(undefined2 *)&param_1->_padding_ = 0x101;
  uVar14 = CONCAT71(in_register_00000089,param_3) & 0xffffffff;
  local_res18 = pUVar15;
  local_res20 = uVar17;
  if ((pUVar15 == (UDeviceProfile *)0x0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5046260443048313939>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                         ,0x453,"DeviceProfile"), bVar5)) {
    pcVar3 = (code *)swi(3);
    FVar10 = (FNiagaraPlatformSetEnabledState)(*pcVar3)();
    return FVar10;
  }
  uVar11 = GetActiveQualityMaskForDeviceProfile(pUVar15);
  uVar12 = GetAvailableQualityMaskForDeviceProfile(pUVar15);
  if (uVar17 == 0xffffffff) {
    uVar18 = 0xffffffff;
  }
  else {
    uVar18 = 1 << param_3;
  }
  uVar12 = uVar18 & uVar12;
  if ((uVar12 == 0) || ((uVar18 & this->QualityLevelMask) == 0)) {
    uVar7 = 0;
    uVar6 = 0;
  }
  else if (((uVar18 & uVar11) == 0) && (param_4._0_1_ == false)) {
    uVar6 = 0;
    uVar7 = 1;
  }
  else {
    uVar6 = 1;
    uVar7 = 1;
  }
  *(undefined1 *)&param_1->_padding_ = uVar6;
  *(undefined1 *)((longlong)&param_1->_padding_ + 1) = uVar7;
  iVar1 = (this->DeviceProfileStates).ArrayNum;
  if ((0 < iVar1) && (pUVar15 != (UDeviceProfile *)0x0)) {
    pFVar2 = (this->DeviceProfileStates).AllocatorInstance.Data;
    pUVar16 = pUVar15;
    do {
      if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x10) {
        pFVar13 = pFVar2;
        do {
          if (*(longlong *)pFVar13 == pUVar16->_padding_) {
            if (uVar17 == 0xffffffff) {
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = 1 << param_3;
            }
            if ((*(uint *)(pFVar13 + 0xc) & uVar11) != 0) {
              if ((*(uint *)(pFVar13 + 8) & uVar11) == 0) {
                *(undefined2 *)&param_1->_padding_ = 0;
              }
              else if (uVar12 != 0) {
                *(undefined2 *)&param_1->_padding_ = 0x101;
              }
              goto LAB_14935ed8e;
            }
            break;
          }
          pFVar13 = pFVar13 + 0x10;
        } while (pFVar13 != pFVar2 + (longlong)iVar1 * 0x10);
      }
      pUVar16 = (pUVar16->Parent).field0_0x0.DebugPtr;
    } while (pUVar16 != (UDeviceProfile *)0x0);
  }
LAB_14935ed8e:
  iVar1 = (this->CVarConditions).ArrayNum;
  this_00 = (FNiagaraPlatformSetCVarCondition *)(this->CVarConditions).AllocatorInstance.Data;
  pFVar19 = this_00 + iVar1;
  while( true ) {
    if ((this->CVarConditions).ArrayNum != iVar1) {
      local_58[1] = false;
      `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_58 + 1);
    }
    if (this_00 == pFVar19) break;
    local_58[0] = true;
    local_res10[0] = false;
    bVar8 = FNiagaraPlatformSetCVarCondition::Evaluate
                      (this_00,pUVar15,(int)uVar14,param_4._0_1_,local_58,local_res10);
    bVar4 = local_58[0];
    bVar5 = local_res10[0];
    if (((local_58[0] == false) && (local_res10[0] == false)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5046260443048313548>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                           ,0x2cc,"bCanEverPass || bCanEverFail"), bVar9)) {
      pcVar3 = (code *)swi(3);
      FVar10 = (FNiagaraPlatformSetEnabledState)(*pcVar3)();
      return FVar10;
    }
    if (this_00->PassResponse == Enable) {
      if (uVar12 != 0) {
        if (bVar8) {
          *(undefined1 *)&param_1->_padding_ = 1;
        }
        if (bVar4 != false) {
          *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
        }
      }
    }
    else if (this_00->PassResponse == Disable) {
      if (bVar8) {
        *(undefined1 *)&param_1->_padding_ = 0;
      }
      if (bVar5 == false) {
        *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 0;
      }
    }
    if (this_00->FailResponse == Enable) {
      if (uVar12 != 0) {
        if (!bVar8) {
          *(undefined1 *)&param_1->_padding_ = 1;
        }
        if (bVar5 != false) {
          *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 1;
        }
      }
    }
    else if (this_00->FailResponse == Disable) {
      if (!bVar8) {
        *(undefined1 *)&param_1->_padding_ = 0;
      }
      if (bVar4 == false) {
        *(undefined1 *)((longlong)&param_1->_padding_ + 1) = 0;
      }
    }
    uVar14 = (ulonglong)local_res20;
    this_00 = this_00 + 1;
    pUVar15 = local_res18;
  }
  return SUB82(param_1,0);
}

// IsEnabledForDeviceProfile @ 14935ef00

int __thiscall
FNiagaraPlatformSet::IsEnabledForDeviceProfile(FNiagaraPlatformSet *this,UDeviceProfile *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UClass *this_00;
  uint uVar6;
  uint uVar7;
  char local_res19;
  uint7 in_stack_ffffffffffffffd9;
  
  this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                         ,399,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < *(int *)&pUVar1[3].field_0x10) {
    do {
      IsEnabled(this,(UDeviceProfile *)&stack0x00000018,(int)param_1,SUB41(uVar6,0),
                (FNiagaraPlatformSetEnabledStateDetails *)
                ((ulonglong)in_stack_ffffffffffffffd9 << 8));
      if (local_res19 != '\0') {
        if (uVar6 == 0xffffffff) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 1 << (SUB41(uVar6,0) & 0x1fU);
        }
        uVar7 = uVar7 | uVar5;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)&pUVar1[3].field_0x10);
  }
  return uVar7;
}

// IsEnabledForPlatform @ 14935eff0

bool __thiscall
FNiagaraPlatformSet::IsEnabledForPlatform(FNiagaraPlatformSet *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UObject *pUVar5;
  code *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  UDeviceProfileManager *pUVar9;
  UClass *pUVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 local_res18 [9];
  char local_res21;
  uint7 in_stack_ffffffffffffffa9;
  
  pUVar9 = UDeviceProfileManager::Get(false);
  pFVar13 = (pUVar9->Profiles).AllocatorInstance.Data;
  iVar2 = (pUVar9->Profiles).ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar2 * 8;
  do {
    if ((pUVar9->Profiles).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDeviceProfile>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar13 == pFVar1) {
      return false;
    }
    lVar4 = *(longlong *)pFVar13;
    if (lVar4 != 0) {
      pUVar10 = Z_Construct_UClass_UDeviceProfile_NoRegister();
      iVar11 = (int)pUVar10->_padding_;
      if ((iVar11 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar11 * 8)
          == &pUVar10->_padding_)) {
        iVar11 = *(int *)(lVar4 + 0x48);
        iVar3 = (param_1->Data).ArrayNum;
        if (iVar11 == iVar3) {
          if (1 < iVar11) {
            iVar11 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar4 + 0x40),
                                (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar14 = iVar11 == 0;
            goto LAB_14935f0af;
          }
        }
        else {
          bVar14 = iVar11 + iVar3 == 1;
LAB_14935f0af:
          if (!bVar14) goto LAB_14935f16f;
        }
        pUVar10 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
        if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar10);
        }
        pUVar5 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
        if ((pUVar5 == (UObject *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Settings",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                                ,399,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return (bool)uVar7;
        }
        uVar12 = 0;
        iVar11 = 0;
        if (0 < *(int *)&pUVar5[3].field_0x10) {
          do {
            IsEnabled(this,(UDeviceProfile *)(local_res18 + 8),(int)lVar4,SUB41(iVar11,0),
                      (FNiagaraPlatformSetEnabledStateDetails *)
                      ((ulonglong)in_stack_ffffffffffffffa9 << 8));
            if (local_res21 != '\0') {
              if (iVar11 == -1) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = 1 << (SUB41(iVar11,0) & 0x1fU);
              }
              uVar12 = uVar12 | uVar8;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)&pUVar5[3].field_0x10);
          if (uVar12 != 0) {
            return true;
          }
        }
      }
    }
LAB_14935f16f:
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// IsEnabledForQualityLevel @ 14935f1a0

bool __thiscall FNiagaraPlatformSet::IsEnabledForQualityLevel(FNiagaraPlatformSet *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UDeviceProfileManager *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [9];
  char local_res21;
  uint7 in_stack_ffffffffffffffb9;
  
  pUVar5 = UDeviceProfileManager::Get(false);
  pFVar7 = (pUVar5->Profiles).AllocatorInstance.Data;
  iVar2 = (pUVar5->Profiles).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar5->Profiles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDeviceProfile>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar7 == pFVar1) break;
    lVar4 = *(longlong *)pFVar7;
    if (lVar4 != 0) {
      pUVar6 = Z_Construct_UClass_UDeviceProfile_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
           == &pUVar6->_padding_)) &&
         (IsEnabled(this,(UDeviceProfile *)(local_res18 + 8),(int)lVar4,SUB41(param_1,0),
                    (FNiagaraPlatformSetEnabledStateDetails *)
                    ((ulonglong)in_stack_ffffffffffffffb9 << 8)), local_res21 != '\0')) {
        return true;
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  return false;
}

// OnCVarChanged @ 14935fb60

void __cdecl FNiagaraPlatformSet::OnCVarChanged(IConsoleVariable *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  FName local_res10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  CachedQualityLevel = -1;
  LastDirtiedFrame = GFrameNumber;
  EnterCriticalSection((LPCRITICAL_SECTION)&CachedCVarInfoCritSec);
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
              *)&CachedCVarInfo);
  local_18 = (TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
              *)&CachedCVarInfo;
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  uVar4 = local_78._28_4_;
  if ((int)uVar4 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      local_res10 = *(FName *)((longlong)(int)uVar3 * 0x20 + *local_48);
      if (*(IConsoleVariable **)((longlong)(int)uVar4 * 0x20 + 8 + *local_48) == param_1) {
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (&ChangedCVars,&local_res10);
        TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar4);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
      uVar4 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014935fcda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CachedCVarInfoCritSec);
  return;
}

// OnCVarUnregistered @ 14935fcf0

void __cdecl FNiagaraPlatformSet::OnCVarUnregistered(IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *this_00;
  uint uVar8;
  ulonglong uVar9;
  FName local_res18 [2];
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  *local_98;
  char local_90;
  char cStack_8f;
  FDestructionSentinel local_88;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  CachedQualityLevel = -1;
  LastDirtiedFrame = GFrameNumber;
  EnterCriticalSection((LPCRITICAL_SECTION)&CachedCVarInfoCritSec);
  TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_70,
             (TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
              *)&CachedCVarInfo);
  local_98 = (TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
              *)&CachedCVarInfo;
  local_90 = '\0';
  cStack_8f = '\0';
  stack0xffffffffffffff48 = local_70._16_16_;
  auStack_c0._0_8_ = local_70._8_8_;
  local_a8 = local_50;
  pTStack_a0 = pTStack_48;
  uVar5 = local_70._24_8_ >> 0x20;
  if (local_70._28_4_ < *(int *)(local_70._16_8_ + 0x18)) {
    do {
      local_res18[0] = *(FName *)((longlong)(int)uVar5 * 0x20 + *(longlong *)local_70._0_8_);
      lVar7 = (longlong)(int)uStack_ac * 0x20 + *(longlong *)local_70._0_8_;
      if (*(IConsoleVariable **)(lVar7 + 8) == param_1) {
        this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (**(code **)(*(longlong *)param_1 + 0xe8))(param_1);
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                     (FWriteAccessScope *)&local_88);
          uVar5 = 0;
          uVar9 = 0;
          if (0 < (this->InvocationList).ArrayNum) {
            do {
              uVar6 = (uint)uVar5;
              uVar8 = 0;
              if ((int)uVar6 < (this->InvocationList).ArrayNum) {
                uVar8 = ~uVar6 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              this_00 = (this->InvocationList).AllocatorInstance.Data + uVar9;
              if (((*(int *)&this_00[8].field_0x0 != 0) &&
                  (*(longlong **)&this_00->field_0x0 != (longlong *)0x0)) &&
                 (plVar4 = (longlong *)(**(code **)(**(longlong **)&this_00->field_0x0 + 0x40))(),
                 *plVar4 == lVar7)) {
                if ((*(int *)&this_00[8].field_0x0 != 0) &&
                   (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
                  (**(code **)**(undefined8 **)&this_00->field_0x0)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)this_00,0,0,0x10);
                  *(undefined4 *)&this_00[8].field_0x0 = 0;
                }
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          (this,false);
                break;
              }
              uVar5 = (ulonglong)(uVar6 + 1);
              uVar9 = uVar9 + 0x10;
            } while ((int)(uVar6 + 1) < (this->InvocationList).ArrayNum);
          }
          if (local_88.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
          }
        }
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (&ChangedCVars,local_res18);
        TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_a0,uStack_ac);
        local_90 = '\x01';
      }
      uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
      uVar5 = (ulonglong)uStack_ac;
    } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
    if ((local_90 != '\0') && (cStack_8f != '\0')) {
      uVar8 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar3 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_98->HashSize < iVar3)) || (iVar3 < local_98->HashSize)) {
        local_98->HashSize = iVar3;
        TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_98);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014935ffbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CachedCVarInfoCritSec);
  return;
}

// RefreshScalability @ 149364470

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FNiagaraPlatformSet::RefreshScalability(void)

{
  UNiagaraSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UNiagaraEffectType *this;
  longlong lVar7;
  char local_res8 [8];
  TObjectIterator<UNiagaraSystem> local_38;
  TObjectIterator<UNiagaraSystem> local_20;
  
  if (GNiagaraQualityLevel != CachedQualityLevel) {
    LastDirtiedFrame = GFrameNumber;
    CachedQualityLevel = GNiagaraQualityLevel;
    local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectArray.ArrayNum = 0;
    local_38.ObjectArray.ArrayMax = 0;
    local_38.Index = 0xffffffff;
    EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    GetObjectsOfClass(pUVar6,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UNiagaraSystem>::Advance(&local_38);
      lVar7 = (longlong)local_38.Index;
      if ((local_38.Index < 0) || (local_38.ObjectArray.ArrayNum <= local_38.Index)) break;
      uVar5 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_38.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UNiagaraSystem **)(local_38.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
      if ((pUVar1 == (UNiagaraSystem *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("System",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                             ,0x3ef,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UNiagaraSystem::UpdateScalability(pUVar1);
    }
    if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
    }
    if ((-1 < ChangedCVars.ArrayMax) || (ChangedCVars.ArrayNum = 0, ChangedCVars.ArrayMax == 0))
    goto LAB_149364721;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&ChangedCVars.AllocatorInstance,0,&ChangedCVars.ArrayMax);
  }
  if (0 < ChangedCVars.ArrayNum) {
    LastDirtiedFrame = GFrameNumber;
    CachedQualityLevel = -1;
    local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.ObjectArray.ArrayNum = 0;
    local_20.ObjectArray.ArrayMax = 0;
    local_20.Index = 0xffffffff;
    EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    GetObjectsOfClass(pUVar6,&local_20.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UNiagaraSystem>::Advance(&local_20);
      lVar7 = (longlong)local_20.Index;
      if ((local_20.Index < 0) || (local_20.ObjectArray.ArrayNum <= local_20.Index)) break;
      uVar5 = 0;
      if (local_20.Index < local_20.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_20.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UNiagaraSystem **)(local_20.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
      if ((pUVar1 == (UNiagaraSystem *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("System",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                             ,0x401,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8[0] = '\0';
      UNiagaraSystem::
      ForEachPlatformSet<_FNiagaraPlatformSet::RefreshScalability_::__l19::<lambda_1>_>
                (pUVar1,(<lambda_1>)local_res8);
      this = UNiagaraSystem::GetEffectType(pUVar1);
      if (this != (UNiagaraEffectType *)0x0) {
        UNiagaraEffectType::
        ForEachPlatformSet<_FNiagaraPlatformSet::RefreshScalability_::__l19::<lambda_1>_>
                  (this,(<lambda_1>)local_res8);
      }
      if (local_res8[0] != '\0') {
        UNiagaraSystem::UpdateScalability(pUVar1);
      }
    }
    if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
    }
  }
LAB_149364721:
  ChangedCVars.ArrayNum = 0;
  if ((ChangedCVars.ArrayMax < 0) && (ChangedCVars.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&ChangedCVars.AllocatorInstance,0,&ChangedCVars.ArrayMax);
  }
  return;
}

// SetNiagaraQualityLevelOverride @ 14936a5d0

void __cdecl FNiagaraPlatformSet::SetNiagaraQualityLevelOverride(int param_1)

{
  if (param_1 != QualityLevelOverride) {
    LastDirtiedFrame = GFrameNumber;
    CachedQualityLevel = -1;
    QualityLevelOverride = param_1;
    RefreshScalability();
    return;
  }
  return;
}

// ShouldPruneEmittersOnCook @ 14936ed90

bool __cdecl FNiagaraPlatformSet::ShouldPruneEmittersOnCook(FString *param_1)

{
  return GbPruneEmittersOnCook != 0;
}

