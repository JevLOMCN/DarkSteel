// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// CreateColorMap @ 1417bef50

void __thiscall FColorList::CreateColorMap(FColorList *this)

{
  int iVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  InitializeColor(this,L"black",&Black,local_res8);
  InitializeColor(this,L"aquamarine",&Aquamarine,local_res8);
  InitializeColor(this,L"bakerchocolate",&BakerChocolate,local_res8);
  InitializeColor(this,L"blue",&Blue,local_res8);
  InitializeColor(this,L"blueviolet",&BlueViolet,local_res8);
  InitializeColor(this,L"brass",&Brass,local_res8);
  InitializeColor(this,L"brightgold",&BrightGold,local_res8);
  InitializeColor(this,L"brown",&Brown,local_res8);
  InitializeColor(this,L"bronze",&Bronze,local_res8);
  InitializeColor(this,L"bronzeii",&BronzeII,local_res8);
  InitializeColor(this,L"cadetblue",&CadetBlue,local_res8);
  InitializeColor(this,L"coolcopper",&CoolCopper,local_res8);
  InitializeColor(this,L"copper",&Copper,local_res8);
  InitializeColor(this,L"coral",&Coral,local_res8);
  InitializeColor(this,L"cornflowerblue",&CornFlowerBlue,local_res8);
  InitializeColor(this,L"cyan",&Cyan,local_res8);
  InitializeColor(this,L"darkbrown",&DarkBrown,local_res8);
  InitializeColor(this,L"darkgreen",&DarkGreen,local_res8);
  InitializeColor(this,L"darkgreencopper",&DarkGreenCopper,local_res8);
  InitializeColor(this,L"darkolivegreen",&DarkOliveGreen,local_res8);
  InitializeColor(this,L"darkorchid",&DarkOrchid,local_res8);
  InitializeColor(this,L"darkpurple",&DarkPurple,local_res8);
  InitializeColor(this,L"darkslateblue",&DarkSlateBlue,local_res8);
  InitializeColor(this,L"darkslategrey",&DarkSlateGrey,local_res8);
  InitializeColor(this,L"darktan",&DarkTan,local_res8);
  InitializeColor(this,L"darkturquoise",&DarkTurquoise,local_res8);
  InitializeColor(this,L"darkwood",&DarkWood,local_res8);
  InitializeColor(this,L"dimgrey",&DimGrey,local_res8);
  InitializeColor(this,L"dustyrose",&DustyRose,local_res8);
  InitializeColor(this,L"feldspar",&Feldspar,local_res8);
  InitializeColor(this,L"firebrick",&Firebrick,local_res8);
  InitializeColor(this,L"forestgreen",&ForestGreen,local_res8);
  InitializeColor(this,L"gold",&Gold,local_res8);
  InitializeColor(this,L"goldenrod",&Goldenrod,local_res8);
  InitializeColor(this,L"green",&Green,local_res8);
  InitializeColor(this,L"greencopper",&GreenCopper,local_res8);
  InitializeColor(this,L"greenyellow",&GreenYellow,local_res8);
  InitializeColor(this,L"grey",&Grey,local_res8);
  InitializeColor(this,L"huntergreen",&HunterGreen,local_res8);
  InitializeColor(this,L"indianred",&IndianRed,local_res8);
  InitializeColor(this,L"khaki",&Khaki,local_res8);
  InitializeColor(this,L"lightblue",&LightBlue,local_res8);
  InitializeColor(this,L"lightgrey",&LightGrey,local_res8);
  InitializeColor(this,L"lightsteelblue",&LightSteelBlue,local_res8);
  InitializeColor(this,L"lightwood",&LightWood,local_res8);
  InitializeColor(this,L"limegreen",&LimeGreen,local_res8);
  InitializeColor(this,L"magenta",&Magenta,local_res8);
  InitializeColor(this,L"mandarianorange",&MandarianOrange,local_res8);
  InitializeColor(this,L"maroon",&Maroon,local_res8);
  InitializeColor(this,L"mediumaquamarine",&MediumAquamarine,local_res8);
  InitializeColor(this,L"mediumblue",&MediumBlue,local_res8);
  InitializeColor(this,L"mediumforestgreen",&MediumForestGreen,local_res8);
  InitializeColor(this,L"mediumgoldenrod",&MediumGoldenrod,local_res8);
  InitializeColor(this,L"mediumorchid",&MediumOrchid,local_res8);
  InitializeColor(this,L"mediumseagreen",&MediumSeaGreen,local_res8);
  InitializeColor(this,L"mediumslateblue",&MediumSlateBlue,local_res8);
  InitializeColor(this,L"mediumspringgreen",&MediumSpringGreen,local_res8);
  InitializeColor(this,L"mediumturquoise",&MediumTurquoise,local_res8);
  InitializeColor(this,L"mediumvioletred",&MediumVioletRed,local_res8);
  InitializeColor(this,L"mediumwood",&MediumWood,local_res8);
  InitializeColor(this,L"midnightblue",&MidnightBlue,local_res8);
  InitializeColor(this,L"navyblue",&NavyBlue,local_res8);
  InitializeColor(this,L"neonblue",&NeonBlue,local_res8);
  InitializeColor(this,L"neonpink",&NeonPink,local_res8);
  InitializeColor(this,L"newmidnightblue",&NewMidnightBlue,local_res8);
  InitializeColor(this,L"newtan",&NewTan,local_res8);
  InitializeColor(this,L"oldgold",&OldGold,local_res8);
  InitializeColor(this,L"orange",&Orange,local_res8);
  InitializeColor(this,L"orangered",&OrangeRed,local_res8);
  InitializeColor(this,L"orchid",&Orchid,local_res8);
  InitializeColor(this,L"palegreen",&PaleGreen,local_res8);
  InitializeColor(this,L"pink",&Pink,local_res8);
  InitializeColor(this,L"plum",&Plum,local_res8);
  InitializeColor(this,L"quartz",&Quartz,local_res8);
  InitializeColor(this,L"red",&Red,local_res8);
  InitializeColor(this,L"richblue",&RichBlue,local_res8);
  InitializeColor(this,L"salmon",&Salmon,local_res8);
  InitializeColor(this,L"scarlet",&Scarlet,local_res8);
  InitializeColor(this,L"seagreen",&SeaGreen,local_res8);
  InitializeColor(this,L"semisweetchocolate",&SemiSweetChocolate,local_res8);
  InitializeColor(this,L"sienna",&Sienna,local_res8);
  InitializeColor(this,L"silver",&Silver,local_res8);
  InitializeColor(this,L"skyblue",&SkyBlue,local_res8);
  InitializeColor(this,L"slateblue",&SlateBlue,local_res8);
  InitializeColor(this,L"spicypink",&SpicyPink,local_res8);
  InitializeColor(this,L"springgreen",&SpringGreen,local_res8);
  InitializeColor(this,L"steelblue",&SteelBlue,local_res8);
  InitializeColor(this,L"summersky",&SummerSky,local_res8);
  InitializeColor(this,L"tan",&Tan,local_res8);
  InitializeColor(this,L"thistle",&Thistle,local_res8);
  InitializeColor(this,L"turquoise",&Turquoise,local_res8);
  InitializeColor(this,L"verydarkbrown",&VeryDarkBrown,local_res8);
  InitializeColor(this,L"verylightgrey",&VeryLightGrey,local_res8);
  InitializeColor(this,L"violet",&Violet,local_res8);
  InitializeColor(this,L"violetred",&VioletRed,local_res8);
  InitializeColor(this,L"wheat",&Wheat,local_res8);
  InitializeColor(this,L"white",&White,local_res8);
  InitializeColor(this,L"yellow",&Yellow,local_res8);
  InitializeColor(this,L"yellowgreen",&YellowGreen,local_res8);
  iVar1 = (this->ColorsLookup).ArrayNum;
  if ((this->ColorsLookup).ArrayMax != iVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,&(this->ColorsLookup).AllocatorInstance,iVar1,
               &(this->ColorsLookup).ArrayMax);
  }
  return;
}

