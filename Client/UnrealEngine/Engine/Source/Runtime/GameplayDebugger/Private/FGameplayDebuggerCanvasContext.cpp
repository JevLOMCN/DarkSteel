// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 17

// FGameplayDebuggerCanvasContext @ 146d3f8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGameplayDebuggerCanvasContext * __thiscall
FGameplayDebuggerCanvasContext::FGameplayDebuggerCanvasContext
          (FGameplayDebuggerCanvasContext *this,UCanvas *param_1,UFont *param_2)

{
  FFontRenderInfo *pFVar1;
  FDepthFieldGlowInfo *pFVar2;
  int iVar3;
  float fVar4;
  UCanvas *local_res8;
  
  pFVar1->bClipText = 0;
  pFVar1->bEnableShadow = 0;
  pFVar2->bEnableGlow = 0;
  (this->Canvas).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Font).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->FontRenderInfo).GlowInfo.GlowColor.field0_0x0 + 8) = 0;
  (this->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  (this->FontRenderInfo).GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  (this->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  (this->FontRenderInfo).GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  if (param_1 == (UCanvas *)0x0) {
    this->DefaultX = 0.0;
    fVar4 = 0.0;
    this->CursorX = 0.0;
  }
  else {
    local_res8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    local_res8 = (UCanvas *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UFont *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&(this->Font).WeakPtr,(FObjectPtr)&local_res8);
    iVar3 = param_1->SafeZonePadX;
    this->DefaultX = (float)iVar3;
    this->CursorX = (float)iVar3;
    fVar4 = (float)param_1->SafeZonePadY;
  }
  this->DefaultY = fVar4;
  this->CursorY = fVar4;
  return this;
}

// DrawIcon @ 146d4abc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCanvasContext::DrawIcon
          (FGameplayDebuggerCanvasContext *this,FColor *param_1,FCanvasIcon *param_2,float param_3,
          float param_4,float param_5)

{
  UCanvas *this_00;
  TObjectPtr<UTexture>_u_0 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  this_00 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UCanvas *)0x0) {
    UCanvas::SetDrawColor(this_00,param_1);
    local_38.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Texture).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38.DebugPtr != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
    }
    local_30._0_4_ = param_2->U;
    local_30._4_4_ = param_2->V;
    uStack_28._0_4_ = param_2->UL;
    uStack_28._4_4_ = param_2->VL;
    UCanvas::DrawIcon(this_00,(FCanvasIcon *)&local_38.ObjectPtr,param_3,param_4,param_5);
  }
  return;
}

// DrawItem @ 146d4ac60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCanvasContext::DrawItem
          (FGameplayDebuggerCanvasContext *this,FCanvasItem *param_1,float param_2,float param_3)

{
  UCanvas *this_00;
  
  this_00 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UCanvas *)0x0) {
    UCanvas::DrawItem(this_00,param_1,param_2,param_3);
  }
  return;
}

// GetLineHeight @ 146d4cf60

float __thiscall FGameplayDebuggerCanvasContext::GetLineHeight(FGameplayDebuggerCanvasContext *this)

{
  UFont *this_00;
  float fVar1;
  
  this_00 = (UFont *)FWeakObjectPtr::Get(&(this->Font).WeakPtr);
  if (this_00 != (UFont *)0x0) {
    fVar1 = UFont::GetMaxCharHeight(this_00);
    return fVar1;
  }
  return 0.0;
}

// GetWorld @ 146d4e300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FGameplayDebuggerCanvasContext::GetWorld(FGameplayDebuggerCanvasContext *this)

{
  bool bVar1;
  UWorld *pUVar2;
  AActor *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (bVar1) {
    pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    return pUVar2;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->PlayerController).WeakPtr);
  if (bVar1) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
    pUVar2 = AActor::GetWorld(this_00);
    return pUVar2;
  }
  return (UWorld *)0x0;
}

// IsLocationVisible @ 146d4f570

