// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// operator= @ 14dff32d0

FHairStrandsDatas * __thiscall
FHairStrandsDatas::operator=(FHairStrandsDatas *this,FHairStrandsDatas *param_1)

{
  undefined8 uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  
  FHairStrandsPoints::operator=((FHairStrandsPoints *)this,(FHairStrandsPoints *)param_1);
  FHairStrandsCurves::operator=
            ((FHairStrandsCurves *)&this->_padding_,(FHairStrandsCurves *)&param_1->_padding_);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->HairDensity = param_1->HairDensity;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Min.field0_0x0 + 8);
  *(undefined8 *)&(this->BoundingBox).Min.field0_0x0 =
       *(undefined8 *)&(param_1->BoundingBox).Min.field0_0x0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 8) = uVar1;
  *(undefined8 *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->BoundingBox).Max.field0_0x0 + 4);
  uVar2 = (param_1->BoundingBox).Pad[0];
  uVar3 = (param_1->BoundingBox).Pad[1];
  uVar4 = (param_1->BoundingBox).Pad[2];
  (this->BoundingBox).IsValid = (param_1->BoundingBox).IsValid;
  (this->BoundingBox).Pad[0] = uVar2;
  (this->BoundingBox).Pad[1] = uVar3;
  (this->BoundingBox).Pad[2] = uVar4;
  return this;
}

// FHairStrandsDatas @ 14e07cd30

FHairStrandsDatas * __thiscall FHairStrandsDatas::FHairStrandsDatas(FHairStrandsDatas *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this->HairDensity = 0x3f800000;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->BoundingBox).Max.field0_0x0 = 0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  return this;
}

// CopyCurve @ 14e08e630

void __cdecl
FHairStrandsDatas::CopyCurve
          (FHairStrandsDatas *param_1,FHairStrandsDatas *param_2,uint param_3,uint param_4,
          uint param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar9 = (longlong)(int)param_4;
  uVar10 = ~param_4 >> 0x1f;
  uVar6 = 0;
  if ((int)param_4 < (int)param_1->_padding_) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar8 = (longlong)(int)param_5;
  uVar7 = ~param_5 >> 0x1f;
  uVar1 = *(undefined4 *)(param_1->_padding_ + lVar9 * 4);
  uVar6 = 0;
  if ((int)param_5 < (int)param_2->_padding_) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(param_2->_padding_ + lVar8 * 4) = uVar1;
  if ((param_3 & 1) != 0) {
    uVar6 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar6 = uVar7;
    }
    uVar2 = *(undefined8 *)(param_1->_padding_ + lVar9 * 8);
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined8 *)(param_2->_padding_ + lVar8 * 8) = uVar2;
  }
  if ((param_3 & 8) != 0) {
    uVar6 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(undefined8 *)(param_1->_padding_ + lVar9 * 0xc);
    uVar1 = *(undefined4 *)(param_1->_padding_ + 8 + lVar9 * 0xc);
    uVar6 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = param_2->_padding_;
    *(undefined8 *)(lVar3 + lVar8 * 0xc) = uVar2;
    *(undefined4 *)(lVar3 + 8 + lVar8 * 0xc) = uVar1;
    uVar6 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(undefined8 *)(param_1->_padding_ + lVar9 * 0xc);
    uVar1 = *(undefined4 *)(param_1->_padding_ + 8 + lVar9 * 0xc);
    uVar6 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = param_2->_padding_;
    *(undefined8 *)(lVar3 + lVar8 * 0xc) = uVar2;
    *(undefined4 *)(lVar3 + 8 + lVar8 * 0xc) = uVar1;
  }
  if ((param_3 & 4) != 0) {
    uVar6 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = *(undefined4 *)(param_1->_padding_ + lVar9 * 4);
    uVar6 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(param_2->_padding_ + lVar8 * 4) = uVar1;
  }
  if ((param_3 & 2) != 0) {
    uVar6 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(undefined8 *)(param_1->_padding_ + lVar9 * 0xc);
    uVar1 = *(undefined4 *)(param_1->_padding_ + 8 + lVar9 * 0xc);
    uVar6 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = param_2->_padding_;
    *(undefined8 *)(lVar3 + lVar8 * 0xc) = uVar2;
    *(undefined4 *)(lVar3 + 8 + lVar8 * 0xc) = uVar1;
  }
  if ((int)param_2->_padding_ != 0) {
    if ((-1 < (int)param_4) && ((int)param_4 < (int)param_1->_padding_)) {
      uVar6 = 0;
      if ((int)param_4 < (int)param_1->_padding_) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_4 = *(uint *)(param_1->_padding_ + lVar9 * 4);
    }
    uVar6 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)(param_2->_padding_ + lVar8 * 4) = param_4;
  }
  return;
}

// CopyPoint @ 14e08ebd0

