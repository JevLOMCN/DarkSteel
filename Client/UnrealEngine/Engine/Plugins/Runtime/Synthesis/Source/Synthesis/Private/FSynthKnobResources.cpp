// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// LoadImages @ 14f0e7cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSynthKnobResources::LoadImages(FSynthKnobResources *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  FSlateDynamicImageBrush *pFVar5;
  FName *pFVar6;
  FSlateDynamicImageBrush *pFVar7;
  ForAnyElementType FVar8;
  FDeprecateVector2DParameter local_res8;
  FDeprecateVector2DParameter local_res10;
  FDeprecateVector2DParameter local_res18;
  FDeprecateVector2DParameter local_res20;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TRawPtrProxy<FSlateDynamicImageBrush> local_118;
  TRawPtrProxy<FSlateDynamicImageBrush> local_110;
  TRawPtrProxy<FSlateDynamicImageBrush> local_108;
  TRawPtrProxy<FSlateDynamicImageBrush> local_100;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38;
  
  if (this->bImagesLoaded == false) {
    this->bImagesLoaded = true;
    pIVar3 = IPluginManager::Get();
    uStack_f0 = 9;
    local_f8 = L"Synthesis";
    uStack_80 = CONCAT44(uStack_ec,9);
    local_88 = L"Synthesis";
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_78,&local_88);
    if (*plVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(*(longlong *)*plVar4 + 0x20))((longlong *)*plVar4,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    ::FString::AppendChars(&local_128,"/Content/UI/",0xc);
    ::FString::FString(&local_e8,"SynthKnobLarge.png");
    ::FString::ConcatFF(&local_168,&local_128,&local_e8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::operator_new(0xd0);
    if (pFVar5 == (FSlateDynamicImageBrush *)0x0) {
      local_118.Object = (FSlateDynamicImageBrush *)0x0;
    }
    else {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar8.Data = local_168.Data.AllocatorInstance.Data;
      }
      local_68._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
      local_68._8_8_ = _UNK_15076b1f8;
      local_res8._0_4_ = 0x43160000;
      local_res8._4_4_ = 0x43160000;
      pFVar6 = ::FName::FName(&local_a8,(wchar_t *)FVar8.Data);
      local_118.Object =
           FSlateDynamicImageBrush::FSlateDynamicImageBrush
                     (pFVar5,*pFVar6,&local_res8,(FLinearColor *)&local_68._s_0,NoTile,FullColor);
      if ((((local_118.Object != (FSlateDynamicImageBrush *)0x0) &&
           (*(longlong *)&(local_118.Object)->field_0xb0 != 0)) &&
          (*(longlong *)&(local_118.Object)->field_0xb8 != 0)) &&
         (0 < *(int *)(*(longlong *)&(local_118.Object)->field_0xb8 + 8))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    pFVar5 = (FSlateDynamicImageBrush *)0x0;
    TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
              (&this->DefaultLargeKnob,&local_118);
    ::FString::FString(&local_d8,"SynthKnobLargeOverlay.png");
    ::FString::ConcatFF(&local_158,&local_128,&local_d8);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_168.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
    local_168.Data.ArrayNum = local_158.Data.ArrayNum;
    local_168.Data.ArrayMax = local_158.Data.ArrayMax;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::operator_new(0xd0);
    if (pFVar7 == (FSlateDynamicImageBrush *)0x0) {
      local_110.Object = (FSlateDynamicImageBrush *)0x0;
    }
    else {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar8.Data = local_168.Data.AllocatorInstance.Data;
      }
      local_58._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
      local_58._8_8_ = _UNK_15076b1f8;
      local_res10._0_4_ = 0x43160000;
      local_res10._4_4_ = 0x43160000;
      pFVar6 = ::FName::FName(&local_a0,(wchar_t *)FVar8.Data);
      local_110.Object =
           FSlateDynamicImageBrush::FSlateDynamicImageBrush
                     (pFVar7,*pFVar6,&local_res10,(FLinearColor *)&local_58._s_0,NoTile,FullColor);
      if (((local_110.Object != (FSlateDynamicImageBrush *)0x0) &&
          (*(longlong *)&(local_110.Object)->field_0xb0 != 0)) &&
         ((*(longlong *)&(local_110.Object)->field_0xb8 != 0 &&
          (0 < *(int *)(*(longlong *)&(local_110.Object)->field_0xb8 + 8))))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
              (&this->DefaultLargeKnobOverlay,&local_110);
    ::FString::FString(&local_c8,"SynthKnobMedium.png");
    ::FString::ConcatFF(&local_148,&local_128,&local_c8);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_168.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
    local_168.Data.ArrayNum = local_148.Data.ArrayNum;
    local_168.Data.ArrayMax = local_148.Data.ArrayMax;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::operator_new(0xd0);
    if (pFVar7 == (FSlateDynamicImageBrush *)0x0) {
      local_108.Object = (FSlateDynamicImageBrush *)0x0;
    }
    else {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar8.Data = local_168.Data.AllocatorInstance.Data;
      }
      local_48._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
      local_48._8_8_ = _UNK_15076b1f8;
      local_res18._0_4_ = 0x43160000;
      local_res18._4_4_ = 0x43160000;
      pFVar6 = ::FName::FName(&local_98,(wchar_t *)FVar8.Data);
      local_108.Object =
           FSlateDynamicImageBrush::FSlateDynamicImageBrush
                     (pFVar7,*pFVar6,&local_res18,(FLinearColor *)&local_48._s_0,NoTile,FullColor);
      if (((local_108.Object != (FSlateDynamicImageBrush *)0x0) &&
          (*(longlong *)&(local_108.Object)->field_0xb0 != 0)) &&
         ((*(longlong *)&(local_108.Object)->field_0xb8 != 0 &&
          (0 < *(int *)(*(longlong *)&(local_108.Object)->field_0xb8 + 8))))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
              (&this->DefaultMediumKnob,&local_108);
    ::FString::FString(&local_b8,"SynthKnobMediumOverlay.png");
    ::FString::ConcatFF(&local_138,&local_128,&local_b8);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_168.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
    local_168.Data.ArrayNum = local_138.Data.ArrayNum;
    local_168.Data.ArrayMax = local_138.Data.ArrayMax;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::operator_new(0xd0);
    if (pFVar7 != (FSlateDynamicImageBrush *)0x0) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar8.Data = local_168.Data.AllocatorInstance.Data;
      }
      local_res20._0_4_ = 0x43160000;
      local_38._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
      local_38._8_8_ = _UNK_15076b1f8;
      local_res20._4_4_ = 0x43160000;
      pFVar6 = ::FName::FName(&local_90,(wchar_t *)FVar8.Data);
      pFVar5 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                         (pFVar7,*pFVar6,&local_res20,(FLinearColor *)&local_38._s_0,NoTile,
                          FullColor);
      if ((((pFVar5 != (FSlateDynamicImageBrush *)0x0) && (*(longlong *)&pFVar5->field_0xb0 != 0))
          && (*(longlong *)&pFVar5->field_0xb8 != 0)) &&
         (0 < *(int *)(*(longlong *)&pFVar5->field_0xb8 + 8))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    local_100.Object = pFVar5;
    TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
              (&this->DefaultMediumKnobOverlay,&local_100);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  return;
}