bool __thiscall
FGameplayDebuggerCanvasContext::IsLocationVisible
          (FGameplayDebuggerCanvasContext *this,TVector<double> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  float local_res8 [2];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (*(longlong *)&pUVar2[0x12].field_0x20 != 0) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      local_res8[0] = 1.0;
      bVar1 = FConvexVolume::IntersectSphere
                        ((FConvexVolume *)(*(longlong *)&pUVar2[0x12].field_0x20 + 0xf40),param_1,
                         local_res8);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// MeasureString @ 146d51f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCanvasContext::MeasureString
          (FGameplayDebuggerCanvasContext *this,FString *param_1,float *param_2,float *param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  UCanvas *this_00;
  UFont *pUVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  float fVar14;
  float fVar15;
  float local_res8 [2];
  float local_res18 [4];
  FString local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  wchar_t *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68 [3];
  
  pFVar10 = (FScriptContainerElement *)0x0;
  *param_3 = 0.0;
  *param_2 = 0.0;
  this_00 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UCanvas *)0x0) {
    local_98.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar9 = (longlong)local_98.Data.ArrayNum;
    pFVar11 = (param_1->Data).AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_98.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
      FVar13.Data = pFVar10;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_98.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,pFVar11,lVar9 * 2);
      FVar13.Data = local_98.Data.AllocatorInstance.Data;
    }
LAB_146d51fc0:
    fVar2 = __real_3f800000;
    pFVar11 = FVar13.Data + (longlong)local_98.Data.ArrayNum * 2;
    pFVar7 = FVar13.Data;
    if (FVar13.Data != pFVar11) {
      while (*(short *)pFVar7 != 0x7b) {
        pFVar7 = pFVar7 + 2;
        if (pFVar7 == pFVar11) goto LAB_146d51fdf;
      }
      iVar6 = (int)((longlong)pFVar7 - (longlong)FVar13.Data >> 1);
      pFVar7 = FVar13.Data;
      if (iVar6 == -1) goto LAB_146d51fdf;
      do {
        if (*(short *)pFVar7 == 0x7d) {
          iVar12 = (int)((longlong)pFVar7 - (longlong)FVar13.Data >> 1);
          if ((iVar12 != -1) && (iVar6 < iVar12)) {
            ::FString::RemoveAt(&local_98,iVar6,(iVar12 - iVar6) + 1,No);
            FVar13.Data = local_98.Data.AllocatorInstance.Data;
          }
          break;
        }
        pFVar7 = pFVar7 + 2;
      } while (pFVar7 != pFVar11);
      goto LAB_146d51fc0;
    }
