// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FHeader @ 14870fcf0

FHeader * __thiscall
UE::SVT::FHeader::FHeader
          (FHeader *this,TIntVector3<int> *param_1,TIntVector3<int> *param_2,EPixelFormat param_3,
          EPixelFormat param_4,TVector4<float> *param_5,TVector4<float> *param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int iStack_14;
  
  (this->VirtualVolumeAABBMin).field0_0x0._s_0.X = 0x7fffffff;
  *(undefined8 *)&(this->VirtualVolumeResolution).field0_0x0 = 0;
  (this->VirtualVolumeResolution).field0_0x0._s_0.Z = 0;
  *(undefined8 *)&(this->PageTableVolumeResolution).field0_0x0 = 0;
  (this->PageTableVolumeResolution).field0_0x0._s_0.Z = 0;
  (this->VirtualVolumeAABBMin).field0_0x0._s_0.Y = 0x7fffffff;
  (this->VirtualVolumeAABBMin).field0_0x0._s_0.Z = 0x7fffffff;
  (this->VirtualVolumeAABBMax).field0_0x0._s_0.X = -0x80000000;
  (this->VirtualVolumeAABBMax).field0_0x0._s_0.Y = -0x80000000;
  (this->VirtualVolumeAABBMax).field0_0x0._s_0.Z = -0x80000000;
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.X = 0x7fffffff;
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.Y = 0x7fffffff;
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.Z = 0x7fffffff;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.X = -0x80000000;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Y = -0x80000000;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Z = -0x80000000;
  *(undefined2 *)(this->AttributesFormats).Elements = 0;
  *(undefined8 *)&(this->FallbackValues).Elements[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->FallbackValues).Elements[0].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->FallbackValues).Elements[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->FallbackValues).Elements[1].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->VirtualVolumeAABBMin).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->VirtualVolumeAABBMin).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->VirtualVolumeAABBMax).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (this->VirtualVolumeAABBMax).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  iVar4 = (param_2->field0_0x0)._s_0.Z;
  iVar6 = (this->VirtualVolumeAABBMin).field0_0x0._s_0.Z;
  local_18 = (int)*(undefined8 *)&param_2->field0_0x0;
  iStack_14 = (int)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  iVar5 = (this->VirtualVolumeAABBMin).field0_0x0._s_0.Y;
  (this->VirtualVolumeResolution).field0_0x0._s_0.X =
       local_18 - (this->VirtualVolumeAABBMin).field0_0x0._s_0.X;
  (this->VirtualVolumeResolution).field0_0x0._s_0.Y = iStack_14 - iVar5;
  (this->VirtualVolumeResolution).field0_0x0._s_0.Z = iVar4 - iVar6;
  uVar2 = *(undefined8 *)&(this->VirtualVolumeAABBMin).field0_0x0;
  local_18 = (int)uVar2;
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.X =
       (int)(local_18 + (local_18 >> 0x1f & 0xfU)) >> 4;
  iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.Y =
       (int)(iStack_14 + (iStack_14 >> 0x1f & 0xfU)) >> 4;
  iVar4 = (this->VirtualVolumeAABBMin).field0_0x0._s_0.Z;
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.Z = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
  uVar2 = *(undefined8 *)&(this->VirtualVolumeAABBMax).field0_0x0;
  iVar4 = (this->VirtualVolumeAABBMax).field0_0x0._s_0.Z;
  local_18 = (int)uVar2;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.X =
       (int)(local_18 + 0xf + (local_18 + 0xf >> 0x1f & 0xfU)) >> 4;
  iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Y =
       (int)(iStack_14 + 0xf + (iStack_14 + 0xf >> 0x1f & 0xfU)) >> 4;
  iVar4 = iVar4 + 0xf;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Z = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
  uVar2 = *(undefined8 *)&(this->PageTableVolumeAABBMax).field0_0x0;
  iVar5 = (this->PageTableVolumeAABBMax).field0_0x0._s_0.Z -
          (this->PageTableVolumeAABBMin).field0_0x0._s_0.Z;
  iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
  iVar4 = (this->PageTableVolumeAABBMin).field0_0x0._s_0.Y;
  local_18 = (int)uVar2;
  (this->PageTableVolumeResolution).field0_0x0._s_0.X =
       local_18 - (this->PageTableVolumeAABBMin).field0_0x0._s_0.X;
  (this->PageTableVolumeResolution).field0_0x0._s_0.Y = iStack_14 - iVar4;
  (this->PageTableVolumeResolution).field0_0x0._s_0.Z = iVar5;
  iVar4 = (this->PageTableVolumeResolution).field0_0x0._s_0.X;
  iVar6 = 1;
  if (iVar4 != 0) {
    iVar6 = iVar4;
  }
  uVar1 = (ulonglong)(iVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar4 = (this->PageTableVolumeResolution).field0_0x0._s_0.Y;
  iVar7 = 1 << ((byte)lVar3 & 0x1f);
  (this->PageTableVolumeResolution).field0_0x0._s_0.X = iVar7;
  iVar6 = 1;
  if (iVar4 != 0) {
    iVar6 = iVar4;
  }
  uVar1 = (ulonglong)(iVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar6 = 1 << ((byte)lVar3 & 0x1f);
  (this->PageTableVolumeResolution).field0_0x0._s_0.Y = iVar6;
  iVar4 = 1;
  if (iVar5 != 0) {
    iVar4 = iVar5;
  }
  uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar5 = 1 << ((byte)lVar3 & 0x1f);
  (this->PageTableVolumeResolution).field0_0x0._s_0.Z = iVar5;
  uVar2 = *(undefined8 *)&(this->PageTableVolumeAABBMin).field0_0x0;
  iVar4 = (this->PageTableVolumeAABBMin).field0_0x0._s_0.Z;
  local_18 = (int)uVar2;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.X = local_18 + iVar7;
  iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Y = iStack_14 + iVar6;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Z = iVar4 + iVar5;
  (this->AttributesFormats).Elements[0] = param_3;
  (this->AttributesFormats).Elements[1] = param_4;
  uVar2 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  *(undefined8 *)&(this->FallbackValues).Elements[0].field0_0x0 =
       *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)((longlong)&(this->FallbackValues).Elements[0].field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
  *(undefined8 *)&(this->FallbackValues).Elements[1].field0_0x0 =
       *(undefined8 *)&param_6->field0_0x0;
  *(undefined8 *)((longlong)&(this->FallbackValues).Elements[1].field0_0x0 + 8) = uVar2;
  return this;
}

// UpdatePageTableFromGlobalNumMipLevels @ 14875e4f0

void __thiscall UE::SVT::FHeader::UpdatePageTableFromGlobalNumMipLevels(FHeader *this,int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int iStack_34;
  int local_2c;
  int iStack_28;
  int local_20;
  int iStack_1c;
  int local_14;
  int iStack_10;
  
  if (0x1f < param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumMipLevelsGlobal < 32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = *(undefined8 *)&(this->VirtualVolumeAABBMin).field0_0x0;
  local_20 = (int)uVar2;
  iVar10 = 1 << ((char)param_1 - 1U & 0x1f);
  local_20 = (local_20 >> 0x1f & 0xfU) + local_20;
  iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
  iVar7 = local_20 >> 4;
  iStack_1c = (iStack_1c >> 0x1f & 0xfU) + iStack_1c;
  iVar6 = (this->VirtualVolumeAABBMin).field0_0x0._s_0.Z;
  iVar8 = iStack_1c >> 4;
  iVar6 = (iVar6 >> 0x1f & 0xfU) + iVar6;
  iVar9 = iVar6 >> 4;
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.X =
       iVar7 - (int)(CONCAT44(local_20 >> 0x1f,iVar7) % (longlong)iVar10);
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.Y =
       iVar8 - (int)(CONCAT44(iStack_1c >> 0x1f,iVar8) % (longlong)iVar10);
  (this->PageTableVolumeAABBMin).field0_0x0._s_0.Z =
       iVar9 - (int)(CONCAT44(iVar6 >> 0x1f,iVar9) % (longlong)iVar10);
  iVar6 = (this->VirtualVolumeAABBMax).field0_0x0._s_0.Z;
  uVar2 = *(undefined8 *)&(this->VirtualVolumeAABBMax).field0_0x0;
  local_38 = (int)uVar2;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.X =
       (int)(local_38 + 0xf + (local_38 + 0xf >> 0x1f & 0xfU)) >> 4;
  iStack_34 = (int)((ulonglong)uVar2 >> 0x20);
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Y =
       (int)(iStack_34 + 0xf + (iStack_34 + 0xf >> 0x1f & 0xfU)) >> 4;
  iVar6 = iVar6 + 0xf;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Z = (int)(iVar6 + (iVar6 >> 0x1f & 0xfU)) >> 4;
  uVar2 = *(undefined8 *)&(this->PageTableVolumeAABBMax).field0_0x0;
  iVar6 = (this->PageTableVolumeAABBMax).field0_0x0._s_0.Z;
  iVar7 = (this->PageTableVolumeAABBMin).field0_0x0._s_0.Z;
  iStack_10 = (int)((ulonglong)uVar2 >> 0x20);
  iVar8 = (this->PageTableVolumeAABBMin).field0_0x0._s_0.Y;
  local_14 = (int)uVar2;
  (this->PageTableVolumeResolution).field0_0x0._s_0.X =
       local_14 - (this->PageTableVolumeAABBMin).field0_0x0._s_0.X;
  (this->PageTableVolumeResolution).field0_0x0._s_0.Y = iStack_10 - iVar8;
  (this->PageTableVolumeResolution).field0_0x0._s_0.Z = iVar6 - iVar7;
  iVar6 = (this->PageTableVolumeResolution).field0_0x0._s_0.X;
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar8 = 1 << ((byte)lVar3 & 0x1f);
  iVar6 = (this->PageTableVolumeResolution).field0_0x0._s_0.Y;
  (this->PageTableVolumeResolution).field0_0x0._s_0.X = iVar8;
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar6 = (this->PageTableVolumeResolution).field0_0x0._s_0.Z;
  iVar9 = 1 << ((byte)lVar3 & 0x1f);
  (this->PageTableVolumeResolution).field0_0x0._s_0.Y = iVar9;
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  uVar1 = (ulonglong)(iVar7 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar7 = 1 << ((byte)lVar3 & 0x1f);
  (this->PageTableVolumeResolution).field0_0x0._s_0.Z = iVar7;
  uVar2 = *(undefined8 *)&(this->PageTableVolumeAABBMin).field0_0x0;
  iVar6 = (this->PageTableVolumeAABBMin).field0_0x0._s_0.Z;
  local_2c = (int)uVar2;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.X = local_2c + iVar8;
  iStack_28 = (int)((ulonglong)uVar2 >> 0x20);
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Y = iStack_28 + iVar9;
  (this->PageTableVolumeAABBMax).field0_0x0._s_0.Z = iVar6 + iVar7;
  return;
}

// Validate @ 14875ec60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::SVT::FHeader::Validate(FHeader *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
LAB_14875ec80:
  switch((this->AttributesFormats).Elements[lVar4]) {
  case PF_Unknown:
  case PF_A32B32G32R32F:
  case PF_B8G8R8A8:
  case PF_G8:
  case PF_FloatRGBA:
  case PF_R32_FLOAT:
  case PF_G16R16F:
  case PF_G32R32F:
  case PF_A2B10G10R10:
  case PF_R16F:
  case PF_FloatR11G11B10:
  case PF_R8G8B8A8:
  case PF_R8G8:
  case PF_R8:
    break;
  default:
    if (!param_1) {
      return false;
    }
    if ((byte)LogSparseVolumeTexture._0_1_ < 3) {
      return false;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSparseVolumeTexture);
    return false;
  }
  lVar4 = lVar4 + 1;
  if (1 < lVar4) {
    iVar1 = (this->PageTableVolumeResolution).field0_0x0._s_0.X;
    if (((iVar1 < 0x801) &&
        (iVar2 = (this->PageTableVolumeResolution).field0_0x0._s_0.Y, iVar2 < 0x801)) &&
       (iVar3 = (this->PageTableVolumeResolution).field0_0x0._s_0.Z, iVar3 < 0x801)) {
      if ((longlong)iVar1 * (longlong)iVar2 * (longlong)iVar3 * 4 < 0x80000001) {
        return true;
      }
      if ((param_1) && (2 < (byte)LogSparseVolumeTexture._0_1_)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSparseVolumeTexture);
        return false;
      }
    }
    else if ((param_1) && (2 < (byte)LogSparseVolumeTexture._0_1_)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSparseVolumeTexture);
      return false;
    }
    return false;
  }
  goto LAB_14875ec80;
}

