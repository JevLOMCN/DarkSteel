// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 15

// StaticStruct @ 14deeb080

UScriptStruct * __cdecl FRetargetProfile::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetProfile.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetProfile.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetProfile,(UObject *)pUVar1,
                         L"RetargetProfile");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetProfile.OuterSingleton;
}

// GetOpSettingsByTypeInProfile<FIKRetargetAlignPoleVectorOpSettings> @ 14df0c6b0

void __thiscall
FRetargetProfile::GetOpSettingsByTypeInProfile<FIKRetargetAlignPoleVectorOpSettings>
          (FRetargetProfile *this,
          TArray<FIKRetargetAlignPoleVectorOpSettings_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings,
                         (UObject *)pUVar8,L"IKRetargetAlignPoleVectorOpSettings");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton;
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar10 = (this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x20;
  pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton;
  do {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton
      ;
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar2 = *(UScriptStruct **)(pFVar10 + 8);
    if (pUVar2 == pUVar5) {
      lVar11 = *(longlong *)(pFVar10 + 0x10);
      if ((lVar11 == 0) || (pUVar2 == (UScriptStruct *)0x0)) {
LAB_14df0c7b6:
        lVar11 = 0;
      }
      else {
        if (pUVar9 == (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_IKRig();
          pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings,
                                   (UObject *)pUVar8,L"IKRetargetAlignPoleVectorOpSettings");
          Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton =
               pUVar9;
          if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14df0c7b6;
        }
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar2->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14df0c7b6;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38[0] = lVar11;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton
      ;
    }
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// GetOpSettingsByTypeInProfile<FIKRetargetFKChainsOpSettings> @ 14df0c8a0

void __thiscall
FRetargetProfile::GetOpSettingsByTypeInProfile<FIKRetargetFKChainsOpSettings>
          (FRetargetProfile *this,
          TArray<FIKRetargetFKChainsOpSettings_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings,(UObject *)pUVar8,
                         L"IKRetargetFKChainsOpSettings");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton;
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar10 = (this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x20;
  pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton;
  do {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton;
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar2 = *(UScriptStruct **)(pFVar10 + 8);
    if (pUVar2 == pUVar5) {
      lVar11 = *(longlong *)(pFVar10 + 0x10);
      if ((lVar11 == 0) || (pUVar2 == (UScriptStruct *)0x0)) {
LAB_14df0c9a6:
        lVar11 = 0;
      }
      else {
        if (pUVar9 == (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_IKRig();
          pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings,
                                   (UObject *)pUVar8,L"IKRetargetFKChainsOpSettings");
          Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton = pUVar9;
          if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14df0c9a6;
        }
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar2->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14df0c9a6;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38[0] = lVar11;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton;
    }
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// GetOpSettingsByTypeInProfile<FIKRetargetIKChainsOpSettings> @ 14df0ca90

void __thiscall
FRetargetProfile::GetOpSettingsByTypeInProfile<FIKRetargetIKChainsOpSettings>
          (FRetargetProfile *this,
          TArray<FIKRetargetIKChainsOpSettings_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar8,
                         L"IKRetargetIKChainsOpSettings");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar10 = (this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x20;
  pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
  do {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar2 = *(UScriptStruct **)(pFVar10 + 8);
    if (pUVar2 == pUVar5) {
      lVar11 = *(longlong *)(pFVar10 + 0x10);
      if ((lVar11 == 0) || (pUVar2 == (UScriptStruct *)0x0)) {
LAB_14df0cb96:
        lVar11 = 0;
      }
      else {
        if (pUVar9 == (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_IKRig();
          pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,
                                   (UObject *)pUVar8,L"IKRetargetIKChainsOpSettings");
          Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton = pUVar9;
          if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14df0cb96;
        }
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar2->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14df0cb96;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38[0] = lVar11;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
    }
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// GetOpSettingsByTypeInProfile<FIKRetargetPelvisMotionOpSettings> @ 14df0cc80

void __thiscall
FRetargetProfile::GetOpSettingsByTypeInProfile<FIKRetargetPelvisMotionOpSettings>
          (FRetargetProfile *this,
          TArray<FIKRetargetPelvisMotionOpSettings_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar8,L"IKRetargetPelvisMotionOpSettings");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar10 = (this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x20;
  pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
  do {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar2 = *(UScriptStruct **)(pFVar10 + 8);
    if (pUVar2 == pUVar5) {
      lVar11 = *(longlong *)(pFVar10 + 0x10);
      if ((lVar11 == 0) || (pUVar2 == (UScriptStruct *)0x0)) {
LAB_14df0cd86:
        lVar11 = 0;
      }
      else {
        if (pUVar9 == (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_IKRig();
          pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                                   (UObject *)pUVar8,L"IKRetargetPelvisMotionOpSettings");
          Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
               pUVar9;
          if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14df0cd86;
        }
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar2->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14df0cd86;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38[0] = lVar11;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
    }
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// GetOpSettingsByTypeInProfile<FIKRetargetSpeedPlantingOpSettings> @ 14df0ce70

void __thiscall
FRetargetProfile::GetOpSettingsByTypeInProfile<FIKRetargetSpeedPlantingOpSettings>
          (FRetargetProfile *this,
          TArray<FIKRetargetSpeedPlantingOpSettings_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings,
                         (UObject *)pUVar8,L"IKRetargetSpeedPlantingOpSettings");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton;
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar10 = (this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x20;
  pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton;
  do {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton;
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar2 = *(UScriptStruct **)(pFVar10 + 8);
    if (pUVar2 == pUVar5) {
      lVar11 = *(longlong *)(pFVar10 + 0x10);
      if ((lVar11 == 0) || (pUVar2 == (UScriptStruct *)0x0)) {
LAB_14df0cf76:
        lVar11 = 0;
      }
      else {
        if (pUVar9 == (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_IKRig();
          pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings,
                                   (UObject *)pUVar8,L"IKRetargetSpeedPlantingOpSettings");
          Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton =
               pUVar9;
          if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14df0cf76;
        }
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar2->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14df0cf76;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38[0] = lVar11;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton;
    }
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// GetOpSettingsByTypeInProfile<FIKRetargetStrideWarpingOpSettings> @ 14df0d060

void __thiscall
FRetargetProfile::GetOpSettingsByTypeInProfile<FIKRetargetStrideWarpingOpSettings>
          (FRetargetProfile *this,
          TArray<FIKRetargetStrideWarpingOpSettings_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar8,L"IKRetargetStrideWarpingOpSettings");
  }
  pUVar5 = Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar10 = (this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar1 * 0x20;
  pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
  do {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    pUVar2 = *(UScriptStruct **)(pFVar10 + 8);
    if (pUVar2 == pUVar5) {
      lVar11 = *(longlong *)(pFVar10 + 0x10);
      if ((lVar11 == 0) || (pUVar2 == (UScriptStruct *)0x0)) {
LAB_14df0d166:
        lVar11 = 0;
      }
      else {
        if (pUVar9 == (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_IKRig();
          pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                                   (UObject *)pUVar8,L"IKRetargetStrideWarpingOpSettings");
          Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
               pUVar9;
          if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14df0d166;
        }
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar2->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14df0d166;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38[0] = lVar11;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
      pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
    }
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// FRetargetProfile @ 14df18950

FRetargetProfile * __thiscall
FRetargetProfile::FRetargetProfile(FRetargetProfile *this,FRetargetProfile *param_1)

{
  double dVar1;
  FName FVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined3 uVar10;
  EWarpingDirectionSource EVar11;
  EBasicAxis EVar12;
  
  (this->RetargetOpProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetOpProfiles).AllocatorInstance.Data =
       (param_1->RetargetOpProfiles).AllocatorInstance.Data;
  (param_1->RetargetOpProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetOpProfiles).ArrayNum = (param_1->RetargetOpProfiles).ArrayNum;
  (this->RetargetOpProfiles).ArrayMax = (param_1->RetargetOpProfiles).ArrayMax;
  (param_1->RetargetOpProfiles).ArrayNum = 0;
  (param_1->RetargetOpProfiles).ArrayMax = 0;
  this->bApplyTargetRetargetPose = param_1->bApplyTargetRetargetPose;
  this->TargetRetargetPoseName = param_1->TargetRetargetPoseName;
  this->bApplySourceRetargetPose = param_1->bApplySourceRetargetPose;
  this->SourceRetargetPoseName = param_1->SourceRetargetPoseName;
  this->bForceAllIKOff = param_1->bForceAllIKOff;
  this->bApplyChainSettings = param_1->bApplyChainSettings;
  *(undefined8 *)&(this->ChainSettings).field_0x0 = 0;
  *(undefined8 *)&(this->ChainSettings).field_0x8 = 0;
  *(undefined8 *)&(this->ChainSettings).field_0x20 = 0;
  *(undefined4 *)&(this->ChainSettings).field_0x28 = 0;
  *(undefined4 *)&(this->ChainSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChainSettings).field_0x34 = 0;
  *(undefined4 *)&(this->ChainSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChainSettings).field_0x40 = 0;
  *(undefined4 *)&(this->ChainSettings).field_0x48 = 0;
  TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
              *)&this->ChainSettings,
             (TSet<TTuple<FName,FTargetChainSettings>,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>,FDefaultSetAllocator>
              *)&param_1->ChainSettings);
  this->bApplyRootSettings = param_1->bApplyRootSettings;
  fVar3 = (param_1->RootSettings).TranslationAlpha;
  fVar4 = (param_1->RootSettings).BlendToSource;
  uVar5 = *(undefined4 *)&(param_1->RootSettings).field_0xc;
  (this->RootSettings).RotationAlpha = (param_1->RootSettings).RotationAlpha;
  (this->RootSettings).TranslationAlpha = fVar3;
  (this->RootSettings).BlendToSource = fVar4;
  *(undefined4 *)&(this->RootSettings).field_0xc = uVar5;
  dVar1 = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X =
       (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y = dVar1;
  fVar3 = (param_1->RootSettings).ScaleHorizontal;
  fVar4 = (param_1->RootSettings).ScaleVertical;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z =
       (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z;
  (this->RootSettings).ScaleHorizontal = fVar3;
  (this->RootSettings).ScaleVertical = fVar4;
  dVar1 = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Y;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.X =
       (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.X;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->RootSettings).RotationOffset.Pitch;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.Z =
       (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Z;
  (this->RootSettings).RotationOffset.Pitch = dVar1;
  dVar1 = (param_1->RootSettings).RotationOffset.Roll;
  (this->RootSettings).RotationOffset.Yaw = (param_1->RootSettings).RotationOffset.Yaw;
  (this->RootSettings).RotationOffset.Roll = dVar1;
  fVar3 = (param_1->RootSettings).AffectIKVertical;
  (this->RootSettings).AffectIKHorizontal = (param_1->RootSettings).AffectIKHorizontal;
  (this->RootSettings).AffectIKVertical = fVar3;
  this->bApplyGlobalSettings = param_1->bApplyGlobalSettings;
  bVar6 = (param_1->GlobalSettings).bEnableFK;
  bVar7 = (param_1->GlobalSettings).bEnableIK;
  bVar8 = (param_1->GlobalSettings).bEnablePost;
  bVar9 = (param_1->GlobalSettings).bCopyBasePose;
  uVar10 = *(undefined3 *)&(param_1->GlobalSettings).field_0x5;
  FVar2 = (param_1->GlobalSettings).CopyBasePoseRoot;
  (this->GlobalSettings).bEnableRoot = (param_1->GlobalSettings).bEnableRoot;
  (this->GlobalSettings).bEnableFK = bVar6;
  (this->GlobalSettings).bEnableIK = bVar7;
  (this->GlobalSettings).bEnablePost = bVar8;
  (this->GlobalSettings).bCopyBasePose = bVar9;
  *(undefined3 *)&(this->GlobalSettings).field_0x5 = uVar10;
  (this->GlobalSettings).CopyBasePoseRoot = FVar2;
  bVar6 = (param_1->GlobalSettings).bWarping;
  uVar10 = *(undefined3 *)&(param_1->GlobalSettings).field_0x15;
  EVar11 = (param_1->GlobalSettings).DirectionSource;
  EVar12 = (param_1->GlobalSettings).ForwardDirection;
  (this->GlobalSettings).SourceScaleFactor = (param_1->GlobalSettings).SourceScaleFactor;
  (this->GlobalSettings).bWarping = bVar6;
  *(undefined3 *)&(this->GlobalSettings).field_0x15 = uVar10;
  (this->GlobalSettings).DirectionSource = EVar11;
  (this->GlobalSettings).ForwardDirection = EVar12;
  fVar3 = (param_1->GlobalSettings).WarpForwards;
  fVar4 = (param_1->GlobalSettings).SidewaysOffset;
  (this->GlobalSettings).DirectionChain = (param_1->GlobalSettings).DirectionChain;
  (this->GlobalSettings).WarpForwards = fVar3;
  (this->GlobalSettings).SidewaysOffset = fVar4;
  (this->GlobalSettings).WarpSplay = (param_1->GlobalSettings).WarpSplay;
  return this;
}

// FRetargetProfile @ 14df18ab0

FRetargetProfile * __thiscall FRetargetProfile::FRetargetProfile(FRetargetProfile *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->RetargetOpProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetOpProfiles).ArrayNum = 0;
  (this->RetargetOpProfiles).ArrayMax = 0;
  (this->TargetRetargetPoseName).ComparisonIndex = 0;
  (this->TargetRetargetPoseName).Number = 0;
  (this->SourceRetargetPoseName).ComparisonIndex = 0;
  (this->SourceRetargetPoseName).Number = 0;
  *(undefined8 *)&this->ChainSettings = 0;
  *(undefined8 *)&(this->ChainSettings).field_0x8 = 0;
  *(undefined8 *)&(this->ChainSettings).field_0x20 = 0;
  this->bApplyTargetRetargetPose = false;
  this->bApplySourceRetargetPose = false;
  this->bForceAllIKOff = false;
  this->bApplyChainSettings = false;
  *(undefined4 *)&(this->ChainSettings).field_0x28 = 0;
  *(undefined4 *)&(this->ChainSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChainSettings).field_0x34 = 0;
  *(undefined4 *)&(this->ChainSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChainSettings).field_0x40 = 0;
  *(undefined4 *)&(this->ChainSettings).field_0x48 = 0;
  this->bApplyRootSettings = false;
  (this->RootSettings).RotationAlpha = 1.0;
  (this->RootSettings).TranslationAlpha = 1.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->RootSettings).BlendToSource = 0.0;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y = (double)uVar1;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->RootSettings).ScaleHorizontal = 1.0;
  (this->RootSettings).ScaleVertical = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RootSettings).RotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RootSettings).RotationOffset.Yaw = dVar2;
  (this->RootSettings).RotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->RootSettings).AffectIKHorizontal = 1.0;
  (this->RootSettings).AffectIKVertical = 0.0;
  this->bApplyGlobalSettings = false;
  (this->GlobalSettings).bCopyBasePose = false;
  (this->GlobalSettings).bEnableRoot = true;
  (this->GlobalSettings).bEnableFK = true;
  (this->GlobalSettings).bEnableIK = true;
  (this->GlobalSettings).bEnablePost = true;
  (this->GlobalSettings).CopyBasePoseRoot.ComparisonIndex = 0;
  (this->GlobalSettings).CopyBasePoseRoot.Number = 0;
  (this->GlobalSettings).bWarping = false;
  (this->GlobalSettings).DirectionSource = Goals;
  (this->GlobalSettings).DirectionChain.Number = 0;
  (this->GlobalSettings).SourceScaleFactor = 1.0;
  (this->GlobalSettings).ForwardDirection = Y;
  (this->GlobalSettings).DirectionChain.ComparisonIndex = 0;
  (this->GlobalSettings).WarpForwards = 1.0;
  (this->GlobalSettings).SidewaysOffset = 0.0;
  (this->GlobalSettings).WarpSplay = 1.0;
  return this;
}

// operator= @ 14df1eb50

FRetargetProfile * __thiscall
FRetargetProfile::operator=(FRetargetProfile *this,FRetargetProfile *param_1)

{
  int *piVar1;
  TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  *this_00;
  undefined1 *puVar2;
  undefined1 *this_01;
  int iVar3;
  FRetargetOpProfile *pFVar4;
  double dVar5;
  FName FVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined3 uVar14;
  EWarpingDirectionSource EVar15;
  EBasicAxis EVar16;
  
  if (this != param_1) {
    DestructItems<FRetargetOpProfile,int>
              ((FRetargetOpProfile *)(this->RetargetOpProfiles).AllocatorInstance.Data,
               (this->RetargetOpProfiles).ArrayNum);
    iVar3 = (param_1->RetargetOpProfiles).ArrayNum;
    piVar1 = &(this->RetargetOpProfiles).ArrayMax;
    pFVar4 = (FRetargetOpProfile *)(param_1->RetargetOpProfiles).AllocatorInstance.Data;
    (this->RetargetOpProfiles).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      ConstructItems<FRetargetOpProfile,FRetargetOpProfile,int>
                ((this->RetargetOpProfiles).AllocatorInstance.Data,pFVar4,iVar3);
    }
  }
  this->bApplyTargetRetargetPose = param_1->bApplyTargetRetargetPose;
  this_00 = &this->ChainSettings;
  this->TargetRetargetPoseName = param_1->TargetRetargetPoseName;
  this->bApplySourceRetargetPose = param_1->bApplySourceRetargetPose;
  this->SourceRetargetPoseName = param_1->SourceRetargetPoseName;
  this->bForceAllIKOff = param_1->bForceAllIKOff;
  this->bApplyChainSettings = param_1->bApplyChainSettings;
  if (this_00 != &param_1->ChainSettings) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ChainSettings).field_0x38,
               (int *)&(this->ChainSettings).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ChainSettings).field_0x38,
               *(int *)&(param_1->ChainSettings).field_0x48);
    iVar3 = *(int *)&(param_1->ChainSettings).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar3,(ForAnyElementType *)this_00,(int *)&(this->ChainSettings).field_0x8,
               (int *)&(this->ChainSettings).field_0xc);
    puVar2 = &(param_1->ChainSettings).field_0x10;
    this_01 = &(this->ChainSettings).field_0x10;
    *(undefined4 *)&(this->ChainSettings).field_0x30 =
         *(undefined4 *)&(param_1->ChainSettings).field_0x30;
    *(undefined4 *)&(this->ChainSettings).field_0x34 =
         *(undefined4 *)&(param_1->ChainSettings).field_0x34;
    if (this_01 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->ChainSettings,(longlong)iVar3 * 200);
    }
  }
  this->bApplyRootSettings = param_1->bApplyRootSettings;
  fVar7 = (param_1->RootSettings).TranslationAlpha;
  fVar8 = (param_1->RootSettings).BlendToSource;
  uVar9 = *(undefined4 *)&(param_1->RootSettings).field_0xc;
  (this->RootSettings).RotationAlpha = (param_1->RootSettings).RotationAlpha;
  (this->RootSettings).TranslationAlpha = fVar7;
  (this->RootSettings).BlendToSource = fVar8;
  *(undefined4 *)&(this->RootSettings).field_0xc = uVar9;
  dVar5 = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X =
       (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y = dVar5;
  fVar7 = (param_1->RootSettings).ScaleHorizontal;
  fVar8 = (param_1->RootSettings).ScaleVertical;
  (this->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z =
       (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z;
  (this->RootSettings).ScaleHorizontal = fVar7;
  (this->RootSettings).ScaleVertical = fVar8;
  dVar5 = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Y;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.X =
       (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.X;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->RootSettings).RotationOffset.Pitch;
  (this->RootSettings).TranslationOffset.field0_0x0._s_0.Z =
       (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Z;
  (this->RootSettings).RotationOffset.Pitch = dVar5;
  dVar5 = (param_1->RootSettings).RotationOffset.Roll;
  (this->RootSettings).RotationOffset.Yaw = (param_1->RootSettings).RotationOffset.Yaw;
  (this->RootSettings).RotationOffset.Roll = dVar5;
  fVar7 = (param_1->RootSettings).AffectIKVertical;
  (this->RootSettings).AffectIKHorizontal = (param_1->RootSettings).AffectIKHorizontal;
  (this->RootSettings).AffectIKVertical = fVar7;
  this->bApplyGlobalSettings = param_1->bApplyGlobalSettings;
  bVar10 = (param_1->GlobalSettings).bEnableFK;
  bVar11 = (param_1->GlobalSettings).bEnableIK;
  bVar12 = (param_1->GlobalSettings).bEnablePost;
  bVar13 = (param_1->GlobalSettings).bCopyBasePose;
  uVar14 = *(undefined3 *)&(param_1->GlobalSettings).field_0x5;
  FVar6 = (param_1->GlobalSettings).CopyBasePoseRoot;
  (this->GlobalSettings).bEnableRoot = (param_1->GlobalSettings).bEnableRoot;
  (this->GlobalSettings).bEnableFK = bVar10;
  (this->GlobalSettings).bEnableIK = bVar11;
  (this->GlobalSettings).bEnablePost = bVar12;
  (this->GlobalSettings).bCopyBasePose = bVar13;
  *(undefined3 *)&(this->GlobalSettings).field_0x5 = uVar14;
  (this->GlobalSettings).CopyBasePoseRoot = FVar6;
  bVar10 = (param_1->GlobalSettings).bWarping;
  uVar14 = *(undefined3 *)&(param_1->GlobalSettings).field_0x15;
  EVar15 = (param_1->GlobalSettings).DirectionSource;
  EVar16 = (param_1->GlobalSettings).ForwardDirection;
  (this->GlobalSettings).SourceScaleFactor = (param_1->GlobalSettings).SourceScaleFactor;
  (this->GlobalSettings).bWarping = bVar10;
  *(undefined3 *)&(this->GlobalSettings).field_0x15 = uVar14;
  (this->GlobalSettings).DirectionSource = EVar15;
  (this->GlobalSettings).ForwardDirection = EVar16;
  fVar7 = (param_1->GlobalSettings).WarpForwards;
  fVar8 = (param_1->GlobalSettings).SidewaysOffset;
  (this->GlobalSettings).DirectionChain = (param_1->GlobalSettings).DirectionChain;
  (this->GlobalSettings).WarpForwards = fVar7;
  (this->GlobalSettings).SidewaysOffset = fVar8;
  (this->GlobalSettings).WarpSplay = (param_1->GlobalSettings).WarpSplay;
  return this;
}

// ApplyOpProfilesToOpStruct @ 14df25cb0

bool __thiscall
FRetargetProfile::ApplyOpProfilesToOpStruct
          (FRetargetProfile *this,FInstancedStruct *param_1,ECopyOpSettingsContext param_2)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FIKRetargetOpBase *pFVar6;
  ulonglong uVar7;
  FName FVar8;
  FIKRetargetOpSettingsBase *pFVar9;
  void *pvVar10;
  UStruct *pUVar11;
  FName *pFVar12;
  FName *pFVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  FInstancedStruct *local_res10;
  ECopyOpSettingsContext local_res18;
  uint local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  
  bVar14 = true;
  local_res10 = param_1;
  local_res18 = param_2;
  pFVar6 = FInstancedStruct::GetPtr<FIKRetargetOpBase>(param_1);
  pFVar12 = (FName *)(this->RetargetOpProfiles).AllocatorInstance.Data;
  FVar1 = pFVar6->Name;
  local_res20 = (this->RetargetOpProfiles).ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar13 = pFVar12 + uVar7 * 4;
LAB_14df25d00:
  do {
    while( true ) {
      if ((this->RetargetOpProfiles).ArrayNum != (int)uVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRetargetOpProfile_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar13) {
        return bVar14;
      }
      if ((*pFVar12 == (FName)0x0) || (*pFVar12 == FVar1)) break;
LAB_14df25d6c:
      uVar7 = (ulonglong)local_res20;
      pFVar12 = pFVar12 + 4;
    }
    if ((pFVar12[2] == (FName)0x0) || (pFVar12[1] == (FName)0x0)) {
LAB_14df25d67:
      bVar14 = false;
      goto LAB_14df25d6c;
    }
    pFVar6 = FInstancedStruct::GetMutablePtr<FIKRetargetOpBase>(param_1);
    FVar2 = pFVar12[1];
    FVar8 = (FName)(**(code **)(pFVar6->_padding_ + 0x58))(pFVar6);
    param_1 = local_res10;
    if (FVar8 != FVar2) goto LAB_14df25d67;
    pFVar9 = UE::StructUtils::GetStructRef<FIKRetargetOpSettingsBase>
                       ((UScriptStruct *)pFVar12[1],(void *)pFVar12[2]);
    if (local_res18 == PreInitialize) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      pvVar10 = (void *)(**(code **)(pFVar6->_padding_ + 0x48))(pFVar6);
      pUVar11 = (UStruct *)(**(code **)(pFVar6->_padding_ + 0x58))(pFVar6);
      FIKRetargetOpBase::CopyStructProperties(pUVar11,pFVar9,pvVar10,&local_58);
    }
    else {
      if (local_res18 == Runtime) {
        (**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,pFVar9);
        uVar7 = (ulonglong)local_res20;
        pFVar12 = pFVar12 + 4;
        param_1 = local_res10;
        goto LAB_14df25d00;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProfile.cpp"
                         ,0x3e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (ulonglong)local_res20;
    pFVar12 = pFVar12 + 4;
    param_1 = local_res10;
  } while( true );
}

// FillProfileWithAssetSettings @ 14df32530

void __thiscall
FRetargetProfile::FillProfileWithAssetSettings(FRetargetProfile *this,UIKRetargeter *param_1)

{
  int *piVar1;
  FRetargetOpProfile *pFVar2;
  FInstancedStruct *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPackage *pUVar10;
  uchar *puVar11;
  UScriptStruct *pUVar12;
  FRetargetProfile *pFVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong local_res18;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  if (param_1 != (UIKRetargeter *)0x0) {
    this->bApplyTargetRetargetPose = true;
    piVar1 = &(this->RetargetOpProfiles).ArrayMax;
    this->TargetRetargetPoseName = param_1->CurrentTargetRetargetPose;
    this->bApplySourceRetargetPose = true;
    this->SourceRetargetPoseName = param_1->CurrentSourceRetargetPose;
    pFVar2 = (FRetargetOpProfile *)(this->RetargetOpProfiles).AllocatorInstance.Data;
    iVar9 = (this->RetargetOpProfiles).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FRetargetOpProfile,int>(pFVar2,iVar9);
      (this->RetargetOpProfiles).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
      }
    }
    else {
      DestructItems<FRetargetOpProfile,int>(pFVar2,iVar9);
      (this->RetargetOpProfiles).ArrayNum = 0;
    }
    iVar9 = (param_1->RetargetOps).ArrayNum;
    pFVar3 = (FInstancedStruct *)(param_1->RetargetOps).AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = iVar9;
    if (iVar9 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,0,&local_48,iVar9,&local_3c);
      ConstructItems<FInstancedStruct,FInstancedStruct,int>(local_48.Data,pFVar3,iVar9);
    }
    if (0 < local_40) {
      local_res18 = 0;
      plVar14 = (longlong *)0x0;
      do {
        uVar16 = (uint)plVar14;
        uVar8 = 0;
        if ((int)uVar16 < local_40) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar14 = *(longlong **)(local_48.Data + local_res18 + 8);
        lVar4 = *(longlong *)(local_48.Data + local_res18);
        if ((plVar14 == (longlong *)0x0) || (lVar4 == 0)) {
LAB_14df326f9:
          plVar14 = (longlong *)0x0;
        }
        else {
          if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar10 = Z_Construct_UPackage__Script_IKRig();
            Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar10,
                                 L"IKRetargetOpBase");
            if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton ==
                (UScriptStruct *)0x0) goto LAB_14df326f9;
          }
          iVar9 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->
                       _padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar9 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) goto LAB_14df326f9;
        }
        puVar11 = (uchar *)(**(code **)(*plVar14 + 0x48))(plVar14);
        pUVar12 = (UScriptStruct *)(**(code **)(*plVar14 + 0x58))(plVar14);
        uVar5 = *(undefined8 *)((longlong)plVar14 + 0xc);
        iVar9 = (this->RetargetOpProfiles).ArrayNum;
        if (iVar9 == (this->RetargetOpProfiles).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)this,&(this->RetargetOpProfiles).ArrayMax);
        }
        (this->RetargetOpProfiles).ArrayNum = iVar9 + 1;
        pFVar15 = (this->RetargetOpProfiles).AllocatorInstance.Data + (longlong)iVar9 * 0x20;
        *(undefined8 *)pFVar15 = 0;
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)(pFVar15 + 8));
        *(undefined8 *)(pFVar15 + 0x18) = 0;
        *(undefined8 *)pFVar15 = uVar5;
        FInstancedStruct::InitializeAs((FInstancedStruct *)(pFVar15 + 8),pUVar12,puVar11);
        plVar14 = (longlong *)(ulonglong)(uVar16 + 1);
        local_res18 = local_res18 + 0x10;
      } while ((int)(uVar16 + 1) < local_40);
    }
    pFVar13 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
              ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                      *)&param_1->Profiles,param_1->CurrentProfile);
    if (pFVar13 != (FRetargetProfile *)0x0) {
      MergeWithOtherProfile(this,pFVar13);
    }
    DestructItems<FInstancedStruct,int>((FInstancedStruct *)local_48.Data,local_40);
    if ((FInstancedStruct *)local_48.Data != (FInstancedStruct *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// FindMatchingOpProfile @ 14df33790

FRetargetOpProfile * __thiscall
FRetargetProfile::FindMatchingOpProfile(FRetargetProfile *this,FRetargetOpProfile *param_1)

{
  int iVar1;
  UPackage *pUVar2;
  UScriptStruct *pUVar3;
  FRetargetOpProfile *pFVar4;
  FRetargetOpProfile *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar4 = (FRetargetOpProfile *)(this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  pUVar3 = Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton;
  do {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      pUVar3 = Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton;
    }
    if (pFVar4 == pFVar5) {
      return (FRetargetOpProfile *)0x0;
    }
    if (pFVar4->OpToApplySettingsTo == param_1->OpToApplySettingsTo) {
      if (pUVar3 != (UScriptStruct *)0x0) {
        return pFVar4;
      }
      pUVar2 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRetargetOpProfile,(UObject *)pUVar2,
                           L"RetargetOpProfile");
      if (Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton !=
          (UScriptStruct *)0x0) {
        return pFVar4;
      }
      pUVar2 = Z_Construct_UPackage__Script_IKRig();
      pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FRetargetOpProfile,(UObject *)pUVar2,
                               L"RetargetOpProfile");
      Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton = pUVar3;
      if (pUVar3 == (UScriptStruct *)0x0) {
        return pFVar4;
      }
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// GetOpProfileByName @ 14df3b040

FRetargetOpProfile * __thiscall
FRetargetProfile::GetOpProfileByName(FRetargetProfile *this,FName param_1)

{
  int iVar1;
  FRetargetOpProfile *pFVar2;
  FRetargetOpProfile *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RetargetOpProfiles).ArrayNum;
  pFVar3 = (FRetargetOpProfile *)(this->RetargetOpProfiles).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->RetargetOpProfiles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->OpToApplySettingsTo == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FRetargetOpProfile *)0x0;
}

// MergeWithOtherProfile @ 14df4a5f0

void __thiscall
FRetargetProfile::MergeWithOtherProfile(FRetargetProfile *this,FRetargetProfile *param_1)

{
  int *piVar1;
  TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  *pTVar2;
  double *pdVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  UPackage *pUVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  FName *pFVar19;
  ForAnyElementType FVar20;
  longlong *plVar21;
  uint uVar22;
  FName *pFVar23;
  FScriptContainerElement *pFVar24;
  longlong *plVar25;
  uint uVar26;
  FRetargetOpProfile *pFVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  uint *puVar32;
  FRetargetOpProfile *pFVar33;
  FInstancedStruct *pFVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  undefined1 local_2b0;
  undefined1 local_2af;
  undefined1 local_2ae;
  undefined1 local_2ad;
  uint local_2ac;
  TBitArray<FDefaultBitArrayAllocator> *local_2a8;
  undefined1 local_2a0 [8];
  FScriptContainerElement *local_298;
  TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  *local_290;
  int iStack_288;
  uint uStack_284;
  undefined1 *local_280;
  undefined4 uStack_278;
  int iStack_274;
  int local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  ulonglong local_260;
  TArray<FIKRetargetSpeedPlantingOpSettings_*,TSizedDefaultAllocator<32>_> local_258;
  TArray<FIKRetargetAlignPoleVectorOpSettings_*,TSizedDefaultAllocator<32>_> local_248;
  TArray<FIKRetargetStrideWarpingOpSettings_*,TSizedDefaultAllocator<32>_> local_238;
  TArray<FIKRetargetFKChainsOpSettings_*,TSizedDefaultAllocator<32>_> local_228;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  TArray<FIKRetargetPelvisMotionOpSettings_*,TSizedDefaultAllocator<32>_> local_208;
  TArray<FIKRetargetIKChainsOpSettings_*,TSizedDefaultAllocator<32>_> local_1f8;
  longlong local_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  FScriptContainerElement *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  
  if (param_1->bApplyTargetRetargetPose != false) {
    this->TargetRetargetPoseName = param_1->TargetRetargetPoseName;
  }
  if (param_1->bApplySourceRetargetPose != false) {
    this->SourceRetargetPoseName = param_1->SourceRetargetPoseName;
  }
  pFVar27 = (FRetargetOpProfile *)(param_1->RetargetOpProfiles).AllocatorInstance.Data;
  iVar18 = (param_1->RetargetOpProfiles).ArrayNum;
  pFVar33 = pFVar27 + iVar18;
  pFVar34 = &pFVar27->SettingsToApply;
LAB_14df4a650:
  if ((param_1->RetargetOpProfiles).ArrayNum != iVar18) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FRetargetOpProfile_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res18);
  }
  if (pFVar27 != pFVar33) {
    iVar11 = (this->RetargetOpProfiles).ArrayNum;
    pFVar19 = (FName *)(this->RetargetOpProfiles).AllocatorInstance.Data;
    pFVar23 = pFVar19 + (longlong)iVar11 * 4;
    do {
      if ((this->RetargetOpProfiles).ArrayNum != iVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FRetargetOpProfile,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar19 == pFVar23) {
        iVar11 = (this->RetargetOpProfiles).ArrayNum;
        piVar1 = &(this->RetargetOpProfiles).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,(ForAnyElementType *)this,piVar1);
        }
        (this->RetargetOpProfiles).ArrayNum = iVar11 + 1;
        FRetargetOpProfile::FRetargetOpProfile
                  ((FRetargetOpProfile *)
                   ((this->RetargetOpProfiles).AllocatorInstance.Data + (longlong)iVar11 * 0x20),
                   pFVar27);
        goto LAB_14df4a77a;
      }
      if (*pFVar19 == pFVar27->OpToApplySettingsTo) {
        if (Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_14df4a729;
        pUVar12 = Z_Construct_UPackage__Script_IKRig();
        Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRetargetOpProfile,(UObject *)pUVar12,
                             L"RetargetOpProfile");
        if (Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_14df4a729;
        pUVar12 = Z_Construct_UPackage__Script_IKRig();
        Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRetargetOpProfile,(UObject *)pUVar12,
                             L"RetargetOpProfile");
        if (Z_Registration_Info_UScriptStruct_FRetargetOpProfile.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14df4a729;
      }
      pFVar19 = pFVar19 + 4;
    } while( true );
  }
  if (param_1->bApplyRootSettings != false) {
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    GetOpSettingsByTypeInProfile<FIKRetargetPelvisMotionOpSettings>(this,&local_208);
    iVar18 = local_208.ArrayNum;
    uVar14 = (ulonglong)local_208.ArrayNum;
    pFVar24 = local_208.AllocatorInstance.Data + uVar14 * 8;
    FVar20.Data = local_208.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar18) {
        local_2b8 = 0;
        `TCheckedPointerIterator<FIKRetargetPelvisMotionOpSettings_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2b8);
      }
      if (FVar20.Data == pFVar24) break;
      lVar16 = *(longlong *)FVar20.Data;
      FVar20.Data = FVar20.Data + 8;
      *(double *)(lVar16 + 0x50) = (double)(param_1->RootSettings).RotationAlpha;
      *(double *)(lVar16 + 0x88) = (double)(param_1->RootSettings).TranslationAlpha;
      *(double *)(lVar16 + 0xc0) = (double)(param_1->RootSettings).BlendToSource;
      dVar6 = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y;
      *(double *)(lVar16 + 200) = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X;
      *(double *)(lVar16 + 0xd0) = dVar6;
      *(double *)(lVar16 + 0xd8) = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z;
      *(double *)(lVar16 + 0xe0) = (double)(param_1->RootSettings).ScaleHorizontal;
      *(double *)(lVar16 + 0xe8) = (double)(param_1->RootSettings).ScaleVertical;
      dVar6 = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Y;
      *(double *)(lVar16 + 0xa8) = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.X;
      *(double *)(lVar16 + 0xb0) = dVar6;
      *(double *)(lVar16 + 0xb8) = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Z;
      dVar6 = (param_1->RootSettings).RotationOffset.Yaw;
      *(double *)(lVar16 + 0x58) = (param_1->RootSettings).RotationOffset.Pitch;
      *(double *)(lVar16 + 0x60) = dVar6;
      *(double *)(lVar16 + 0x68) = (param_1->RootSettings).RotationOffset.Roll;
      *(double *)(lVar16 + 0xf0) = (double)(param_1->RootSettings).AffectIKHorizontal;
      *(double *)(lVar16 + 0xf8) = (double)(param_1->RootSettings).AffectIKVertical;
      uVar14 = local_208._8_8_ & 0xffffffff;
    }
    if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
  }
  if (param_1->bApplyChainSettings != false) {
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayNum = 0;
    local_228.ArrayMax = 0;
    GetOpSettingsByTypeInProfile<FIKRetargetFKChainsOpSettings>(this,&local_228);
    pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->ChainSettings).field_0x10;
    pFVar24 = (FScriptContainerElement *)&param_1->ChainSettings;
    local_260 = 1;
    local_170._padding_._4_4_ = 1;
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170._padding_._0_4_ = 0;
    local_170.CurrentBitIndex = 0;
    local_170.BaseBitIndex = 0;
    local_2a8 = pTVar28;
    local_298 = pFVar24;
    local_170.Array = pTVar28;
    if (*(int *)&(param_1->ChainSettings).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
    }
    uVar26 = *(uint *)&(param_1->ChainSettings).field_0x28;
    TStack_1b8._padding_ = CONCAT44(local_170._padding_._4_4_,(undefined4)local_170._padding_);
    bVar13 = (byte)uVar26 & 0x1f;
    TStack_1b8.CurrentBitIndex = local_170.CurrentBitIndex;
    TStack_1b8.UnvisitedBitMask = local_170.UnvisitedBitMask;
    TStack_1b8._28_4_ = local_170._28_4_;
    TStack_1b8.BaseBitIndex = local_170.BaseBitIndex;
    local_198 = CONCAT44(local_198._4_4_,
                         *(int *)&(param_1->ChainSettings).field_0x8 -
                         *(int *)&(param_1->ChainSettings).field_0x34);
    local_190._padding_._0_4_ = (int)uVar26 >> 5;
    local_190._padding_._4_4_ = 1 << bVar13;
    local_190.UnvisitedBitMask = -1 << bVar13;
    TStack_1b8.Array = local_170.Array;
    local_190.BaseBitIndex = uVar26 & 0xffffffe0;
    TStack_130.Array = local_170.Array;
    uStack_110 = local_198;
    local_1c0 = (TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                 *)pFVar24;
    local_190.Array = pTVar28;
    local_190.CurrentBitIndex = uVar26;
    local_138 = pFVar24;
    TStack_130._padding_ = TStack_1b8._padding_;
    TStack_130._16_8_ = TStack_1b8._16_8_;
    TStack_130._24_8_ = TStack_1b8._24_8_;
    if (((int)uVar26 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar26 != *(uint *)&(param_1->ChainSettings).field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
      local_2a8 = local_190.Array;
      pTVar28 = local_190.Array;
    }
    while( true ) {
      pFVar8 = local_138;
      if (*(int *)(local_138 + 8) - *(int *)(local_138 + 0x34) != (int)uStack_110) {
        local_2b7 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b7);
      }
      if (((TStack_130.CurrentBitIndex == local_190.CurrentBitIndex) &&
          (TStack_130.Array == pTVar28)) && (pFVar8 == pFVar24)) break;
      uVar15 = (ulonglong)local_228.ArrayNum;
      local_2ac = local_228.ArrayNum;
      plVar25 = (longlong *)((longlong)TStack_130.CurrentBitIndex * 200 + *(longlong *)pFVar8);
      local_218 = (TBitArray<FDefaultBitArrayAllocator> *)
                  (local_228.AllocatorInstance.Data + uVar15 * 8);
      lVar16 = *plVar25;
      uVar14 = uVar15;
      FVar20.Data = local_228.AllocatorInstance.Data;
      while( true ) {
        pTVar28 = local_218;
        if ((int)uVar15 != (int)uVar14) {
          local_2b6 = 0;
          `TCheckedPointerIterator<FIKRetargetFKChainsOpSettings_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2b6);
        }
        if ((TBitArray<FDefaultBitArrayAllocator> *)FVar20.Data == pTVar28) break;
        lVar17 = *(longlong *)
                  (((TBitArray<FDefaultBitArrayAllocator> *)FVar20.Data)->AllocatorInstance).
                  InlineData;
        iVar18 = *(int *)(lVar17 + 0x28);
        plVar29 = *(longlong **)(lVar17 + 0x20);
        plVar21 = plVar29 + (longlong)iVar18 * 5;
        while( true ) {
          if (*(int *)(lVar17 + 0x28) != iVar18) {
            local_2b5 = 0;
            `TCheckedPointerIterator<FRetargetFKChainSettings,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_2b5);
          }
          if (plVar29 == plVar21) break;
          if (*plVar29 == lVar16) {
            *(char *)(plVar29 + 1) = (char)plVar25[1];
            *(undefined1 *)((longlong)plVar29 + 9) = *(undefined1 *)((longlong)plVar25 + 9);
            plVar29[2] = (longlong)(double)*(float *)((longlong)plVar25 + 0xc);
            *(char *)(plVar29 + 3) = (char)plVar25[2];
            plVar29[4] = (longlong)(double)*(float *)((longlong)plVar25 + 0x14);
          }
          plVar29 = plVar29 + 5;
        }
        uVar15 = local_228._8_8_ & 0xffffffff;
        FVar20.Data = (FScriptContainerElement *)
                      ((((TBitArray<FDefaultBitArrayAllocator> *)FVar20.Data)->AllocatorInstance).
                       InlineData + 8);
        uVar14 = (ulonglong)local_2ac;
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
      pFVar24 = local_298;
      pTVar28 = local_2a8;
    }
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
    GetOpSettingsByTypeInProfile<FIKRetargetIKChainsOpSettings>(this,&local_1f8);
    iStack_288 = 0;
    iVar18 = *(int *)&(param_1->ChainSettings).field_0x28;
    local_280 = &(param_1->ChainSettings).field_0x10;
    local_270 = 0;
    pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->ChainSettings;
    uStack_284 = (uint)local_260;
    iStack_274 = iStack_288;
    if (iVar18 != 0) {
      puVar32 = *(uint **)&(param_1->ChainSettings).field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)local_280;
      }
      uVar26 = *puVar32;
      local_270 = 0;
      iStack_288 = 0;
      while (uVar26 == 0) {
        lVar16 = (longlong)iStack_288;
        local_270 = local_270 + 0x20;
        iStack_288 = iStack_288 + 1;
        iStack_274 = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288)
        goto LAB_14df4ac21;
        uVar26 = puVar32[lVar16 + 1];
      }
      uStack_284 = -uVar26 & uVar26;
      uVar14 = (ulonglong)uStack_284 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_150 = (int)lVar16;
      iStack_274 = local_270 + -1 + local_150;
      if (iVar18 < iStack_274) {
        iStack_274 = iVar18;
      }
    }
LAB_14df4ac21:
    uStack_26c = local_8c;
    pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->ChainSettings).field_0x10;
    iStack_268 = *(int *)&(param_1->ChainSettings).field_0x8 -
                 *(int *)&(param_1->ChainSettings).field_0x34;
    uVar26 = *(uint *)&(param_1->ChainSettings).field_0x28;
    uVar22 = uVar26 & 0xffffffe0;
    TStack_100._padding_ = CONCAT44(uStack_284,iStack_288);
    uStack_278 = 0xffffffff;
    TStack_100.CurrentBitIndex = iStack_274;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar26 >> 5;
    TStack_100._28_4_ = local_8c;
    TStack_100.BaseBitIndex = local_270;
    uStack_e0 = CONCAT44(uStack_264,iStack_268);
    local_290 = (TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                 *)pTVar28;
    local_218 = pTVar35;
    local_210 = pTVar28;
    local_108 = (TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                 *)pTVar28;
    TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_280;
    local_2a8._0_4_ = uVar26;
    if (((int)uVar26 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(param_1->ChainSettings).field_0x28;
    if (uVar26 != uVar4) {
      puVar31 = *(undefined1 **)&(param_1->ChainSettings).field_0x20;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = (undefined1 *)pTVar35;
      }
      uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar18 * 4);
      while (uVar26 == 0) {
        lVar16 = (longlong)iVar18;
        uVar22 = uVar22 + 0x20;
        iVar18 = iVar18 + 1;
        uVar26 = uVar4;
        local_2a8._0_4_ = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14df4ad50;
        uVar26 = *(uint *)(puVar31 + lVar16 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_140 = (int)lVar16;
      uVar26 = local_140 + -1 + uVar22;
      local_2a8._0_4_ = uVar26;
      if ((int)uVar4 < (int)uVar26) {
        uVar26 = uVar4;
        local_2a8._0_4_ = uVar4;
      }
    }
LAB_14df4ad50:
    while( true ) {
      pTVar2 = local_108;
      if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
        local_2b4 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b4);
      }
      if (((TStack_100.CurrentBitIndex == uVar26) && (TStack_100.Array == pTVar35)) &&
         (pTVar2 == (TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                     *)pTVar28)) break;
      uVar15 = (ulonglong)local_1f8.ArrayNum;
      local_2ac = local_1f8.ArrayNum;
      plVar25 = (longlong *)((longlong)TStack_100.CurrentBitIndex * 200 + *(longlong *)pTVar2);
      local_298 = local_1f8.AllocatorInstance.Data + uVar15 * 8;
      lVar16 = *plVar25;
      uVar14 = uVar15;
      FVar20.Data = local_1f8.AllocatorInstance.Data;
      while( true ) {
        pFVar24 = local_298;
        if ((int)uVar15 != (int)uVar14) {
          local_2b3 = 0;
          `TCheckedPointerIterator<FIKRetargetIKChainsOpSettings_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2b3);
        }
        if (FVar20.Data == pFVar24) break;
        lVar17 = *(longlong *)FVar20.Data;
        iVar18 = *(int *)(lVar17 + 0x20);
        plVar21 = *(longlong **)(lVar17 + 0x18);
        plVar29 = plVar21 + (longlong)iVar18 * 0x14;
        while( true ) {
          if (*(int *)(lVar17 + 0x20) != iVar18) {
            local_2b2 = 0;
            `TCheckedPointerIterator<FRetargetIKChainSettings,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_2b2);
          }
          if (plVar21 == plVar29) break;
          if (*plVar21 == lVar16) {
            *(char *)(plVar21 + 1) = (char)plVar25[5];
            plVar21[2] = (longlong)(double)*(float *)((longlong)plVar25 + 0x2c);
            plVar21[3] = (longlong)(double)*(float *)(plVar25 + 6);
            plVar21[4] = (longlong)(double)*(float *)((longlong)plVar25 + 0x34);
            lVar7 = plVar25[8];
            plVar21[5] = plVar25[7];
            plVar21[6] = lVar7;
            plVar21[7] = plVar25[9];
            lVar7 = plVar25[0xb];
            plVar21[9] = plVar25[10];
            plVar21[10] = lVar7;
            plVar21[0xb] = plVar25[0xc];
            lVar7 = plVar25[0xe];
            plVar21[0xc] = plVar25[0xd];
            plVar21[0xd] = lVar7;
            plVar21[0xe] = plVar25[0xf];
            lVar7 = plVar25[0x11];
            plVar21[0xf] = plVar25[0x10];
            plVar21[0x10] = lVar7;
            plVar21[0x11] = plVar25[0x12];
            plVar21[0x12] = (longlong)(double)*(float *)(plVar25 + 0x13);
            plVar21[0x13] = (longlong)(double)*(float *)((longlong)plVar25 + 0x9c);
          }
          plVar21 = plVar21 + 0x14;
        }
        uVar15 = local_1f8._8_8_ & 0xffffffff;
        FVar20.Data = FVar20.Data + 8;
        uVar14 = (ulonglong)local_2ac;
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      pTVar28 = local_210;
      pTVar35 = local_218;
      uVar26 = (uint)local_2a8;
    }
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ArrayNum = 0;
    local_258.ArrayMax = 0;
    GetOpSettingsByTypeInProfile<FIKRetargetSpeedPlantingOpSettings>(this,&local_258);
    iStack_288 = 0;
    iVar18 = *(int *)&(param_1->ChainSettings).field_0x28;
    local_280 = &(param_1->ChainSettings).field_0x10;
    local_270 = 0;
    pTVar2 = &param_1->ChainSettings;
    uStack_284 = (uint)local_260;
    iStack_274 = iStack_288;
    if (iVar18 != 0) {
      puVar32 = *(uint **)&(param_1->ChainSettings).field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)local_280;
      }
      uVar26 = *puVar32;
      local_270 = 0;
      iStack_288 = 0;
      while (uVar26 == 0) {
        lVar16 = (longlong)iStack_288;
        local_270 = local_270 + 0x20;
        iStack_288 = iStack_288 + 1;
        iStack_274 = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288)
        goto LAB_14df4afc1;
        uVar26 = puVar32[lVar16 + 1];
      }
      uStack_284 = -uVar26 & uVar26;
      uVar14 = (ulonglong)uStack_284 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_14c = (int)lVar16;
      iStack_274 = local_270 + -1 + local_14c;
      if (iVar18 < iStack_274) {
        iStack_274 = iVar18;
      }
    }
LAB_14df4afc1:
    uVar26 = *(uint *)&(param_1->ChainSettings).field_0x28;
    puVar31 = &(param_1->ChainSettings).field_0x10;
    uStack_26c = local_6c;
    iStack_268 = *(int *)&(param_1->ChainSettings).field_0x8 -
                 *(int *)&(param_1->ChainSettings).field_0x34;
    uVar22 = uVar26 & 0xffffffe0;
    TStack_d0._padding_ = CONCAT44(uStack_284,iStack_288);
    uStack_278 = 0xffffffff;
    TStack_d0.CurrentBitIndex = iStack_274;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar26 >> 5;
    TStack_d0._28_4_ = local_6c;
    TStack_d0.BaseBitIndex = local_270;
    uStack_b0 = CONCAT44(uStack_264,iStack_268);
    local_290 = pTVar2;
    local_d8 = pTVar2;
    TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_280;
    if (((int)uVar26 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(param_1->ChainSettings).field_0x28;
    if (uVar26 != uVar4) {
      puVar30 = *(undefined1 **)&(param_1->ChainSettings).field_0x20;
      if (puVar30 == (undefined1 *)0x0) {
        puVar30 = puVar31;
      }
      uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar18 * 4);
      while (uVar26 == 0) {
        lVar16 = (longlong)iVar18;
        uVar22 = uVar22 + 0x20;
        iVar18 = iVar18 + 1;
        uVar26 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14df4b0d0;
        uVar26 = *(uint *)(puVar30 + lVar16 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_148 = (int)lVar16;
      uVar26 = local_148 + -1 + uVar22;
      if ((int)uVar4 < (int)uVar26) {
        uVar26 = uVar4;
      }
    }
LAB_14df4b0d0:
    while( true ) {
      pTVar9 = local_d8;
      if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
        local_2b1 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b1);
      }
      if (((TStack_d0.CurrentBitIndex == uVar26) &&
          (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
         (pTVar9 == pTVar2)) break;
      lVar16 = (longlong)TStack_d0.CurrentBitIndex * 200 + *(longlong *)pTVar9;
      if (*(longlong *)(lVar16 + 0xac) != 0) {
        iVar18 = local_258.ArrayNum;
        uVar14 = (ulonglong)local_258.ArrayNum;
        pFVar24 = local_258.AllocatorInstance.Data + uVar14 * 8;
        FVar20.Data = local_258.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar14 != iVar18) {
            local_2b0 = 0;
            `TCheckedPointerIterator<FIKRetargetSpeedPlantingOpSettings_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_2b0);
          }
          if (FVar20.Data == pFVar24) break;
          lVar17 = *(longlong *)FVar20.Data;
          FVar20.Data = FVar20.Data + 8;
          *(double *)(lVar17 + 0x28) = (double)*(float *)(lVar16 + 0xb4);
          *(double *)(lVar17 + 0x30) = (double)*(float *)(lVar16 + 0xb8);
          *(double *)(lVar17 + 0x38) = (double)*(float *)(lVar16 + 0xbc);
          uVar14 = local_258._8_8_ & 0xffffffff;
        }
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.AllocatorInstance.Data);
    }
    local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ArrayNum = 0;
    local_248.ArrayMax = 0;
    GetOpSettingsByTypeInProfile<FIKRetargetAlignPoleVectorOpSettings>(this,&local_248);
    iStack_288 = 0;
    iVar18 = *(int *)&(param_1->ChainSettings).field_0x28;
    local_280 = &(param_1->ChainSettings).field_0x10;
    local_270 = 0;
    pFVar24 = (FScriptContainerElement *)&param_1->ChainSettings;
    iStack_274 = iStack_288;
    if (iVar18 != 0) {
      puVar32 = *(uint **)&(param_1->ChainSettings).field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)local_280;
      }
      uVar26 = *puVar32;
      local_270 = 0;
      iStack_288 = 0;
      while (uVar26 == 0) {
        lVar16 = (longlong)iStack_288;
        local_270 = local_270 + 0x20;
        iStack_288 = iStack_288 + 1;
        iStack_274 = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_288)
        goto LAB_14df4b263;
        uVar26 = puVar32[lVar16 + 1];
      }
      local_260 = (ulonglong)(-uVar26 & uVar26);
      uVar14 = local_260 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_13c = (int)lVar16;
      iStack_274 = local_270 + -1 + local_13c;
      if (iVar18 < iStack_274) {
        iStack_274 = iVar18;
      }
    }
