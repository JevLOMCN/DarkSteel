// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// FEnvQueryDebugProfileData @ 146f28e50

FEnvQueryDebugProfileData * __thiscall
FEnvQueryDebugProfileData::FEnvQueryDebugProfileData
          (FEnvQueryDebugProfileData *this,FEnvQueryDebugProfileData *param_1)

{
  int *piVar1;
  TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FOptionStat *pFVar4;
  FOptionData *pFVar5;
  
  piVar1 = &(this->OptionStats).ArrayMax;
  (this->OptionStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->OptionStats).ArrayNum;
  pFVar4 = (FOptionStat *)(param_1->OptionStats).AllocatorInstance.Data;
  (this->OptionStats).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FEnvQueryDebugProfileData::FOptionStat,FEnvQueryDebugProfileData::FOptionStat,int>
              ((this->OptionStats).AllocatorInstance.Data,pFVar4,iVar3);
  }
  pTVar2 = &this->OptionData;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OptionData).ArrayMax;
  iVar3 = (param_1->OptionData).ArrayNum;
  pFVar5 = (FOptionData *)(param_1->OptionData).AllocatorInstance.Data;
  (this->OptionData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FEnvQueryDebugProfileData::FOptionData,FEnvQueryDebugProfileData::FOptionData,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// operator= @ 146f2fcb0

FEnvQueryDebugProfileData * __thiscall
FEnvQueryDebugProfileData::operator=
          (FEnvQueryDebugProfileData *this,FEnvQueryDebugProfileData *param_1)

{
  int *piVar1;
  int iVar2;
  FOptionStat *pFVar3;
  
  if (this != param_1) {
    DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
              ((FOptionStat *)(this->OptionStats).AllocatorInstance.Data,
               (this->OptionStats).ArrayNum);
    iVar2 = (param_1->OptionStats).ArrayNum;
    piVar1 = &(this->OptionStats).ArrayMax;
    pFVar3 = (FOptionStat *)(param_1->OptionStats).AllocatorInstance.Data;
    (this->OptionStats).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FEnvQueryDebugProfileData::FOptionStat,FEnvQueryDebugProfileData::FOptionStat,int>
                ((this->OptionStats).AllocatorInstance.Data,pFVar3,iVar2);
    }
  }
  TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_>::operator=
            (&this->OptionData,&param_1->OptionData);
  return this;
}

// Add @ 146f340f0

void __thiscall
FEnvQueryDebugProfileData::Add(FEnvQueryDebugProfileData *this,FEnvQueryDebugProfileData *param_1)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint local_res18;
  
  iVar6 = (this->OptionStats).ArrayNum;
  iVar8 = (param_1->OptionStats).ArrayNum;
  if (iVar6 < iVar8) {
    TArray<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->OptionStats,iVar8 - iVar6);
  }
  iVar6 = (param_1->OptionStats).ArrayNum;
  local_res18 = 0;
  if (0 < iVar6) {
    lVar14 = 0;
    do {
      uVar9 = 0;
      if ((int)local_res18 < iVar6) {
        uVar9 = ~local_res18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->OptionStats).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)local_res18 < (this->OptionStats).ArrayNum) {
        uVar9 = ~local_res18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (this->OptionStats).AllocatorInstance.Data + lVar14;
      if (*(int *)&pFVar12[8].field_0x0 < *(int *)(pFVar3 + lVar14 + 8)) {
        iVar8 = *(int *)(pFVar3 + lVar14 + 8) - *(int *)&pFVar12[8].field_0x0;
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar8,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 8),
                           (int *)(pFVar12 + 0xc));
        memset((void *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar6 * 8),0,
               (longlong)iVar8 << 3);
      }
      uVar9 = 0;
      *(int *)&pFVar12[0x10].field_0x0 =
           *(int *)&pFVar12[0x10].field_0x0 + *(int *)(pFVar3 + lVar14 + 0x10);
      lVar10 = 0;
      iVar6 = *(int *)(pFVar3 + lVar14 + 8);
      if (0 < iVar6) {
        lVar13 = 0;
        do {
          uVar11 = ~uVar9 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar9 < iVar6) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar2 = *(float *)(*(longlong *)(pFVar3 + lVar14) + lVar13);
          uVar7 = 0;
          if ((int)uVar9 < *(int *)&pFVar12[8].field_0x0) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)(*(longlong *)&pFVar12->field_0x0 + lVar10 * 8) =
               fVar2 + *(float *)(*(longlong *)&pFVar12->field_0x0 + lVar10 * 8);
          uVar7 = 0;
          if ((int)uVar9 < *(int *)(pFVar3 + lVar14 + 8)) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = *(int *)(*(longlong *)(pFVar3 + lVar14) + 4 + lVar10 * 8);
          uVar7 = 0;
          if ((int)uVar9 < *(int *)&pFVar12[8].field_0x0) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar9 = uVar9 + 1;
          lVar13 = lVar13 + 8;
          piVar1 = (int *)(*(longlong *)&pFVar12->field_0x0 + lVar10 * 8 + 4);
          *piVar1 = *piVar1 + iVar6;
          lVar10 = lVar10 + 1;
          iVar6 = *(int *)(pFVar3 + lVar14 + 8);
        } while ((int)uVar9 < iVar6);
      }
      local_res18 = local_res18 + 1;
      iVar6 = (param_1->OptionStats).ArrayNum;
      lVar14 = lVar14 + 0x18;
    } while ((int)local_res18 < iVar6);
  }
  if ((this->OptionData).ArrayNum < (param_1->OptionData).ArrayNum) {
    TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_>::operator=
              (&this->OptionData,&param_1->OptionData);
  }
  return;
}

