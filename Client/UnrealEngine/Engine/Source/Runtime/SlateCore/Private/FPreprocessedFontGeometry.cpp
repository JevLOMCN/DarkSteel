// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// FGlyphHeader> @ 14245a6d0

FArchive * __cdecl
operator<<<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>
          (FArchive *param_1,TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader> *param_2
          )

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Slate::operator<<(param_1,(FGlyphHeader *)&param_2->field_0x4);
  return param_1;
}

// AddGlyph @ 14247ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Slate::FPreprocessedFontGeometry::AddGlyph
          (FPreprocessedFontGeometry *this,int param_1,FPreprocessedGlyphGeometryView *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uchar *_Src;
  short *_Src_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGlyphHeader local_res10;
  undefined1 auStackY_a8 [32];
  TPairInitializer<int_const_&,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader_const_&> local_78;
  uchar *local_68;
  uchar local_60 [4];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_res10._0_4_ = param_1;
  if (((param_2->ContourCount < 0) || (param_2->ContourDataLength < 0)) ||
     (param_2->CoordinateDataLength < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GlyphView.ContourCount >= 0 && GlyphView.ContourDataLength >= 0 && GlyphView.CoordinateDataLength >= 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                       ,0x1b4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  _Src = param_2->ContourDataPtr;
  piVar1 = &(this->ContourData).ArrayNum;
  iVar3 = param_2->ContourDataLength;
  piVar2 = &(this->CoordinateData).ArrayNum;
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = 0;
  local_60[0] = param_2->Flags;
  local_5c = param_2->ContourCount;
  local_58 = *piVar1;
  local_50 = *piVar2;
  local_4c = param_2->CoordinateDataLength;
  local_54 = iVar3;
  if ((_Src == (uchar *)0x0) && (iVar3 != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3,&(this->ContourData).AllocatorInstance,piVar1,
                     &(this->ContourData).ArrayMax);
  if (iVar3 != 0) {
    memcpy((this->ContourData).AllocatorInstance.Data + iVar6,_Src,(longlong)iVar3);
  }
  iVar3 = param_2->CoordinateDataLength;
  _Src_00 = param_2->CoordinateDataPtr;
  if ((_Src_00 == (short *)0x0) && (iVar3 != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,&(this->CoordinateData).AllocatorInstance,piVar2,
                     &(this->CoordinateData).ArrayMax);
  if (iVar3 != 0) {
    memcpy((this->CoordinateData).AllocatorInstance.Data + (longlong)iVar6 * 2,_Src_00,
           (longlong)iVar3 * 2);
  }
  local_78.Value = &local_res10;
  local_68 = local_60;
  TSet<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader_const_&>_>
            ((TSet<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
              *)&this->Glyphs,&local_78,(bool *)&local_78.Value);
  return;
}

// GetAllocatedSize @ 14248abe0

ulong64 __thiscall
UE::Slate::FPreprocessedFontGeometry::GetAllocatedSize(FPreprocessedFontGeometry *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->Glyphs).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return (longlong)(this->ContourData).ArrayMax +
         (ulonglong)((*(int *)&(this->Glyphs).field_0x2c + 0x1fU >> 5) << 2) + lVar2 +
         ((longlong)(this->CoordinateData).ArrayMax +
         (longlong)*(int *)&(this->Glyphs).field_0xc * 0x12) * 2;
}

// GetDataSize @ 14248ccf0

ulong64 __thiscall
UE::Slate::FPreprocessedFontGeometry::GetDataSize(FPreprocessedFontGeometry *this)

{
  return (longlong)(this->ContourData).ArrayNum +
         ((longlong)(*(int *)&(this->Glyphs).field_0x8 - *(int *)&(this->Glyphs).field_0x34) * 0xe +
         (longlong)(this->CoordinateData).ArrayNum) * 2 + 1;
}

// ViewGlyph @ 1424ae450

FPreprocessedGlyphGeometryView * __thiscall
UE::Slate::FPreprocessedFontGeometry::ViewGlyph
          (FPreprocessedFontGeometry *this,FPreprocessedGlyphGeometryView *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPreprocessedGlyphGeometryView *pFVar6;
  byte bVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte bVar10;
  
  if (*(int *)&(this->Glyphs).field_0x8 != *(int *)&(this->Glyphs).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Glyphs).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Glyphs).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->Glyphs).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->Glyphs + (longlong)iVar5 * 0x24;
        if (*(int *)(*(longlong *)&this->Glyphs + (longlong)iVar5 * 0x24) == param_1) {
          pbVar8 = (byte *)(lVar1 + 4);
          if (lVar1 == 0) {
            pbVar8 = (byte *)0x0;
          }
          if (pbVar8 != (byte *)0x0) {
            bVar7 = *pbVar8;
            if ((this->GlobalWindingReversal != false) && ((bVar7 & 0xfe) == 0)) {
              bVar7 = bVar7 ^ 1;
            }
            iVar5 = *(int *)(pbVar8 + 0x10);
            __return_storage_ptr__->ContourCount = *(int *)(pbVar8 + 4);
            __return_storage_ptr__->ContourDataPtr =
                 (uchar *)((this->ContourData).AllocatorInstance.Data + *(int *)(pbVar8 + 8));
            pFVar2 = (this->CoordinateData).AllocatorInstance.Data;
            __return_storage_ptr__->Flags = bVar7;
            __return_storage_ptr__->ContourDataLength = *(int *)(pbVar8 + 0xc);
            __return_storage_ptr__->CoordinateDataLength = *(int *)(pbVar8 + 0x14);
            __return_storage_ptr__->CoordinateDataPtr = (short *)(pFVar2 + (longlong)iVar5 * 2);
            bVar7 = bVar7 & 7;
            bVar10 = bVar7;
            if (bVar7 != 0) goto LAB_1424ae4ca;
            goto LAB_1424ae4d1;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x1c);
      } while (iVar5 != -1);
    }
  }
  bVar7 = this->GlobalWindingReversal;
  bVar10 = (bool)bVar7 != false;
  __return_storage_ptr__->ContourCount = 0;
  __return_storage_ptr__->ContourDataPtr = (uchar *)0x0;
  __return_storage_ptr__->CoordinateDataPtr = (short *)0x0;
  __return_storage_ptr__->Flags = bVar10;
  __return_storage_ptr__->ContourDataLength = 0;
  __return_storage_ptr__->CoordinateDataLength = 0;
  if ((bool)bVar7 != false) {
LAB_1424ae4ca:
    if ((bVar10 & bVar10 - 1) != 0) {
LAB_1424ae4d1:
      if ((bVar7 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FilteredValue == 0 || bHasSingleBit",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\PreprocessedFontGeometry.cpp"
                             ,0x3e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPreprocessedGlyphGeometryView *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

