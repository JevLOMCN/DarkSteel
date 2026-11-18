// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// FCameraDebugGraphDrawParams @ 14d58c400

FCameraDebugGraphDrawParams * __thiscall
UE::Cameras::FCameraDebugGraphDrawParams::FCameraDebugGraphDrawParams
          (FCameraDebugGraphDrawParams *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ForElementType<FLinearColor> FVar6;
  float fVar7;
  
  FText::FText(&this->GraphName);
  fVar4 = __real_3b808081;
  piVar1 = &(this->GraphLineColors).ArrayMax;
  this->HistoryTime = 0.0;
  (this->GraphLineColors).AllocatorInstance.SecondaryData = (ForElementType<FLinearColor>)0x0;
  (this->GraphLineColors).ArrayNum = 0;
  *piVar1 = 4;
  fVar7 = GGameplayCamerasDebugBackgroundOpacity * __real_437f0000;
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.G];
  fVar3 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.B];
  (this->GraphBackgroundColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable
       [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.R];
  (this->GraphBackgroundColor).field0_0x0._s_0.G = fVar2;
  (this->GraphBackgroundColor).field0_0x0._s_0.B = fVar3;
  (this->GraphBackgroundColor).field0_0x0._s_0.A = (float)((int)fVar7 & 0xff) * fVar4;
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.G];
  fVar3 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.B];
  uVar5 = (uint)FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.A;
  (this->GraphNameColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable
       [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.R];
  (this->GraphNameColor).field0_0x0._s_0.G = fVar2;
  (this->GraphNameColor).field0_0x0._s_0.B = fVar3;
  (this->GraphNameColor).field0_0x0._s_0.A = (float)uVar5 * fVar4;
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Notice.field0_0x0._s_0.R];
  fVar3 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Notice.field0_0x0._s_0.G];
  fVar7 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Notice.field0_0x0._s_0.B];
  uVar5 = (uint)FCameraDebugColors::CurrentColorScheme.Notice.field0_0x0._s_0.A;
  (this->GraphLineColors).ArrayNum = 1;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
            (0x10,4,1,*piVar1,&(this->GraphLineColors).AllocatorInstance,1,piVar1);
  FVar6 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FLinearColor>)0x0) {
    FVar6 = (ForElementType<FLinearColor>)&this->GraphLineColors;
  }
  *(float *)FVar6 = fVar2;
  *(float *)((longlong)FVar6 + 4) = fVar3;
  *(float *)((longlong)FVar6 + 8) = fVar7;
  *(float *)((longlong)FVar6 + 0xc) = (float)uVar5 * fVar4;
  return this;
}

// GetDefaultMaxHistoryTime @ 14d5a79f0

float __cdecl UE::Cameras::FCameraDebugGraphDrawParams::GetDefaultMaxHistoryTime(void)

{
  return GGameplayCamerasDebugGraphDefaultHistoryTime;
}

// SetupDefaultLineColors<3> @ 14d654580

void __thiscall
UE::Cameras::FCameraDebugGraphDrawParams::SetupDefaultLineColors<3>
          (FCameraDebugGraphDrawParams *this)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  FCameraDebugColors *pFVar7;
  ForElementType<FLinearColor> FVar8;
  TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pFVar7 = FCameraDebugColors::Get();
  pTVar9 = &this->GraphLineColors;
  piVar1 = &(this->GraphLineColors).ArrayMax;
  (this->GraphLineColors).ArrayNum = 0;
  if ((this->GraphLineColors).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
              (0x10,4,0,&pTVar9->AllocatorInstance,0,piVar1);
  }
  fVar4 = __real_3b808081;
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  local_58 = FLinearColor::sRGBToLinearTable[(pFVar7->Error).field0_0x0._s_0.R];
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  fStack_54 = FLinearColor::sRGBToLinearTable[(pFVar7->Error).field0_0x0._s_0.G];
  fStack_50 = FLinearColor::sRGBToLinearTable[(pFVar7->Error).field0_0x0._s_0.B];
  fStack_4c = (float)(pFVar7->Error).field0_0x0._s_0.A * __real_3b808081;
  if (((ulonglong)FVar8 <= &local_58) &&
     (&local_58 < (float *)((longlong)*piVar1 * 0x10 + (longlong)FVar8))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->GraphLineColors).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
                      (0x410,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->GraphLineColors).ArrayNum = iVar6 + 1;
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  puVar2 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
  *puVar2 = CONCAT44(fStack_54,local_58);
  puVar2[1] = CONCAT44(fStack_4c,fStack_50);
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  local_48 = FLinearColor::sRGBToLinearTable[(pFVar7->Good).field0_0x0._s_0.R];
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  fStack_44 = FLinearColor::sRGBToLinearTable[(pFVar7->Good).field0_0x0._s_0.G];
  fStack_40 = FLinearColor::sRGBToLinearTable[(pFVar7->Good).field0_0x0._s_0.B];
  fStack_3c = (float)(pFVar7->Good).field0_0x0._s_0.A * fVar4;
  if (((ulonglong)FVar8 <= &local_48) &&
     (&local_48 < (float *)((longlong)*piVar1 * 0x10 + (longlong)FVar8))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->GraphLineColors).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
                      (0x410,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->GraphLineColors).ArrayNum = iVar6 + 1;
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  puVar2 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
  *puVar2 = CONCAT44(fStack_44,local_48);
  puVar2[1] = CONCAT44(fStack_3c,fStack_40);
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  local_38 = FLinearColor::sRGBToLinearTable[(pFVar7->Notice).field0_0x0._s_0.R];
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  fStack_34 = FLinearColor::sRGBToLinearTable[(pFVar7->Notice).field0_0x0._s_0.G];
  fStack_30 = FLinearColor::sRGBToLinearTable[(pFVar7->Notice).field0_0x0._s_0.B];
  fStack_2c = (float)(pFVar7->Notice).field0_0x0._s_0.A * fVar4;
  if (((ulonglong)FVar8 <= &local_38) &&
     (&local_38 < (float *)((longlong)*piVar1 * 0x10 + (longlong)FVar8))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->GraphLineColors).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
                      (0x410,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->GraphLineColors).ArrayNum = iVar6 + 1;
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  puVar2 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
  *puVar2 = CONCAT44(fStack_34,local_38);
  puVar2[1] = CONCAT44(fStack_2c,fStack_30);
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  local_28 = FLinearColor::sRGBToLinearTable[(pFVar7->Notice2).field0_0x0._s_0.R];
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  fStack_24 = FLinearColor::sRGBToLinearTable[(pFVar7->Notice2).field0_0x0._s_0.G];
  fStack_20 = FLinearColor::sRGBToLinearTable[(pFVar7->Notice2).field0_0x0._s_0.B];
  fStack_1c = (float)(pFVar7->Notice2).field0_0x0._s_0.A * fVar4;
  if (((ulonglong)FVar8 <= &local_28) &&
     (&local_28 < (float *)((longlong)*piVar1 * 0x10 + (longlong)FVar8))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->GraphLineColors).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
                      (0x410,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->GraphLineColors).ArrayNum = iVar6 + 1;
  FVar8 = (this->GraphLineColors).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<FLinearColor>)0x0) {
    FVar8 = (ForElementType<FLinearColor>)pTVar9;
  }
  puVar2 = (undefined8 *)((longlong)FVar8 + (longlong)iVar6 * 0x10);
  *puVar2 = CONCAT44(fStack_24,local_28);
  puVar2[1] = CONCAT44(fStack_1c,fStack_20);
  return;
}

