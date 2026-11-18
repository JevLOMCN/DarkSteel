// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// MakePaintNode @ 142ec1c70

FPaintNode * __cdecl
NavigationSimulationOverlay::FPaintNode::MakePaintNode
          (FPaintNode *__return_storage_ptr__,FNavigationSimulationWidgetNodeItem *param_1,
          FPaintGeometry *param_2,FOverlayBrushes *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  EUINavigation EVar4;
  TVector2<float>_u_0_s_0 TVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FPaintNode *pFVar9;
  FSlateBrush *pFVar10;
  float fVar11;
  float local_res8;
  float fStackX_c;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined1 local_18 [16];
  
  (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SourcePoints).ArrayNum = 0;
  (__return_storage_ptr__->SourcePoints).ArrayMax = 0;
  __return_storage_ptr__->ArrowBrush = (FSlateBrush *)0x0;
  TVar5 = (param_2->LocalSize).field0_0x0._s_0;
  EVar4 = param_1->NavigationType;
  local_res8 = TVar5.X;
  fStackX_c = TVar5.Y;
  local_28 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
  local_48 = (double)local_res8;
  dStack_40 = (double)fStackX_c;
  dStack_30 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  local_18 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_38 = local_48;
  dStack_20 = dStack_40;
  if (EVar4 == Left) {
    (__return_storage_ptr__->Direction).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = 0.0;
    if ((local_18 < (undefined1 *)((longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10)
        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar1 = local_18._0_8_;
    *(undefined8 *)(pFVar1 + 8) = local_18._8_8_;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar1 + (longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(double *)pFVar1 = local_28;
    *(double *)(pFVar1 + 8) = dStack_20;
    dStack_40 = dStack_40 * __real_3fe0000000000000;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.X = local_28;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.Y = dStack_40;
    fVar2 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.G];
    fVar3 = FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.B];
    fVar11 = (float)FColor::Cyan.field0_0x0._3_1_ * __real_3b808081;
    (__return_storage_ptr__->Color).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[FColor::Cyan.field0_0x0._s_0.R];
    (__return_storage_ptr__->Color).field0_0x0._s_0.G = fVar2;
    (__return_storage_ptr__->Color).field0_0x0._s_0.B = fVar3;
    (__return_storage_ptr__->Color).field0_0x0._s_0.A = fVar11;
    pFVar10 = param_3->LeftArrowBrush;
  }
  else if (EVar4 == Right) {
    (__return_storage_ptr__->Direction).field0_0x0._s_0.X = -1.0;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = 0.0;
    if ((&local_38 < (double *)((longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(double *)pFVar1 = local_38;
    *(double *)(pFVar1 + 8) = dStack_30;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar1 + (longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(double *)pFVar1 = local_48;
    *(double *)(pFVar1 + 8) = dStack_40;
    dStack_40 = dStack_40 * __real_3fe0000000000000;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.X = local_48;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.Y = dStack_40;
    (__return_storage_ptr__->Color).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
    pFVar10 = param_3->RightArrowBrush;
  }
  else if (EVar4 == Up) {
    (__return_storage_ptr__->Direction).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = 1.0;
    if ((local_18 < (undefined1 *)((longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10)
        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar1 = local_18._0_8_;
    *(undefined8 *)(pFVar1 + 8) = local_18._8_8_;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar1 + (longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(double *)pFVar1 = local_38;
    *(double *)(pFVar1 + 8) = dStack_30;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.X =
         local_38 * __real_3fe0000000000000;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.Y = dStack_30;
    (__return_storage_ptr__->Color).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
    pFVar10 = param_3->UpArrowBrush;
  }
  else {
    if (EVar4 != Down) {
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->Direction).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = -1.0;
    if ((&local_28 < (double *)((longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(double *)pFVar1 = local_28;
    *(double *)(pFVar1 + 8) = dStack_20;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar1 + (longlong)(__return_storage_ptr__->SourcePoints).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPaintNode *)(*pcVar6)();
      return pFVar9;
    }
    iVar8 = (__return_storage_ptr__->SourcePoints).ArrayNum;
    if (iVar8 == (__return_storage_ptr__->SourcePoints).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SourcePoints).ArrayMax);
    }
    (__return_storage_ptr__->SourcePoints).ArrayNum = iVar8 + 1;
    pFVar1 = (__return_storage_ptr__->SourcePoints).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(double *)pFVar1 = local_48;
    *(double *)(pFVar1 + 8) = dStack_40;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.X =
         local_48 * __real_3fe0000000000000;
    (__return_storage_ptr__->SourceCenterPoint).field0_0x0._s_0.Y = dStack_40;
    (__return_storage_ptr__->Color).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
    pFVar10 = param_3->DownArrowBrush;
  }
  __return_storage_ptr__->ArrowBrush = pFVar10;
  return __return_storage_ptr__;
}