LAB_146d51fdf:
    fVar15 = __real_3f800000;
    if (this_00->Canvas->bStereoRendering == false) {
      fVar15 = this_00->Canvas->DPIScale;
    }
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    ::FString::ParseIntoArrayLines(&local_98,&local_88,true);
    pUVar5 = (UFont *)FWeakObjectPtr::Get(&(this->Font).WeakPtr);
    if (0 < local_88.ArrayNum) {
      pFVar11 = pFVar10;
      do {
        uVar8 = (uint)pFVar10;
        local_res8[0] = 0.0;
        local_res18[0] = 0.0;
        uVar4 = 0;
        if ((int)uVar8 < local_88.ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_78 = *(wchar_t **)(pFVar11 + local_88.AllocatorInstance.Data);
        uStack_70 = *(int *)(pFVar11 + 8 + local_88.AllocatorInstance.Data) - 1;
        if (*(int *)(pFVar11 + 8 + local_88.AllocatorInstance.Data) == 0) {
          uStack_70 = 0;
        }
        local_68[0]._12_4_ = uStack_6c;
        local_68[0].Size = uStack_70;
        local_68[0].DataPtr = local_78;
        UCanvas::StrLen(this_00,pUVar5,local_68,local_res8,local_res18,true);
        fVar14 = (fVar2 / fVar15) * local_res8[0];
        pFVar10 = (FScriptContainerElement *)(ulonglong)(uVar8 + 1);
        pFVar11 = pFVar11 + 0x10;
        if (fVar14 <= *param_2) {
          fVar14 = *param_2;
        }
        *param_2 = fVar14;
        *param_3 = (fVar2 / fVar15) * local_res18[0] + *param_3;
      } while ((int)(uVar8 + 1) < local_88.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// MoveToNewLine @ 146d521c0

void __thiscall FGameplayDebuggerCanvasContext::MoveToNewLine(FGameplayDebuggerCanvasContext *this)

{
  UFont *this_00;
  float fVar1;
  
  this_00 = (UFont *)FWeakObjectPtr::Get(&(this->Font).WeakPtr);
  if (this_00 == (UFont *)0x0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = UFont::GetMaxCharHeight(this_00);
  }
  this->CursorX = this->DefaultX;
  this->CursorY = fVar1 + this->CursorY;
  return;
}

// Print @ 146d57db0

void __thiscall
FGameplayDebuggerCanvasContext::Print
          (FGameplayDebuggerCanvasContext *this,FColor *param_1,FString *param_2)

{
  Print(this,param_1,__real_3f800000,param_2);
  return;
}

// Print @ 146d57dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCanvasContext::Print
          (FGameplayDebuggerCanvasContext *this,FColor *param_1,float param_2,FString *param_3)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UFont *pUVar10;
  UObject *pUVar11;
  FText *pFVar12;
  UCanvas *this_00;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8 [2];
  float local_res10 [2];
  FTaggedStringParser local_328;
  FLinearColor_u_0 local_2f8;
  FText local_2e8;
  undefined1 local_2d8 [140];
  float local_24c;
  float local_248;
  float local_244;
  longlong local_240;
  longlong lStack_238;
  
  uVar14 = 0;
  local_328.DefaultColor.field0_0x0._s_0 = param_1->field0_0x0;
  local_328.NodeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.NodeList.ArrayNum = 0;
  local_328.NodeList.ArrayMax = 0;
  local_328.DataString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.DataString.Data.ArrayNum = 0;
  local_328.DataString.Data.ArrayMax = 0;
  FTaggedStringParser::ParseString(&local_328,param_3);
  pUVar10 = (UFont *)FWeakObjectPtr::Get(&(this->Font).WeakPtr);
  fVar19 = 0.0;
  if (pUVar10 == (UFont *)0x0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = UFont::GetMaxCharHeight(pUVar10);
  }
  lVar6 = _UNK_150689688;
  lVar5 = ___xmm_3ff00000000000003ff0000000000000;
  fVar4 = __real_3b808081;
  fVar3 = __real_3f000000;
  uVar16 = uVar14;
  if (0 < local_328.NodeList.ArrayNum) {
    do {
      uVar13 = (uint)uVar14;
      uVar8 = 0;
      if ((int)uVar13 < local_328.NodeList.ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = local_328.NodeList.AllocatorInstance.Data + uVar16;
      if (pFVar15[0x14] != (FScriptContainerElement)0x0) {
        bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
        if ((bVar7) &&
           (pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)this), fVar18 = fVar17 + this->CursorY,
           *(float *)&pUVar11[1].field_0xc <= fVar18 && fVar18 != *(float *)&pUVar11[1].field_0xc))
        {
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          fVar18 = *(float *)&pUVar11[1].field_0x8;
          this->CursorY = 0.0;
          this->DefaultX = fVar18 * fVar3 + this->DefaultX;
        }
        this->CursorX = this->DefaultX;
        this->CursorY = fVar17 + this->CursorY;
      }
      iVar9 = *(int *)(pFVar15 + 8) + -1;
      if (*(int *)(pFVar15 + 8) == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        local_res8[0] = 0.0;
        local_res10[0] = 0.0;
        MeasureString(this,(FString *)pFVar15,local_res8,local_res10);
        local_2f8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar15[0x12]];
        local_2f8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar15[0x11]];
        local_2f8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar15[0x10]];
        local_2f8._s_0.A = param_2;
        pUVar10 = (UFont *)FWeakObjectPtr::Get(&(this->Font).WeakPtr);
        pFVar12 = FText::FromString(&local_2e8,(FString *)pFVar15);
        FCanvasTextItem::FCanvasTextItem
                  ((FCanvasTextItem *)local_2d8,&UE::Math::TVector2<double>::ZeroVector,pFVar12,
                   pUVar10,(FLinearColor *)&local_2f8._s_0);
        if (local_2e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
        }
        if ((this->FontRenderInfo).bEnableShadow != 0) {
          local_2d8._72_4_ = local_2d8._72_4_ | 2;
          local_240 = lVar5;
          lStack_238 = lVar6;
          local_2d8._136_4_ = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.R];
          local_24c = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.G];
          local_248 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.B];
          local_244 = (float)FColor::Black.field0_0x0._3_1_ * fVar4;
        }
        fVar18 = this->CursorY;
        fVar1 = this->CursorX;
        this_00 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        if (this_00 != (UCanvas *)0x0) {
          UCanvas::DrawItem(this_00,(FCanvasItem *)local_2d8,fVar1,fVar18);
        }
        this->CursorX = local_res8[0] + this->CursorX;
        FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2d8);
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x18;
    } while ((int)(uVar13 + 1) < local_328.NodeList.ArrayNum);
  }
  pUVar10 = (UFont *)FWeakObjectPtr::Get(&(this->Font).WeakPtr);
  if (pUVar10 != (UFont *)0x0) {
    fVar19 = UFont::GetMaxCharHeight(pUVar10);
  }
  this->CursorX = this->DefaultX;
  this->CursorY = fVar19 + this->CursorY;
  if (local_328.DataString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.DataString.Data.AllocatorInstance.Data);
  }
  DestructItems<FTaggedStringParser::FNode,int>
            ((FNode *)local_328.NodeList.AllocatorInstance.Data,local_328.NodeList.ArrayNum);
  if ((FNode *)local_328.NodeList.AllocatorInstance.Data != (FNode *)0x0) {
    FMemory::Free(local_328.NodeList.AllocatorInstance.Data);
  }
  return;
}