void __cdecl
FHairStrandsDatas::CopyPoint
          (FHairStrandsDatas *param_1,FHairStrandsDatas *param_2,uint param_3,uint param_4,
          uint param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar10 = (longlong)(int)param_4;
  uVar11 = ~param_4 >> 0x1f;
  uVar8 = 0;
  if ((int)param_4 < (int)param_1->_padding_) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar12 = (longlong)(int)param_5;
  uVar2 = *(undefined8 *)(param_1->_padding_ + lVar10 * 0xc);
  uVar3 = *(undefined4 *)(param_1->_padding_ + 8 + lVar10 * 0xc);
  uVar9 = ~param_5 >> 0x1f;
  uVar8 = 0;
  if ((int)param_5 < (int)param_2->_padding_) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = param_2->_padding_;
  *(undefined8 *)(lVar4 + lVar12 * 0xc) = uVar2;
  *(undefined4 *)(lVar4 + 8 + lVar12 * 0xc) = uVar3;
  uVar8 = 0;
  if ((int)param_4 < (int)param_1->_padding_) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = *(undefined4 *)(param_1->_padding_ + lVar10 * 4);
  uVar8 = 0;
  if ((int)param_5 < (int)param_2->_padding_) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)(param_2->_padding_ + lVar12 * 4) = uVar3;
  uVar8 = 0;
  if ((int)param_4 < (int)param_1->_padding_) {
    uVar8 = uVar11;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = *(undefined4 *)(param_1->_padding_ + lVar10 * 4);
  uVar8 = 0;
  if ((int)param_5 < (int)param_2->_padding_) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)(param_2->_padding_ + lVar12 * 4) = uVar3;
  if ((param_3 & 0x10) != 0) {
    uVar8 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar8 = uVar11;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar1 = (undefined8 *)(param_1->_padding_ + lVar10 * 0x10);
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    uVar8 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar1 = (undefined8 *)(param_2->_padding_ + lVar12 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar6;
  }
  if ((param_3 & 0x20) != 0) {
    uVar8 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar8 = uVar11;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar3 = *(undefined4 *)(param_1->_padding_ + lVar10 * 4);
    uVar8 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)(param_2->_padding_ + lVar12 * 4) = uVar3;
  }
  if ((param_3 & 0x40) != 0) {
    uVar8 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar8 = uVar11;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar3 = *(undefined4 *)(param_1->_padding_ + lVar10 * 4);
    uVar8 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)(param_2->_padding_ + lVar12 * 4) = uVar3;
  }
  if ((int)param_2->_padding_ != 0) {
    if ((-1 < (int)param_4) && ((int)param_4 < (int)param_1->_padding_)) {
      uVar8 = 0;
      if ((int)param_4 < (int)param_1->_padding_) {
        uVar8 = uVar11;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      param_4 = *(uint *)(param_1->_padding_ + lVar10 * 4);
    }
    uVar8 = 0;
    if ((int)param_5 < (int)param_2->_padding_) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(uint *)(param_2->_padding_ + lVar12 * 4) = param_4;
  }
  return;
}

// CopyPointLerp @ 14e08f0b0

