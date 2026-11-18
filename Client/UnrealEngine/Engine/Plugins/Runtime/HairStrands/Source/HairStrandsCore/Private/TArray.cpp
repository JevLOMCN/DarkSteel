// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 63

// operator= @ 14dfb0ec0

TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 14dfb0f60

TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FHairGroupsCardsSourceDescription *pFVar3;
  
  if (this != param_1) {
    DestructItems<FHairGroupsCardsSourceDescription,int>
              ((FHairGroupsCardsSourceDescription *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FHairGroupsCardsSourceDescription *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FHairGroupsCardsSourceDescription,FHairGroupsCardsSourceDescription,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14dfb1000

TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x28);
    }
  }
  return this;
}

// operator= @ 14dfb10a0

TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FHairGroupsLOD *pFVar3;
  
  if (this != param_1) {
    DestructItems<FHairGroupsLOD,int>
              ((FHairGroupsLOD *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FHairGroupsLOD *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FHairGroupsLOD,FHairGroupsLOD,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14dfb1140

TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FHairGroupsMaterial *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FHairGroupsMaterial *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FHairGroupsMaterial,FHairGroupsMaterial,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// operator= @ 14dfb11d0

TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FHairGroupsMeshesSourceDescription *pFVar3;
  
  if (this != param_1) {
    DestructItems<FHairGroupsMeshesSourceDescription,int>
              ((FHairGroupsMeshesSourceDescription *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FHairGroupsMeshesSourceDescription *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FHairGroupsMeshesSourceDescription,FHairGroupsMeshesSourceDescription,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14dfb1270

TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FHairGroupsPhysics *pFVar3;
  
  if (this != param_1) {
    DestructItems<FHairGroupsPhysics,int>
              ((FHairGroupsPhysics *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FHairGroupsPhysics *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2e8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FHairGroupsPhysics,FHairGroupsPhysics,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14dfb1310

TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FHairGroupsRendering *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FHairGroupsRendering *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FHairGroupsRendering,FHairGroupsRendering,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// Init @ 14dfcb280

void __thiscall
TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::Init
          (TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *this,
          FHairGroupInfoWithVisibility *param_1,int param_2)

{
  int *piVar1;
  FHairGroupInfoWithVisibility *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  DestructItems<FHairGroupInfoWithVisibility,int>
            ((FHairGroupInfoWithVisibility *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHairGroupInfoWithVisibility *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      FHairGroupInfoWithVisibility::FHairGroupInfoWithVisibility
                ((FHairGroupInfoWithVisibility *)
                 ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x40),param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Init @ 14dfcb3b0

void __thiscall
TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::Init
          (TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *this,
          FHairGroupPlatformData *param_1,int param_2)

{
  int *piVar1;
  FHairGroupPlatformData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  DestructItems<FHairGroupPlatformData,int>
            ((FHairGroupPlatformData *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2000,0x10,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHairGroupPlatformData *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2000,0x10,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      FHairGroupPlatformData::FHairGroupPlatformData
                ((FHairGroupPlatformData *)((this->AllocatorInstance).Data + (longlong)iVar5 * 2000)
                 ,param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Init @ 14dfcb4e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FHairGroupResources,TSizedDefaultAllocator<32>_>::Init
          (TArray<FHairGroupResources,TSizedDefaultAllocator<32>_> *this,
          FHairGroupResources *param_1,int param_2)

{
  int *piVar1;
  FHairGroupResources *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  DestructItems<FHairGroupResources,int>
            ((FHairGroupResources *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHairGroupResources *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      FHairGroupResources::FHairGroupResources
                ((FHairGroupResources *)((this->AllocatorInstance).Data + (longlong)iVar5 * 0x58),
                 param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Init @ 14dfcb610

void __thiscall
TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_>::Init
          (TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *this,
          FHairGroupsInterpolation *param_1,int param_2)

{
  int *piVar1;
  FHairGroupsInterpolation *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FHairDecimationSettings FVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHairGroupsInterpolation *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = this->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x428,&this->AllocatorInstance,piVar1);
      }
      lVar9 = (longlong)iVar8;
      this->ArrayNum = iVar8 + 1;
      FVar5 = *(FHairDecimationSettings *)&param_1->InterpolationSettings;
      pFVar3 = (this->AllocatorInstance).Data;
      *(FHairDecimationSettings *)(pFVar3 + lVar9 * 0x28) = param_1->DecimationSettings;
      ((FHairDecimationSettings *)(pFVar3 + lVar9 * 0x28))[1] = FVar5;
      uVar6 = *(undefined8 *)&(param_1->InterpolationSettings).InterpolationQuality;
      *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x10) =
           *(undefined8 *)&(param_1->InterpolationSettings).RiggedGuideNumCurves;
      *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x10 + 8) = uVar6;
      *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x20) =
           *(undefined8 *)&(param_1->RiggingSettings).NumCurves_DEPRECATED;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// Init @ 14dfcb740

void __thiscall
TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::Init
          (TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *this,FHairGroupsLOD *param_1,
          int param_2)

{
  int *piVar1;
  FHairGroupsLOD *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  DestructItems<FHairGroupsLOD,int>((FHairGroupsLOD *)(this->AllocatorInstance).Data,this->ArrayNum)
  ;
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHairGroupsLOD *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      FHairGroupsLOD::FHairGroupsLOD
                ((FHairGroupsLOD *)((this->AllocatorInstance).Data + (longlong)iVar5 * 0x18),param_1
                );
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Init @ 14dfcb870

void __thiscall
TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::Init
          (TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *this,FHairGroupsPhysics *param_1,
          int param_2)

{
  int *piVar1;
  FHairGroupsPhysics *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  DestructItems<FHairGroupsPhysics,int>
            ((FHairGroupsPhysics *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2e8,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHairGroupsPhysics *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x2e8,8,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      FHairGroupsPhysics::FHairGroupsPhysics
                ((FHairGroupsPhysics *)((this->AllocatorInstance).Data + (longlong)iVar5 * 0x2e8),
                 param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Init @ 14dfcb9a0

void __thiscall
TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_>::Init
          (TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *this,
          FHairGroupsRendering *param_1,int param_2)

{
  int *piVar1;
  FHairGroupsRendering *pFVar2;
  FName FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHairGroupsRendering *)(this->AllocatorInstance).Data;
      if (((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = this->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar8 + 1;
      pFVar9 = (FName *)((this->AllocatorInstance).Data + (longlong)iVar8 * 0x30);
      *pFVar9 = param_1->MaterialSlotName;
      FVar3 = (FName)(param_1->Material).field0_0x0.DebugPtr;
      pFVar9[1] = FVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      fVar5 = (param_1->GeometrySettings).HairRootScale;
      fVar6 = (param_1->GeometrySettings).HairTipScale;
      pFVar9[2] = *(FName *)&param_1->GeometrySettings;
      pFVar9[3].ComparisonIndex = (FNameEntryId)fVar5;
      pFVar9[3].Number = (uint)fVar6;
      fVar5 = (param_1->ShadowSettings).HairRaytracingRadiusScale;
      pFVar9[4].ComparisonIndex = (FNameEntryId)(param_1->ShadowSettings).HairShadowDensity;
      pFVar9[4].Number = (uint)fVar5;
      pFVar9[5].ComparisonIndex.Value =
           *(uint *)&(param_1->ShadowSettings).bUseHairRaytracingGeometry;
      *(FHairAdvancedRenderingSettings *)&pFVar9[5].Number = param_1->AdvancedSettings;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// RemoveAtImpl @ 14dfd5980

void __thiscall
TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<GroomBinding_Transfer::FTriangleGrid2D::FCell,int>((FCell *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5a00

void __thiscall
TArray<GroomBinding_RootProjection::FTriangleGrid::FCell,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<GroomBinding_RootProjection::FTriangleGrid::FCell,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<GroomBinding_RootProjection::FTriangleGrid::FCell,int>((FCell *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5a80

void __thiscall
TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FHairGroupInfoWithVisibility *_Dst;
  
  _Dst = (FHairGroupInfoWithVisibility *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x40)
  ;
  DestructItems<FHairGroupInfoWithVisibility,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5b00

void __thiscall
TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FHairGroupPlatformData *_Dst;
  
  _Dst = (FHairGroupPlatformData *)((this->AllocatorInstance).Data + (longlong)param_1 * 2000);
  DestructItems<FHairGroupPlatformData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 2000);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5b80

void __thiscall
TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FHairGroupPlatformData *_Dst;
  
  _Dst = (FHairGroupPlatformData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<UGroomBindingAsset::FHairGroupPlatformData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5bf0

void __thiscall
TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FHairGroupsLOD *_Dst;
  int iVar1;
  
  _Dst = (FHairGroupsLOD *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FHairGroupsLOD,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5c70

void __thiscall
TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FHairGroupsPhysics *_Dst;
  
  _Dst = (FHairGroupsPhysics *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x2e8);
  DestructItems<FHairGroupsPhysics,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x2e8);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5cf0

void __thiscall
TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FHairStrandsRootBulkData *_Dst;
  
  _Dst = (FHairStrandsRootBulkData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x1d8);
  DestructItems<FHairStrandsRootBulkData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x1d8);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5d70

void __thiscall
TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FHairStrandsRootData *_Dst;
  
  _Dst = (FHairStrandsRootData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xb8);
  DestructItems<FHairStrandsRootData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xb8);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5df0

void __thiscall
TArray<FHairGroupPlatformData::FCards::FLOD,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairGroupPlatformData::FCards::FLOD,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FLOD *_Dst;
  
  _Dst = (FLOD *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x428);
  DestructItems<FHairGroupPlatformData::FCards::FLOD,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x428);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5e70

void __thiscall
TArray<FHairGroupPlatformData::FMeshes::FLOD,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairGroupPlatformData::FMeshes::FLOD,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FLOD *_Dst;
  
  _Dst = (FLOD *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x98);
  DestructItems<FHairGroupPlatformData::FMeshes::FLOD,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x98);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5ef0

void __thiscall
TArray<TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5f70

void __thiscall
TArray<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd5ff0

void __thiscall
TArray<TRefCountPtr<FRHISamplerState>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TRefCountPtr<FRHISamplerState>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TRefCountPtr<FRHISamplerState>,int>((TRefCountPtr<FRHISamplerState> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dfd6060

void __thiscall
TArray<TRefCountPtr<FRHITextureReference>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TRefCountPtr<FRHITextureReference>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TRefCountPtr<FRHITextureReference>,int>
            ((TRefCountPtr<FRHITextureReference> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14dfd7060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<GroomBinding_Transfer::FTriangleGrid2D::FCell,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<GroomBinding_Transfer::FTriangleGrid2D::FCell,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14dfd7190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FGoomBindingGroupInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FGoomBindingGroupInfo,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14dfd72e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FHairGroupInfoWithVisibility,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x40,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14dfd7410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UGroomBindingAsset::FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UGroomBindingAsset::FHairGroupPlatformData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x38,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14dfd7540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1d8,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FHairStrandsRootBulkData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x1d8,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1d8,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14dfd7670

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
SetNum(TArray<TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14dfd77a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TRefCountPtr<FRHISamplerState>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TRefCountPtr<FRHISamplerState>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TRefCountPtr<FRHISamplerState>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 8,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14dfd78c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TRefCountPtr<FRHITextureReference>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TRefCountPtr<FRHITextureReference>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TRefCountPtr<FRHITextureReference>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 8,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// AddUniqueImpl<UGroomComponent_*_const_&> @ 14dfe57e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
TArray<UGroomComponent_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UGroomComponent_*_const_&>
          (TArray<UGroomComponent_*,TSizedDefaultAllocator<32>_> *this,UGroomComponent **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UGroomComponent **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UGroomComponent **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// Append<TArrayView<unsigned_int_const_,int>_> @ 14dfe5a10

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Append<TArrayView<unsigned_int_const_,int>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_int_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1->DataPtr,(longlong)iVar1 << 2)
  ;
  return;
}

// TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> @ 14dfed260

TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<std::atomic<float>,TSizedDefaultAllocator<32>_>::
TArray<std::atomic<float>,TSizedDefaultAllocator<32>_>
          (TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> @ 14dff0e80

void __thiscall
TArray<std::atomic<float>,TSizedDefaultAllocator<32>_>::
~TArray<std::atomic<float>,TSizedDefaultAllocator<32>_>
          (TArray<std::atomic<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 14dff2f00

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// Init @ 14e01a120

void __thiscall
TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_>::Init
          (TArray<GroomBuilder_Voxelization::FCoverageScale,TSizedDefaultAllocator<32>_> *this,
          FCoverageScale *param_1,int param_2)

{
  int *piVar1;
  FCoverageScale *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FCoverageScale *)(this->AllocatorInstance).Data;
      if (((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      *(FCoverageScale *)((this->AllocatorInstance).Data + (longlong)iVar5 * 8) = *param_1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Init @ 14e01a240

void __thiscall
TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Init
          (TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pTVar2 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data;
      if (((pTVar2 <= param_1) && (param_1 < pTVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)&pFVar6->field_0x0 = 0;
      iVar5 = param_1->ArrayNum;
      _Src = (param_1->AllocatorInstance).Data;
      *(int *)&pFVar6[8].field_0x0 = iVar5;
      if (iVar5 == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar5,0,(ForAnyElementType *)pFVar6,iVar5,(int *)(pFVar6 + 0xc));
        memcpy(*(void **)&pFVar6->field_0x0,_Src,(longlong)iVar5 << 2);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// RemoveAtImpl @ 14e0256f0

void __thiscall
TArray<`HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData'::__l2::FCurve,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(void *this,int param_1,int param_2)

{
  int iVar1;
  FCurve *_Dst;
  
  _Dst = (FCurve *)((longlong)param_1 * 0x40 + *(longlong *)this);
  DestructItems<_HairStrandsBuilder::InternalBuildRenderCurveResourceBulkData_::__l2::FCurve,int>
            (_Dst,param_2);
  iVar1 = (*(int *)((longlong)this + 8) - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  *(int *)((longlong)this + 8) = *(int *)((longlong)this + 8) - param_2;
  return;
}

// RemoveAtImpl @ 14e025770

void __thiscall
TArray<FGroomCacheChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGroomCacheChunk,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FGroomCacheChunk *_Dst;
  
  _Dst = (FGroomCacheChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FGroomCacheChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14e0257f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FGroomCacheGroupData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGroomCacheGroupData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FGroomCacheGroupData *_Dst;
  
  _Dst = (FGroomCacheGroupData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xa0);
  DestructItems<FGroomCacheGroupData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xa0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14e025870

void __thiscall
TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FGroomCacheInputData *_Dst;
  
  _Dst = (FGroomCacheInputData *)((this->AllocatorInstance).Data + (longlong)param_1 * 800);
  DestructItems<FGroomCacheInputData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 800);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14e0258f0

void __thiscall
TArray<FHairStrandsSceneProxy::FHairGroupMaterialProxy,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHairStrandsSceneProxy::FHairGroupMaterialProxy,TSizedDefaultAllocator<32>_> *this
          ,int param_1,int param_2)

{
  FHairGroupMaterialProxy *_Dst;
  int iVar1;
  
  _Dst = (FHairGroupMaterialProxy *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14e025970

void __thiscall
TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<GroomBuilder_Voxelization::FHairGrid::FVoxel,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<GroomBuilder_Voxelization::FHairGrid::FVoxel,int>((FVoxel *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14e028e80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPackedHairVertex,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FPackedHairVertex,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FPackedHairVertex,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,2,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14e028fc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FTranscodedHairPositions,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FTranscodedHairPositions,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x10,(longlong)iVar4 << 4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// Append<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_> @ 14e036270

void __thiscall
TArray<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_>::
Append<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_>
          (TArray<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_> *this,
          TArray<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// RemoveAtImpl @ 14e059eb0

void __thiscall
TArray<FCachedGeometry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FCachedGeometry,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FCachedGeometry *_Dst;
  
  _Dst = (FCachedGeometry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x80);
  DestructItems<FCachedGeometry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 7);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14e063cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FCachedGeometry,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FCachedGeometry,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FCachedGeometry,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x80,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> @ 14e07bf10

TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>::TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>
          (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> @ 14e07cfb0

void __thiscall
TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>::~TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>
          (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddDefaulted_GetRef @ 14e084380

FChunk * __thiscall
TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
          (TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_> *this)

{
  FChunk *pFVar1;
  int iVar2;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  pFVar1 = (FChunk *)((this->AllocatorInstance).Data + (longlong)iVar2 * 0x28);
  DefaultConstructItems<FHairStreamingRequest::FChunk,int>(pFVar1,1);
  return pFVar1;
}

// Empty @ 14e090aa0

void __thiscall
TArray<FHairCardsInterpolationVertex,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FHairCardsInterpolationVertex,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14e090af0

void __thiscall
TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14e0a9c50

void __thiscall
TArray<TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>,int>
            ((TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> *)_Dst,
             param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14e0ada80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 8,0,(longlong)(param_1 - iVar2) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

