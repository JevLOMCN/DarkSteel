// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FSlateFontKey @ 1424766f0

FSlateFontKey * __thiscall FSlateFontKey::FSlateFontKey(FSlateFontKey *this,FSlateFontKey *param_1)

{
  UObject *pUVar1;
  undefined8 uVar2;
  
  FSlateFontInfo::FSlateFontInfo(&this->FontInfo,&param_1->FontInfo);
  (this->OutlineSettings).OutlineSize = (param_1->OutlineSettings).OutlineSize;
  (this->OutlineSettings).bMiteredCorners = (param_1->OutlineSettings).bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = (param_1->OutlineSettings).bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows =
       (param_1->OutlineSettings).bApplyOutlineToDropShadows;
  pUVar1 = (param_1->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar2 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).OutlineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).OutlineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar2;
  this->Scale = param_1->Scale;
  this->KeyHash = param_1->KeyHash;
  return this;
}

// FSlateFontKey @ 142476770

FSlateFontKey * __thiscall
FSlateFontKey::FSlateFontKey
          (FSlateFontKey *this,FSlateFontInfo *param_1,FFontOutlineSettings *param_2,float param_3)

{
  float fVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  FSlateFontInfo::FSlateFontInfo(&this->FontInfo,param_1);
  (this->OutlineSettings).OutlineSize = param_2->OutlineSize;
  (this->OutlineSettings).bMiteredCorners = param_2->bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = param_2->bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows = param_2->bApplyOutlineToDropShadows;
  pUVar2 = (param_2->OutlineMaterial).field0_0x0.DebugPtr;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  uVar3 = *(undefined8 *)((longlong)&(param_2->OutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(param_2->OutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar3;
  this->KeyHash = 0;
  this->Scale = param_3;
  uVar4 = GetLegacyTypeHash(&this->FontInfo);
  uVar7 = this->KeyHash - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
  uVar6 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar4 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar5 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
  uVar6 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf;
  this->KeyHash = uVar5;
  uVar4 = ::GetTypeHash(&this->OutlineSettings);
  uVar6 = uVar5 - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar7 = (uVar4 - uVar6) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  fVar1 = this->Scale;
  uVar4 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar5 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 << 10;
  uVar6 = ((uVar7 - uVar4) - uVar5 ^ uVar4 >> 0xf) - (int)fVar1 ^ (uint)fVar1 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - (int)fVar1 ^ uVar6 << 8;
  uVar4 = ((int)fVar1 - uVar6) - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  this->KeyHash = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf;
  return this;
}

// IsIdenticalToForCaching @ 14249b2c0

bool __thiscall FSlateFontKey::IsIdenticalToForCaching(FSlateFontKey *this,FSlateFontKey *param_1)

{
  float fVar1;
  float fVar2;
  
  if ((((((this->FontInfo).FontObject.field0_0x0.DebugPtr ==
          (param_1->FontInfo).FontObject.field0_0x0.DebugPtr) &&
        ((this->FontInfo).OutlineSettings.OutlineSize ==
         (param_1->FontInfo).OutlineSettings.OutlineSize)) &&
       ((this->FontInfo).OutlineSettings.bMiteredCorners ==
        (param_1->FontInfo).OutlineSettings.bMiteredCorners)) &&
      (((this->FontInfo).OutlineSettings.bSeparateFillAlpha ==
        (param_1->FontInfo).OutlineSettings.bSeparateFillAlpha &&
       ((this->FontInfo).CompositeFont.Object == (param_1->FontInfo).CompositeFont.Object)))) &&
     ((this->FontInfo).TypefaceFontName == (param_1->FontInfo).TypefaceFontName)) {
    fVar2 = (this->FontInfo).Size;
    fVar1 = (param_1->FontInfo).Size;
    if (__real_477fff00 <= fVar2) {
      fVar2 = __real_477fff00;
    }
    if (__real_477fff00 <= fVar1) {
      fVar1 = __real_477fff00;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    if (((fVar2 == fVar1) &&
        ((this->OutlineSettings).OutlineSize == (param_1->OutlineSettings).OutlineSize)) &&
       (((this->OutlineSettings).bMiteredCorners == (param_1->OutlineSettings).bMiteredCorners &&
        (((this->OutlineSettings).bSeparateFillAlpha ==
          (param_1->OutlineSettings).bSeparateFillAlpha && (param_1->Scale == this->Scale)))))) {
      return true;
    }
  }
  return false;
}