void __cdecl
FHairStrandsDatas::CopyPointLerp
          (FHairStrandsDatas *param_1,FHairStrandsDatas *param_2,uint param_3,uint param_4,
          uint param_5,float param_6,uint param_7)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 local_98;
  
  lVar15 = (longlong)(int)param_5;
  uVar14 = ~param_5 >> 0x1f;
  uVar12 = 0;
  if ((int)param_5 < (int)param_1->_padding_) {
    uVar12 = uVar14;
  }
  lVar18 = (longlong)(int)param_4;
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar8 = param_1->_padding_;
  uVar16 = ~param_4 >> 0x1f;
  uVar12 = 0;
  if ((int)param_4 < (int)param_1->_padding_) {
    uVar12 = uVar16;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar9 = param_1->_padding_;
  lVar19 = (longlong)(int)param_7;
  fVar2 = *(float *)(lVar9 + lVar18 * 0xc);
  fVar3 = *(float *)(lVar9 + 4 + lVar18 * 0xc);
  fVar4 = *(float *)(lVar9 + 8 + lVar18 * 0xc);
  uVar13 = ~param_7 >> 0x1f;
  fVar5 = *(float *)(lVar8 + lVar15 * 0xc);
  fVar6 = *(float *)(lVar8 + 4 + lVar15 * 0xc);
  fVar7 = *(float *)(lVar8 + 8 + lVar15 * 0xc);
  uVar12 = 0;
  if ((int)param_7 < (int)param_2->_padding_) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar8 = param_2->_padding_;
  *(float *)(lVar8 + lVar19 * 0xc) = (fVar5 - fVar2) * param_6 + fVar2;
  *(float *)(lVar8 + 4 + lVar19 * 0xc) = (fVar6 - fVar3) * param_6 + fVar3;
  *(float *)(lVar8 + 8 + lVar19 * 0xc) = (fVar7 - fVar4) * param_6 + fVar4;
  uVar12 = 0;
  if ((int)param_5 < (int)param_1->_padding_) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar8 = param_1->_padding_;
  uVar12 = 0;
  if ((int)param_4 < (int)param_1->_padding_) {
    uVar12 = uVar16;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar2 = *(float *)(param_1->_padding_ + lVar18 * 4);
  fVar3 = *(float *)(lVar8 + lVar15 * 4);
  uVar12 = 0;
  if ((int)param_7 < (int)param_2->_padding_) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(float *)(param_2->_padding_ + lVar19 * 4) = (fVar3 - fVar2) * param_6 + fVar2;
  uVar12 = 0;
  if ((int)param_5 < (int)param_1->_padding_) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar8 = param_1->_padding_;
  uVar12 = 0;
  if ((int)param_4 < (int)param_1->_padding_) {
    uVar12 = uVar16;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar2 = *(float *)(param_1->_padding_ + lVar18 * 4);
  fVar3 = *(float *)(lVar8 + lVar15 * 4);
  uVar12 = 0;
  if ((int)param_7 < (int)param_2->_padding_) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(float *)(param_2->_padding_ + lVar19 * 4) = (fVar3 - fVar2) * param_6 + fVar2;
  if ((param_3 & 0x10) != 0) {
    uVar12 = 0;
    if ((int)param_5 < (int)param_1->_padding_) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pfVar17 = (float *)(lVar15 * 0x10 + param_1->_padding_);
    uVar12 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar12 = uVar16;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = param_1->_padding_;
    fVar2 = pfVar17[2];
    fVar3 = *(float *)(lVar8 + 8 + lVar18 * 0x10);
    local_98 = CONCAT44((pfVar17[1] - *(float *)(lVar8 + 4 + lVar18 * 0x10)) * param_6 +
                        *(float *)(lVar8 + 4 + lVar18 * 0x10),
                        (*pfVar17 - *(float *)(lVar8 + lVar18 * 0x10)) * param_6 +
                        *(float *)(lVar8 + lVar18 * 0x10));
    fVar4 = pfVar17[3];
    fVar5 = *(float *)(lVar8 + 0xc + lVar18 * 0x10);
    fVar6 = *(float *)(lVar8 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(lVar8 + 0xc + lVar18 * 0x10);
    uVar12 = 0;
    if ((int)param_7 < (int)param_2->_padding_) {
      uVar12 = uVar13;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    puVar1 = (undefined8 *)(param_2->_padding_ + lVar19 * 0x10);
    *puVar1 = local_98;
    puVar1[1] = CONCAT44((fVar4 - fVar5) * param_6 + fVar7,(fVar2 - fVar3) * param_6 + fVar6);
  }
  if ((param_3 & 0x20) != 0) {
    uVar12 = 0;
    if ((int)param_5 < (int)param_1->_padding_) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = param_1->_padding_;
    uVar12 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar12 = uVar16;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    fVar2 = *(float *)(param_1->_padding_ + lVar18 * 4);
    fVar3 = *(float *)(lVar8 + lVar15 * 4);
    uVar12 = 0;
    if ((int)param_7 < (int)param_2->_padding_) {
      uVar12 = uVar13;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(float *)(param_2->_padding_ + lVar19 * 4) = (fVar3 - fVar2) * param_6 + fVar2;
  }
  if ((param_3 & 0x40) != 0) {
    uVar12 = 0;
    if ((int)param_5 < (int)param_1->_padding_) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar18 = param_1->_padding_;
    uVar12 = 0;
    if ((int)param_4 < (int)param_1->_padding_) {
      uVar12 = uVar16;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    fVar2 = *(float *)(param_1->_padding_ + (longlong)(int)param_4 * 4);
    fVar3 = *(float *)(lVar18 + lVar15 * 4);
    uVar12 = 0;
    if ((int)param_7 < (int)param_2->_padding_) {
      uVar12 = uVar13;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(float *)(param_2->_padding_ + lVar19 * 4) = (fVar3 - fVar2) * param_6 + fVar2;
  }
  if ((int)param_2->_padding_ != 0) {
    if (param_6 < __real_3f000000) {
      param_5 = param_4;
    }
    if ((-1 < (int)param_5) && ((int)param_5 < (int)param_1->_padding_)) {
      uVar12 = 0;
      if ((int)param_5 < (int)param_1->_padding_) {
        uVar12 = ~param_5 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      param_5 = *(uint *)(param_1->_padding_ + (longlong)(int)param_5 * 4);
    }
    uVar12 = 0;
    if ((int)param_7 < (int)param_2->_padding_) {
      uVar12 = uVar13;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(param_2->_padding_ + lVar19 * 4) = param_5;
  }
  return;
}

// Reset @ 14e0aa890

void __thiscall FHairStrandsDatas::Reset(FHairStrandsDatas *this)

{
  FHairStrandsCurves::Reset((FHairStrandsCurves *)&this->_padding_);
  FHairStrandsPoints::Reset((FHairStrandsPoints *)this);
  *(undefined8 *)&(this->BoundingBox).Min.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Min.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->BoundingBox).Max.field0_0x0 + 4) = 0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  this->HairDensity = 1.0;
  return;
}