// Print @ 146d581e0

void __thiscall
FGameplayDebuggerCanvasContext::Print(FGameplayDebuggerCanvasContext *this,FString *param_1)

{
  Print(this,&FColor::White,__real_3f800000,param_1);
  return;
}

// PrintAt @ 146d58200

void __thiscall
FGameplayDebuggerCanvasContext::PrintAt
          (FGameplayDebuggerCanvasContext *this,float param_1,float param_2,FColor *param_3,
          FString *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->CursorX;
  fVar2 = this->CursorY;
  fVar3 = this->DefaultX;
  fVar4 = this->DefaultY;
  this->CursorX = param_1;
  this->CursorY = param_2;
  this->DefaultX = param_1;
  this->DefaultY = param_2;
  Print(this,param_3,__real_3f800000,param_4);
  this->CursorX = fVar1;
  this->CursorY = fVar2;
  this->DefaultX = fVar3;
  this->DefaultY = fVar4;
  return;
}

// PrintAt @ 146d58280

void __thiscall
FGameplayDebuggerCanvasContext::PrintAt
          (FGameplayDebuggerCanvasContext *this,float param_1,float param_2,FColor *param_3,
          float param_4,FString *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->CursorX;
  fVar2 = this->CursorY;
  fVar3 = this->DefaultX;
  fVar4 = this->DefaultY;
  this->CursorX = param_1;
  this->CursorY = param_2;
  this->DefaultX = param_1;
  this->DefaultY = param_2;
  Print(this,param_3,param_4,param_5);
  this->CursorX = fVar1;
  this->CursorY = fVar2;
  this->DefaultX = fVar3;
  this->DefaultY = fVar4;
  return;
}

// PrintAt @ 146d58300