// GetColorIndex @ 1417d2740

int __thiscall FColorList::GetColorIndex(FColorList *this,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FColor *pFVar7;
  FColor *pFVar8;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar8 = (FColor *)0x0;
  iVar5 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  iVar5 = TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
                      *)this,uVar2,&local_18);
  if ((iVar5 != -1) && (lVar3 = (longlong)iVar5 * 0x20 + *(longlong *)&this->ColorsMap, lVar3 != 0))
  {
    pFVar8 = *(FColor **)(lVar3 + 0x10);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = (this->ColorsLookup).AllocatorInstance.Data;
  pFVar7 = &White;
  if (pFVar8 != (FColor *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar4 = pFVar1;
  while( true ) {
    if (pFVar4 == pFVar1 + (longlong)(this->ColorsLookup).ArrayNum * 8) {
      return -1;
    }
    if (*(FColor **)pFVar4 == pFVar7) break;
    pFVar4 = pFVar4 + 8;
  }
  return (int)((longlong)pFVar4 - (longlong)pFVar1 >> 3);
}

// GetColorNameByIndex @ 1417d2810

FString * __thiscall FColorList::GetColorNameByIndex(FColorList *this,int param_1)

{
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  longlong lVar8;
  uint *puVar9;
  undefined4 local_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FColorList *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&BadIndex,L"BadIndex");
    atexit(`FColorList::GetColorNameByIndex'::__l2::_dynamic_atexit_destructor_for__BadIndex__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_1 < 0) || ((this->ColorsLookup).ArrayNum <= param_1)) {
    return &BadIndex;
  }
  uVar6 = 0;
  if (param_1 < (this->ColorsLookup).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar4)();
    return pFVar7;
  }
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ColorsMap).field_0x10;
  iVar2 = *(int *)&(this->ColorsMap).field_0x28;
  iStack_38 = 0;
  local_20 = 0;
  uStack_34 = 1;
  pFVar3 = *(FScriptContainerElement **)
            ((this->ColorsLookup).AllocatorInstance.Data + (longlong)param_1 * 8);
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->ColorsMap).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_60.Array;
    }
    uVar6 = *puVar9;
    while (uVar6 == 0) {
      lVar8 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_1417d293b;
      uVar6 = puVar9[lVar8 + 1];
    }
    uStack_34 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_24 = local_20 + -1 + (int)lVar8;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_1417d293b:
  uStack_28 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = local_6c;
  TStack_60.BaseBitIndex = local_20;
  local_40 = this;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < *(int *)&(this->ColorsMap).field_0x28) {
    do {
      pFVar7 = (FString *)
               (*(longlong *)&this->ColorsMap + (longlong)TStack_60.CurrentBitIndex * 0x20);
      if (pFVar7[1].Data.AllocatorInstance.Data == pFVar3) {
        return pFVar7;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return (FString *)0x0;
}

// GetFColorByIndex @ 1417d3930

FColor * __thiscall FColorList::GetFColorByIndex(FColorList *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FColor *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ColorsLookup).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->ColorsLookup).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FColor *)(*pcVar1)();
        return pFVar4;
      }
    }
    return *(FColor **)((this->ColorsLookup).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return &White;
}

// GetFColorByName @ 1417d39c0

FColor * __thiscall FColorList::GetFColorByName(FColorList *this,wchar_t *param_1)

{
  uint uVar1;
  longlong lVar2;
  FColor *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FColor *pFVar6;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar6 = (FColor *)0x0;
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
  iVar4 = TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
                      *)this,uVar1,&local_18);
  if ((iVar4 != -1) && (lVar2 = (longlong)iVar4 * 0x20 + *(longlong *)&this->ColorsMap, lVar2 != 0))
  {
    pFVar6 = *(FColor **)(lVar2 + 0x10);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar3 = &White;
  if (pFVar6 != (FColor *)0x0) {
    pFVar3 = pFVar6;
  }
  return pFVar3;
}

// GetFLinearColorByName @ 1417d3a50

FLinearColor * __thiscall
FColorList::GetFLinearColorByName
          (FColorList *this,FLinearColor *__return_storage_ptr__,wchar_t *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForAnyElementType FVar4;
  byte *pbVar5;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  pbVar5 = (byte *)0x0;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
  iVar3 = TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
                      *)this,uVar1,&local_18);
  if ((iVar3 != -1) && (lVar2 = (longlong)iVar3 * 0x20 + *(longlong *)&this->ColorsMap, lVar2 != 0))
  {
    pbVar5 = *(byte **)(lVar2 + 0x10);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pbVar5 != (byte *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.R = FLinearColor::sRGBToLinearTable[pbVar5[2]];
    (__return_storage_ptr__->field0_0x0)._s_0.G = FLinearColor::sRGBToLinearTable[pbVar5[1]];
    (__return_storage_ptr__->field0_0x0)._s_0.B = FLinearColor::sRGBToLinearTable[*pbVar5];
    (__return_storage_ptr__->field0_0x0)._s_0.A = (float)pbVar5[3] * __real_3b808081;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// InitializeColor @ 1417dc2c0

void __thiscall
FColorList::InitializeColor(FColorList *this,wchar_t *param_1,FColor *param_2,int *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FColor *local_res18 [2];
  FString *local_28;
  FColor **local_20;
  FString local_18;
  
  local_res18[0] = param_2;
  ::FString::FString(&local_18,param_1);
  local_28 = &local_18;
  local_20 = local_res18;
  TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FColor_const_*_const_&>_>
            ((TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FColor_const_*_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = (this->ColorsLookup).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->ColorsLookup).ArrayMax * 8)
     ) {
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
  iVar5 = (this->ColorsLookup).ArrayNum;
  piVar1 = &(this->ColorsLookup).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ColorsLookup).AllocatorInstance,piVar1);
  }
  (this->ColorsLookup).ArrayNum = iVar5 + 1;
  *(FColor **)((this->ColorsLookup).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res18[0];
  *param_3 = *param_3 + 1;
  return;
}

// IsValidColorName @ 1417dea50

bool __thiscall FColorList::IsValidColorName(FColorList *this,wchar_t *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  lVar5 = 0;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
  iVar3 = TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
                      *)this,uVar1,&local_18);
  if ((iVar3 != -1) && (lVar2 = (longlong)iVar3 * 0x20 + *(longlong *)&this->ColorsMap, lVar2 != 0))
  {
    lVar5 = *(longlong *)(lVar2 + 0x10);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return lVar5 != 0;
}

// LogColors @ 1417e05b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FColorList::LogColors(FColorList *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  FColorList *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
              *)this);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = this;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pFVar5 = (this->ColorsLookup).AllocatorInstance.Data;
      pFVar1 = pFVar5 + (longlong)(this->ColorsLookup).ArrayNum * 8;
      for (; (pFVar5 != pFVar1 &&
             (*(longlong *)pFVar5 != *(longlong *)((longlong)(int)uVar4 * 0x20 + 0x10 + *local_48)))
          ; pFVar5 = pFVar5 + 8) {
      }
      if (4 < (byte)LogColorList._0_1_) {
        ::FString::PrintfImpl(&local_88,L"(R=%i,G=%i,B=%i,A=%i)");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogColorList);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->ColorsMap).field_0x8 - *(int *)&(local_18->ColorsMap).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (*(int *)&(local_18->ColorsMap).field_0x48 < iVar3)) ||
         (iVar3 < *(int *)&(local_18->ColorsMap).field_0x48)) {
        *(int *)&(local_18->ColorsMap).field_0x48 = iVar3;
        TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FColor_const_*>,TDefaultMapHashableKeyFuncs<FString,FColor_const_*,0>,FDefaultSetAllocator>
                  *)local_18);
      }
    }
  }
  return;
}