LAB_14df4b263:
    uVar26 = *(uint *)&(param_1->ChainSettings).field_0x28;
    uStack_284 = (uint)local_260;
    uStack_26c = local_4c;
    iStack_268 = *(int *)&(param_1->ChainSettings).field_0x8 -
                 *(int *)&(param_1->ChainSettings).field_0x34;
    pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->ChainSettings).field_0x10;
    uStack_278 = 0xffffffff;
    uVar22 = uVar26 & 0xffffffe0;
    TStack_1b8.CurrentBitIndex = iStack_274;
    TStack_1b8.UnvisitedBitMask = 0xffffffff;
    local_2ac = -1 << ((byte)uVar26 & 0x1f);
    TStack_1b8._padding_ = CONCAT44(uStack_284,iStack_288);
    iVar18 = (int)uVar26 >> 5;
    local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_2a8._4_4_,uVar26);
    TStack_1b8._28_4_ = local_4c;
    TStack_1b8.BaseBitIndex = local_270;
    local_198 = CONCAT44(uStack_264,iStack_268);
    local_298 = pFVar24;
    local_290 = (TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                 *)pFVar24;
    local_210 = pTVar28;
    local_1c0 = (TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                 *)pFVar24;
    TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_280;
    if (((int)uVar26 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(param_1->ChainSettings).field_0x28;
    if (uVar26 != uVar4) {
      puVar31 = *(undefined1 **)&(param_1->ChainSettings).field_0x20;
      local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_2a8._4_4_,uVar4);
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = (undefined1 *)pTVar28;
      }
      uVar26 = local_2ac & *(uint *)(puVar31 + (longlong)iVar18 * 4);
      while (uVar26 == 0) {
        lVar16 = (longlong)iVar18;
        uVar22 = uVar22 + 0x20;
        iVar18 = iVar18 + 1;
        uVar26 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14df4b390;
        uVar26 = *(uint *)(puVar31 + lVar16 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_144 = (int)lVar16;
      uVar26 = (uVar22 - 1) + local_144;
      if ((int)uVar4 < (int)uVar26) {
        uVar26 = uVar4;
      }
      local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_2a8._4_4_,uVar26);
    }
LAB_14df4b390:
    while( true ) {
      pTVar2 = local_1c0;
      if (*(int *)&local_1c0->field_0x8 - *(int *)&local_1c0->field_0x34 != (int)local_198) {
        local_2af = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2af);
      }
      if (((TStack_1b8.CurrentBitIndex == uVar26) && (TStack_1b8.Array == pTVar28)) &&
         (pTVar2 == (TMap<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                     *)pFVar24)) break;
      lVar16 = *(longlong *)pTVar2;
      lVar17 = (longlong)TStack_1b8.CurrentBitIndex * 200;
      uStack_1e0 = 1;
      local_1e8 = *(longlong *)(lVar17 + lVar16);
      local_1d8 = (double)*(float *)(lVar17 + 0x18 + lVar16);
      local_1c8 = *(undefined1 *)(lVar17 + 0x1c + lVar16);
      iVar18 = local_248.ArrayNum;
      uVar14 = (ulonglong)local_248.ArrayNum;
      dStack_1d0 = (double)*(float *)(lVar17 + 0x20 + lVar16);
      pFVar24 = local_248.AllocatorInstance.Data + uVar14 * 8;
      FVar20.Data = local_248.AllocatorInstance.Data;
LAB_14df4b410:
      if ((int)uVar14 != iVar18) {
        local_2ae = 0;
        `TCheckedPointerIterator<FIKRetargetAlignPoleVectorOpSettings_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2ae);
      }
      if (FVar20.Data != pFVar24) {
        lVar16 = *(longlong *)FVar20.Data;
        iVar11 = *(int *)(lVar16 + 0x28);
        plVar21 = *(longlong **)(lVar16 + 0x20);
        plVar25 = plVar21 + (longlong)iVar11 * 5;
        while( true ) {
          if (*(int *)(lVar16 + 0x28) != iVar11) {
            local_2ad = 0;
            `TCheckedPointerIterator<FRetargetPoleVectorSettings,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_2ad);
          }
          if (plVar21 == plVar25) {
            if (((*(longlong **)(lVar16 + 0x20) <= &local_1e8) &&
                (&local_1e8 < *(longlong **)(lVar16 + 0x20) + (longlong)*(int *)(lVar16 + 0x2c) * 5)
                ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar11 = *(int *)(lVar16 + 0x28);
            if (iVar11 == *(int *)(lVar16 + 0x2c)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,(ForAnyElementType *)(lVar16 + 0x20),(int *)(lVar16 + 0x2c))
              ;
            }
            FVar20.Data = FVar20.Data + 8;
            *(int *)(lVar16 + 0x28) = iVar11 + 1;
            lVar17 = (longlong)iVar11;
            lVar16 = *(longlong *)(lVar16 + 0x20);
            plVar25 = (longlong *)(lVar16 + lVar17 * 0x28);
            *plVar25 = local_1e8;
            plVar25[1] = CONCAT71(uStack_1df,uStack_1e0);
            pdVar3 = (double *)(lVar16 + 0x10 + lVar17 * 0x28);
            *pdVar3 = local_1d8;
            pdVar3[1] = dStack_1d0;
            *(ulonglong *)(lVar16 + 0x20 + lVar17 * 0x28) = CONCAT71(uStack_1c7,local_1c8);
            uVar14 = local_248._8_8_ & 0xffffffff;
            goto LAB_14df4b410;
          }
          if (*plVar21 == local_1e8) break;
          plVar21 = plVar21 + 5;
        }
        FVar20.Data = FVar20.Data + 8;
        *plVar21 = local_1e8;
        plVar21[1] = CONCAT71(uStack_1df,uStack_1e0);
        plVar21[2] = (longlong)local_1d8;
        plVar21[3] = (longlong)dStack_1d0;
        plVar21[4] = CONCAT71(uStack_1c7,local_1c8);
        uVar14 = local_248._8_8_ & 0xffffffff;
        goto LAB_14df4b410;
      }
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
      pTVar28 = local_210;
      pFVar24 = local_298;
      uVar26 = (uint)local_2a8;
    }
    if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.AllocatorInstance.Data);
    }
  }
  if (param_1->bApplyGlobalSettings != false) {
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    GetOpSettingsByTypeInProfile<FIKRetargetStrideWarpingOpSettings>(this,&local_238);
    iVar18 = local_238.ArrayNum;
    uVar14 = (ulonglong)local_238.ArrayNum;
    pFVar24 = local_238.AllocatorInstance.Data + uVar14 * 8;
    FVar20.Data = local_238.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar18) {
        `TCheckedPointerIterator<FIKRetargetStrideWarpingOpSettings_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2a0);
      }
      if (FVar20.Data == pFVar24) break;
      lVar16 = *(longlong *)FVar20.Data;
      FVar20.Data = FVar20.Data + 8;
      *(EWarpingDirectionSource *)(lVar16 + 0x28) = (param_1->GlobalSettings).DirectionSource;
      *(EBasicAxis *)(lVar16 + 0x2c) = (param_1->GlobalSettings).ForwardDirection;
      *(FName *)(lVar16 + 0x30) = (param_1->GlobalSettings).DirectionChain;
      *(double *)(lVar16 + 0x38) = (double)(param_1->GlobalSettings).WarpForwards;
      *(double *)(lVar16 + 0x40) = (double)(param_1->GlobalSettings).SidewaysOffset;
      *(double *)(lVar16 + 0x48) = (double)(param_1->GlobalSettings).WarpSplay;
      uVar14 = local_238._8_8_ & 0xffffffff;
    }
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
  }
  return;
LAB_14df4a729:
  if ((FInstancedStruct *)(pFVar19 + 1) != pFVar34) {
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)(pFVar19 + 1),(pFVar34->ScriptStruct).field0_0x0.DebugPtr,
               pFVar34->StructMemory);
  }
LAB_14df4a77a:
  pFVar27 = pFVar27 + 1;
  pFVar34 = pFVar34 + 2;
  goto LAB_14df4a650;
}