void __thiscall
FGameplayDebuggerCanvasContext::PrintAt
          (FGameplayDebuggerCanvasContext *this,float param_1,float param_2,FString *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->CursorX;
  fVar2 = this->CursorY;
  fVar3 = this->DefaultX;
  fVar4 = this->DefaultY;
  this->CursorX = param_1;
  this->CursorY = param_2;
  this->DefaultX = param_1;
  this->DefaultY = param_2;
  Print(this,&FColor::White,__real_3f800000,param_3);
  this->CursorX = fVar1;
  this->CursorY = fVar2;
  this->DefaultX = fVar3;
  this->DefaultY = fVar4;
  return;
}

// PrintfAtImpl @ 146d58380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGameplayDebuggerCanvasContext::PrintfAtImpl
          (FGameplayDebuggerCanvasContext *this,float param_1,float param_2,FColor *param_3,
          float param_4,wchar_t *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TStringBuilderBase<wchar_t> *this_00;
  undefined1 auStack_4c8 [32];
  FString local_4a8;
  TStringBuilderBase<wchar_t> local_498;
  wchar_t local_478 [512];
  ulonglong local_78 [12];
  
  local_78[0] = __security_cookie.value ^ (ulonglong)auStack_4c8;
  local_498.Base = local_478;
  local_498.CurPos = local_478;
  local_498.bIsDynamic = false;
  local_498.bIsExternal = false;
  local_498.End = (wchar_t *)local_78;
  this_00 = TStringBuilderBase<wchar_t>::AppendV(&local_498,param_5,&stack0x00000038);
  if (this_00->End < this_00->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this_00,1);
  }
  *this_00->CurPos = L'\0';
  ::FString::FString(&local_4a8,this_00->Base);
  fVar1 = this->CursorX;
  fVar2 = this->CursorY;
  fVar3 = this->DefaultX;
  fVar4 = this->DefaultY;
  this->CursorX = param_1;
  this->CursorY = param_2;
  this->DefaultX = param_1;
  this->DefaultY = param_2;
  Print(this,param_3,param_4,&local_4a8);
  this->CursorX = fVar1;
  this->CursorY = fVar2;
  this->DefaultX = fVar3;
  this->DefaultY = fVar4;
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_498);
  return;
}

// PrintfImpl @ 146d584c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGameplayDebuggerCanvasContext::PrintfImpl
          (FGameplayDebuggerCanvasContext *this,FColor *param_1,float param_2,wchar_t *param_3)

{
  TStringBuilderBase<wchar_t> *this_00;
  undefined1 auStack_488 [32];
  FString local_468;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [4];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  local_458.Base = local_438;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  local_458.CurPos = local_438;
  local_458.End = (wchar_t *)local_38;
  this_00 = TStringBuilderBase<wchar_t>::AppendV(&local_458,param_3,&stack0x00000028);
  if (this_00->End < this_00->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this_00,1);
  }
  *this_00->CurPos = L'\0';
  ::FString::FString(&local_468,this_00->Base);
  Print(this,param_1,param_2,&local_468);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  return;
}

// ProjectLocation @ 146d585b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector2<double> * __thiscall
FGameplayDebuggerCanvasContext::ProjectLocation
          (FGameplayDebuggerCanvasContext *this,TVector2<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  UCanvas *this_00;
  TVector<double> *pTVar1;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  this_00 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (UCanvas *)0x0) {
    local_48._0_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    local_48._4_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    local_48._8_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
    local_48._12_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    pTVar1 = UCanvas::Project(this_00,&local_28,(TVector<double> *)&local_48._s_0,true);
    local_48._0_4_ = *(undefined4 *)&pTVar1->field0_0x0;
    local_48._4_4_ = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 4);
    local_48._8_4_ = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 8);
    local_48._12_4_ = *(undefined4 *)((longlong)&pTVar1->field0_0x0 + 0xc);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_48._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_48._s_0.Y;
  return __return_storage_ptr__;
}

