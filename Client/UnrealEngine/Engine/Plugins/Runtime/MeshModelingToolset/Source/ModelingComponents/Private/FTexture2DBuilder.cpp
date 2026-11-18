// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 23

// BuildTextureFromImage<UE::Math::TVector4<float>_> @ 14ca53b70

UTexture2D * __cdecl
UE::Geometry::FTexture2DBuilder::BuildTextureFromImage<UE::Math::TVector4<float>_>
          (TImageBuilder<UE::Math::TVector4<float>_> *param_1,ETextureType param_2,bool param_3,
          bool param_4)

{
  byte *pbVar1;
  int iVar2;
  FImageDimensions FVar3;
  code *pcVar4;
  bool bVar5;
  EPixelFormat EVar6;
  UTexture2D *pUVar7;
  FTexturePlatformData *pFVar8;
  FColor *pFVar9;
  FFloat16Color *pFVar10;
  TArrayView<unsigned_char_const_,__int64> local_78;
  FTexture2DBuilder local_68;
  
  FVar3 = param_1->Dimensions;
  local_68._padding_ = (longlong)&___7FTexture2DBuilder_Geometry_UE__6B_;
  local_68.CurrentPixelFormat = PF_B8G8R8A8;
  local_78.DataPtr = (uchar *)0x0;
  local_78.ArrayNum = 0;
  local_68.CurrentMipData = (FColor *)0x0;
  local_68.CurrentMipDataFloat16 = (FFloat16Color *)0x0;
  EVar6 = PF_B8G8R8A8;
  if (param_2 == EmissiveHDR) {
    EVar6 = PF_FloatRGBA;
  }
  pUVar7 = UTexture2D::CreateTransient(FVar3.Width,FVar3.Height,EVar6,(FName)0x0,&local_78);
  if ((FVar3.Width != FVar3.Height) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DimensionsIn.IsSquare()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                         ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UTexture2D *)(*pcVar4)();
    return pUVar7;
  }
  local_68.Dimensions = FVar3;
  local_68.BuildType = param_2;
  local_68.RawTexture2D = pUVar7;
  if (pUVar7 == (UTexture2D *)0x0) goto LAB_14ca53e50;
  EVar6 = UTexture2D::GetPixelFormat(pUVar7,0);
  local_68.CurrentPixelFormat = EVar6;
  if ((param_2 - ColorLinear < 4) || (param_2 == AmbientOcclusion)) {
    pbVar1 = (byte *)((longlong)&pUVar7->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
LAB_14ca53c8e:
    (**(code **)(pUVar7->_padding_ + 0x328))(pUVar7);
  }
  else {
    if (param_2 == EmissiveHDR) {
      pbVar1 = (byte *)((longlong)&pUVar7->_padding_ + 6);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined1 *)&pUVar7->_padding_ = 6;
      goto LAB_14ca53c8e;
    }
    if (param_2 == NormalMap) {
      *(undefined1 *)&pUVar7->_padding_ = 1;
      pbVar1 = (byte *)((longlong)&pUVar7->_padding_ + 6);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 7) = 1;
      goto LAB_14ca53c8e;
    }
  }
  if ((local_68.CurrentMipData == (FColor *)0x0) &&
     (local_68.CurrentMipDataFloat16 == (FFloat16Color *)0x0)) {
    pFVar8 = UTexture2D::GetPlatformData(pUVar7);
    iVar2 = (pFVar8->Mips).Array.ArrayNum;
    if (EVar6 == PF_B8G8R8A8) {
      if ((iVar2 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UTexture2D *)(*pcVar4)();
        return pUVar7;
      }
      pFVar9 = FBulkData::Lock((FBulkData *)
                               (*(longlong *)(pFVar8->Mips).Array.AllocatorInstance.Data + 0x20),2);
      pFVar10 = (FFloat16Color *)0x0;
      local_68.CurrentMipData = pFVar9;
      if ((pFVar9 == (FColor *)0x0) &&
         (bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1217805425223663838>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                             ,0xde,"CurrentMipData"), bVar5)) {
code_r0x00014ca53dea:
        pcVar4 = (code *)swi(3);
        pUVar7 = (UTexture2D *)(*pcVar4)();
        return pUVar7;
      }
    }
    else {
      if ((iVar2 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UTexture2D *)(*pcVar4)();
        return pUVar7;
      }
      pFVar10 = FBulkData::Lock((FBulkData *)
                                (*(longlong *)(pFVar8->Mips).Array.AllocatorInstance.Data + 0x20),2)
      ;
      pFVar9 = (FColor *)0x0;
      local_68.CurrentMipDataFloat16 = pFVar10;
      if ((pFVar10 == (FFloat16Color *)0x0) &&
         (bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1217805425223663846>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                             ,0xe6,"CurrentMipDataFloat16"), bVar5)) goto code_r0x00014ca53dea;
    }
    if ((pFVar9 == (FColor *)0x0) && (pFVar10 == (FFloat16Color *)0x0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && ((pFVar9 != (FColor *)0x0 || (pFVar10 != (FFloat16Color *)0x0)))) {
      Clear(&local_68);
    }
  }
  else {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1217805425223663828>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                       ,0xd4,
                       "RawTexture2D != nullptr && CurrentMipData == nullptr && CurrentMipDataFloat16 == nullptr"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UTexture2D *)(*pcVar4)();
      return pUVar7;
    }
  }
LAB_14ca53e50:
  Copy(&local_68,param_1,param_3);
  pFVar10 = local_68.CurrentMipDataFloat16;
  pFVar9 = local_68.CurrentMipData;
  pUVar7 = local_68.RawTexture2D;
  if ((local_68.RawTexture2D == (UTexture2D *)0x0) ||
     ((local_68.CurrentMipData == (FColor *)0x0 &&
      (local_68.CurrentMipDataFloat16 == (FFloat16Color *)0x0)))) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1217805425223663856>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                       ,0xf0,"RawTexture2D != nullptr && IsEditable()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UTexture2D *)(*pcVar4)();
      return pUVar7;
    }
  }
  else {
    pFVar8 = UTexture2D::GetPlatformData(local_68.RawTexture2D);
    if (((pFVar8->Mips).Array.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UTexture2D *)(*pcVar4)();
      return pUVar7;
    }
    FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar8->Mips).Array.AllocatorInstance.Data + 0x20)
                     );
    (**(code **)(pUVar7->_padding_ + 0x328))(pUVar7);
    pFVar9 = (FColor *)0x0;
    pFVar10 = (FFloat16Color *)0x0;
    local_68.CurrentMipData = (FColor *)0x0;
    local_68.CurrentMipDataFloat16 = (FFloat16Color *)0x0;
  }
  local_68._padding_ = (longlong)&___7FTexture2DBuilder_Geometry_UE__6B_;
  if (((pFVar9 != (FColor *)0x0) || (pFVar10 != (FFloat16Color *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEditable() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\AssetUtils\\Texture2DBuilder.h"
                         ,0x3e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UTexture2D *)(*pcVar4)();
    return pUVar7;
  }
  return pUVar7;
}

// ~FTexture2DBuilder @ 14ca6b220

void __thiscall UE::Geometry::FTexture2DBuilder::~FTexture2DBuilder(FTexture2DBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FTexture2DBuilder_Geometry_UE__6B_;
  if ((this->CurrentMipData != (FColor *)0x0) ||
     (this->CurrentMipDataFloat16 != (FFloat16Color *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEditable() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\AssetUtils\\Texture2DBuilder.h"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Cancel @ 14ca7db50

void __thiscall UE::Geometry::FTexture2DBuilder::Cancel(FTexture2DBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  FTexturePlatformData *pFVar3;
  
  if ((this->CurrentMipData != (FColor *)0x0) ||
     (this->CurrentMipDataFloat16 != (FFloat16Color *)0x0)) {
    pFVar3 = UTexture2D::GetPlatformData(this->RawTexture2D);
    if ((pFVar3->Mips).Array.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar3->Mips).Array.AllocatorInstance.Data + 0x20)
                     );
    this->CurrentMipData = (FColor *)0x0;
    this->CurrentMipDataFloat16 = (FFloat16Color *)0x0;
  }
  return;
}

// Clear @ 14ca7e500

void __thiscall UE::Geometry::FTexture2DBuilder::Clear(FTexture2DBuilder *this,FColor *param_1)

{
  FColor **ppFVar1;
  FColor_u_0 FVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  FColor_u_0 *pFVar8;
  ulonglong uVar9;
  
  pFVar8 = &this->CurrentMipData->field0_0x0;
  ppFVar1 = &this->CurrentMipData;
  if (((pFVar8 == (FColor_u_0 *)0x0) && (this->CurrentMipDataFloat16 == (FFloat16Color *)0x0)) ||
     (this->CurrentPixelFormat != PF_B8G8R8A8)) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1217805425223663931>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                       ,0x13b,"IsEditable() && IsByteTexture()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar5 = 0;
    uVar9 = (longlong)(this->Dimensions).Height * (longlong)(this->Dimensions).Width;
    if (0 < (longlong)uVar9) {
      if (3 < uVar9) {
        FVar2 = param_1->field0_0x0;
        if (((ppFVar1 < pFVar8) || (pFVar8 + (uVar9 - 1) < ppFVar1)) &&
           ((param_1 < pFVar8 || (pFVar8 + (uVar9 - 1) < param_1)))) {
          uVar6 = (uint)((longlong)uVar9 >> 0x3f) & 3;
          lVar7 = uVar9 - ((ulonglong)((int)uVar9 + uVar6 & 3) - (ulonglong)uVar6);
          do {
            lVar5 = lVar5 + 4;
          } while (lVar5 < lVar7);
          lVar7 = lVar7 + 3;
          for (lVar7 = ((longlong)((ulonglong)((uint)(lVar7 >> 0x3f) & 3) + lVar7) >> 2 &
                       0xfffffffffffffffU) << 2; lVar7 != 0; lVar7 = lVar7 + -1) {
            pFVar8->_s_0 = (FColor_u_0_s_0)FVar2;
            pFVar8 = pFVar8 + 1;
          }
          if ((longlong)uVar9 <= lVar5) {
            return;
          }
        }
      }
      do {
        (*ppFVar1)[lVar5].field0_0x0._s_0 = (FColor_u_0_s_0)param_1->field0_0x0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (longlong)uVar9);
      return;
    }
  }
  return;
}

// Clear @ 14ca7e620

void __thiscall
UE::Geometry::FTexture2DBuilder::Clear(FTexture2DBuilder *this,FFloat16Color *param_1)

{
  FFloat16Color *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((this->CurrentMipData == (FColor *)0x0) &&
      (this->CurrentMipDataFloat16 == (FFloat16Color *)0x0)) ||
     (this->CurrentPixelFormat != PF_FloatRGBA)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1217805425223663946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                       ,0x14a,"IsEditable() && IsFloat16Texture()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar4 = 0;
    lVar5 = (longlong)(this->Dimensions).Height * (longlong)(this->Dimensions).Width;
    if (0 < lVar5) {
      do {
        pFVar1 = this->CurrentMipDataFloat16 + lVar4;
        (pFVar1->R).Encoded = (param_1->R).Encoded;
        lVar4 = lVar4 + 1;
        (pFVar1->G).Encoded = (param_1->G).Encoded;
        (pFVar1->B).Encoded = (param_1->B).Encoded;
        (pFVar1->A).Encoded = (param_1->A).Encoded;
      } while (lVar4 < lVar5);
      return;
    }
  }
  return;
}

// Clear @ 14ca7e6c0

void __thiscall UE::Geometry::FTexture2DBuilder::Clear(FTexture2DBuilder *this)

{
  FColor **ppFVar1;
  FFloat16Color *pFVar2;
  code *pcVar3;
  bool bVar4;
  FFloat16Color FVar5;
  FColor_u_0 FVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  FColor_u_0 *pFVar10;
  longlong lVar11;
  FColor *pFVar12;
  ulonglong uVar13;
  
  if (this->CurrentPixelFormat == PF_B8G8R8A8) {
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      DefaultColor = FColor::Black;
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar9 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      DefaultAOColor = FColor::White;
      _Init_thread_footer(&::_TSS1);
    }
    switch(this->BuildType) {
    default:
      pFVar12 = &DefaultColor;
      FVar6 = DefaultColor.field0_0x0;
      break;
    case Roughness:
      pFVar12 = &DefaultRoughness;
      FVar6 = DefaultRoughness.field0_0x0;
      break;
    case Metallic:
      pFVar12 = &DefaultMetallic;
      FVar6 = DefaultMetallic.field0_0x0;
      break;
    case Specular:
      pFVar12 = &DefaultSpecular;
      FVar6 = DefaultSpecular.field0_0x0;
      break;
    case NormalMap:
      pFVar12 = &DefaultNormalColor;
      FVar6 = DefaultNormalColor.field0_0x0;
      break;
    case AmbientOcclusion:
      pFVar12 = &DefaultAOColor;
      FVar6 = DefaultAOColor.field0_0x0;
    }
    pFVar10 = &this->CurrentMipData->field0_0x0;
    ppFVar1 = &this->CurrentMipData;
    if (((pFVar10 == (FColor_u_0 *)0x0) && (this->CurrentMipDataFloat16 == (FFloat16Color *)0x0)) ||
       (this->CurrentPixelFormat != PF_B8G8R8A8)) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1217805425223663931>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                         ,0x13b,"IsEditable() && IsByteTexture()");
      if (!bVar4) {
        return;
      }
code_r0x00014ca7e94a:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar11 = 0;
    uVar13 = (longlong)(this->Dimensions).Height * (longlong)(this->Dimensions).Width;
    if (0 < (longlong)uVar13) {
      if (((3 < uVar13) && ((ppFVar1 < pFVar10 || (pFVar10 + (uVar13 - 1) < ppFVar1)))) &&
         ((pFVar12 < pFVar10 || (pFVar10 + (uVar13 - 1) < pFVar12)))) {
        uVar7 = (uint)((longlong)uVar13 >> 0x3f) & 3;
        lVar8 = uVar13 - ((ulonglong)((int)uVar13 + uVar7 & 3) - (ulonglong)uVar7);
        do {
          lVar11 = lVar11 + 4;
        } while (lVar11 < lVar8);
        lVar8 = lVar8 + 3;
        for (lVar8 = ((longlong)((ulonglong)((uint)(lVar8 >> 0x3f) & 3) + lVar8) >> 2 &
                     0xfffffffffffffffU) << 2; lVar8 != 0; lVar8 = lVar8 + -1) {
          pFVar10->_s_0 = (FColor_u_0_s_0)FVar6;
          pFVar10 = pFVar10 + 1;
        }
        if ((longlong)uVar13 <= lVar11) {
          return;
        }
      }
      do {
        (*ppFVar1)[lVar11].field0_0x0 = pFVar12->field0_0x0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (longlong)uVar13);
      return;
    }
  }
  else {
    FVar5 = GetClearColorFloat16(this);
    if (((this->CurrentMipData == (FColor *)0x0) &&
        (this->CurrentMipDataFloat16 == (FFloat16Color *)0x0)) ||
       (this->CurrentPixelFormat != PF_FloatRGBA)) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1217805425223663946>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                         ,0x14a,"IsEditable() && IsFloat16Texture()");
      if (bVar4) goto code_r0x00014ca7e94a;
    }
    else {
      lVar11 = 0;
      lVar8 = (longlong)(this->Dimensions).Height * (longlong)(this->Dimensions).Width;
      if (0 < lVar8) {
        do {
          pFVar2 = this->CurrentMipDataFloat16 + lVar11;
          (pFVar2->R).Encoded = *(ushort *)FVar5;
          lVar11 = lVar11 + 1;
          (pFVar2->G).Encoded = *(ushort *)((longlong)FVar5 + 2);
          (pFVar2->B).Encoded = *(ushort *)((longlong)FVar5 + 4);
          (pFVar2->A).Encoded = *(ushort *)((longlong)FVar5 + 6);
        } while (lVar11 < lVar8);
        return;
      }
    }
  }
  return;
}

// Commit @ 14ca80850

void __thiscall UE::Geometry::FTexture2DBuilder::Commit(FTexture2DBuilder *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FTexturePlatformData *pFVar3;
  
  if ((this->RawTexture2D != (UTexture2D *)0x0) &&
     ((this->CurrentMipData != (FColor *)0x0 ||
      (this->CurrentMipDataFloat16 != (FFloat16Color *)0x0)))) {
    pFVar3 = UTexture2D::GetPlatformData(this->RawTexture2D);
    if ((pFVar3->Mips).Array.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar3->Mips).Array.AllocatorInstance.Data + 0x20)
                     );
    (**(code **)(this->RawTexture2D->_padding_ + 0x328))();
    this->CurrentMipData = (FColor *)0x0;
    this->CurrentMipDataFloat16 = (FFloat16Color *)0x0;
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1217805425223663856>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                     ,0xf0,"RawTexture2D != nullptr && IsEditable()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Copy @ 14ca839e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FTexture2DBuilder::Copy
          (FTexture2DBuilder *this,TImageBuilder<UE::Math::TVector4<float>_> *param_1,bool param_2)

{
  FFloat16Color *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  undefined1 uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 auVar38 [16];
  FLinearColor_u_0 FVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  FColor_u_0 local_res8;
  ushort local_res10;
  ushort uStackX_12;
  ushort uStackX_14;
  ushort uStackX_16;
  FLinearColor_u_0 local_d8 [11];
  
  if (((param_1->Dimensions).Width != (this->Dimensions).Width) ||
     ((param_1->Dimensions).Height != (this->Dimensions).Height)) {
    bVar32 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1217805425223663989>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                        ,0x175,"SourceImage.GetDimensions() == Dimensions");
    if (!bVar32) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar33 = (*pcVar2)();
    return (bool)uVar33;
  }
  if ((this->CurrentPixelFormat == PF_FloatRGBA) &&
     ((param_2 &&
      (bVar32 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1217805425223663995>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                           ,0x17b,"false"), bVar32)))) {
    pcVar2 = (code *)swi(3);
    uVar33 = (*pcVar2)();
    return (bool)uVar33;
  }
  uVar31 = _UNK_1508be48c;
  uVar30 = _UNK_1508be488;
  uVar29 = _UNK_1508be484;
  uVar28 = ___xmm_00000200000002000000020000000200;
  uVar27 = _UNK_1508be47c;
  uVar26 = _UNK_1508be478;
  uVar25 = _UNK_1508be474;
  uVar24 = ___xmm_000001ff000001ff000001ff000001ff;
  fVar23 = _UNK_15068962c;
  fVar22 = _UNK_150689628;
  fVar21 = _UNK_150689624;
  fVar20 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar19 = _UNK_15068959c;
  uVar18 = _UNK_150689598;
  uVar17 = _UNK_150689594;
  uVar16 = ___xmm_00007c0000007c0000007c0000007c00;
  fVar15 = __real_437f0000;
  uVar14 = _UNK_15065157c;
  uVar13 = _UNK_150651578;
  uVar12 = _UNK_150651574;
  uVar11 = __xmm_80000000800000008000000080000000;
  fVar10 = __real_3f000000;
  fVar9 = __real_3f800000;
  lVar35 = 0;
  lVar37 = (longlong)(this->Dimensions).Height * (longlong)(this->Dimensions).Width;
  lVar36 = lVar35;
  if (0 < lVar37) {
    do {
      if (((param_1->Image).Buffer.ArrayNum <= lVar35) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar2 = (code *)swi(3);
        uVar33 = (*pcVar2)();
        return (bool)uVar33;
      }
      FVar39 = (FLinearColor_u_0)
               *(FLinearColor_u_0 *)
                &((FLinearColor_u_0 *)((param_1->Image).Buffer.AllocatorInstance.Data + lVar36))->
                 _s_0;
      fVar3 = FVar39._s_0.R;
      fVar4 = FVar39._4_4_;
      fVar5 = FVar39._8_4_;
      fVar48 = FVar39._s_0.A;
      if (this->CurrentPixelFormat == PF_B8G8R8A8) {
        local_d8[0] = FVar39;
        if (param_2) {
          FLinearColor::ToFColorSRGB((FLinearColor *)&local_d8[0]._s_0);
        }
        else {
          auVar38._4_4_ = fVar5;
          auVar38._0_4_ = fVar5;
          auVar38._8_4_ = fVar5;
          auVar38._12_4_ = fVar5;
          auVar40._4_4_ = fVar4;
          auVar40._0_4_ = fVar4;
          auVar40._8_4_ = fVar4;
          auVar40._12_4_ = fVar4;
          if (fVar5 <= 0.0) {
            auVar6._12_4_ = 0;
            auVar6._0_12_ = auVar38._4_12_;
            auVar38 = auVar6 << 0x20;
          }
          if (fVar4 <= 0.0) {
            auVar7._12_4_ = 0;
            auVar7._0_12_ = auVar40._4_12_;
            auVar40 = auVar7 << 0x20;
          }
          if (fVar9 <= auVar38._0_4_) {
            auVar38._0_4_ = fVar9;
          }
          if (fVar9 <= auVar40._0_4_) {
            auVar40._0_4_ = fVar9;
          }
          if (fVar3 <= 0.0) {
            auVar8._12_4_ = 0;
            auVar8._0_12_ = FVar39._4_12_;
            FVar39 = (FLinearColor_u_0)(auVar8 << 0x20);
          }
          if (fVar48 <= 0.0) {
            fVar48 = 0.0;
          }
          if (fVar9 <= FVar39._s_0.R) {
            FVar39._s_0.R = fVar9;
          }
          if (fVar9 <= fVar48) {
            fVar48 = fVar9;
          }
          local_res8._s_0.G = (char)(int)(auVar40._0_4_ * fVar15 + fVar10);
          local_res8._s_0.B = (char)(int)(auVar38._0_4_ * fVar15 + fVar10);
          local_res8._s_0.R = (char)(int)(FVar39._s_0.R * fVar15 + fVar10);
          local_res8._s_0.A = (char)(int)(fVar48 * fVar15 + fVar10);
        }
        lVar34 = (longlong)(this->Dimensions).Width;
        this->CurrentMipData[(int)(lVar35 / lVar34) * lVar34 + (longlong)(int)(lVar35 % lVar34)].
        field0_0x0 = local_res8;
      }
      else {
        lVar34 = (longlong)(this->Dimensions).Width;
        fVar44 = (float)(~uVar11 & (uint)fVar3);
        fVar45 = (float)(~uVar12 & (uint)fVar4);
        fVar46 = (float)(~uVar13 & (uint)fVar5);
        fVar47 = (float)(~uVar14 & (uint)fVar48);
        auVar41._0_4_ =
             (~-(uint)((int)fVar44 < ___xmm_38800000388000003880000038800000) &
              (uint)((___xmm_c8000fffc8000fffc8000fffc8000fff + (int)fVar44) -
                    (((int)fVar44 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar44 + fVar20) - (int)fVar20 &
             -(uint)((int)fVar44 < ___xmm_38800000388000003880000038800000)) &
             -(uint)((int)fVar44 < ___xmm_47800000478000004780000047800000);
        auVar41._4_4_ =
             (~-(uint)((int)fVar45 < _UNK_1508be4b4) &
              (uint)((_UNK_1508be504 + (int)fVar45) - (((int)fVar45 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar45 + fVar21) - (int)fVar21 & -(uint)((int)fVar45 < _UNK_1508be4b4)) &
             -(uint)((int)fVar45 < _UNK_1508be4e4);
        auVar41._8_4_ =
             (~-(uint)((int)fVar46 < _UNK_1508be4b8) &
              (uint)((_UNK_1508be508 + (int)fVar46) - (((int)fVar46 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar46 + fVar22) - (int)fVar22 & -(uint)((int)fVar46 < _UNK_1508be4b8)) &
             -(uint)((int)fVar46 < _UNK_1508be4e8);
        auVar41._12_4_ =
             (~-(uint)((int)fVar47 < _UNK_1508be4bc) &
              (uint)((_UNK_1508be50c + (int)fVar47) - (((int)fVar47 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar47 + fVar23) - (int)fVar23 & -(uint)((int)fVar47 < _UNK_1508be4bc)) &
             -(uint)((int)fVar47 < _UNK_1508be4ec);
        pFVar1 = this->CurrentMipDataFloat16;
        lVar34 = (int)(lVar35 / lVar34) * lVar34 + (longlong)(int)(lVar35 % lVar34);
        auVar43._0_4_ =
             ~-(uint)((int)fVar44 < ___xmm_47800000478000004780000047800000) &
             (((uint)fVar44 >> 0xd & uVar24 | uVar28) & -(uint)NAN(fVar44) | uVar16);
        auVar43._4_4_ =
             ~-(uint)((int)fVar45 < _UNK_1508be4e4) &
             (((uint)fVar45 >> 0xd & uVar25 | uVar29) & -(uint)NAN(fVar45) | uVar17);
        auVar43._8_4_ =
             ~-(uint)((int)fVar46 < _UNK_1508be4e8) &
             (((uint)fVar46 >> 0xd & uVar26 | uVar30) & -(uint)NAN(fVar46) | uVar18);
        auVar43._12_4_ =
             ~-(uint)((int)fVar47 < _UNK_1508be4ec) &
             (((uint)fVar47 >> 0xd & uVar27 | uVar31) & -(uint)NAN(fVar47) | uVar19);
        auVar42._0_4_ = (int)(uVar11 & (uint)fVar3) >> 0x10;
        auVar42._4_4_ = (int)(uVar12 & (uint)fVar4) >> 0x10;
        auVar42._8_4_ = (int)(uVar13 & (uint)fVar5) >> 0x10;
        auVar42._12_4_ = (int)(uVar14 & (uint)fVar48) >> 0x10;
        auVar42 = auVar41 | auVar43 | auVar42;
        auVar42 = packssdw(auVar42,auVar42);
        local_res10 = auVar42._0_2_;
        pFVar1[lVar34].R.Encoded = local_res10;
        uStackX_12 = auVar42._2_2_;
        pFVar1[lVar34].G.Encoded = uStackX_12;
        uStackX_14 = auVar42._4_2_;
        pFVar1[lVar34].B.Encoded = uStackX_14;
        uStackX_16 = auVar42._6_2_;
        pFVar1[lVar34].A.Encoded = uStackX_16;
      }
      lVar35 = lVar35 + 1;
      lVar36 = lVar36 + 0x10;
    } while (lVar35 < lVar37);
  }
  return true;
}

// Copy @ 14ca83e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FTexture2DBuilder::Copy
          (FTexture2DBuilder *this,TImageBuilder<UE::Math::TVector<float>_> *param_1,bool param_2)

{
  FFloat16Color *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 uVar27;
  TVector<float> *pTVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  FColor_u_0 local_res8;
  ushort local_res10;
  ushort uStackX_12;
  ushort uStackX_14;
  ushort uStackX_16;
  float local_f8;
  float fStack_f4;
  FLinearColor_u_0 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  
  if (((param_1->Dimensions).Width != (this->Dimensions).Width) ||
     ((param_1->Dimensions).Height != (this->Dimensions).Height)) {
    bVar26 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1217805425223663959>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                        ,0x157,"SourceImage.GetDimensions() == Dimensions");
    if (!bVar26) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar27 = (*pcVar2)();
    return (bool)uVar27;
  }
  if ((this->CurrentPixelFormat == PF_FloatRGBA) &&
     ((param_2 &&
      (bVar26 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1217805425223663965>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                           ,0x15d,"false"), bVar26)))) {
    pcVar2 = (code *)swi(3);
    uVar27 = (*pcVar2)();
    return (bool)uVar27;
  }
  uVar25 = _UNK_1508be48c;
  uVar24 = _UNK_1508be488;
  uVar23 = _UNK_1508be484;
  uVar22 = ___xmm_00000200000002000000020000000200;
  uVar21 = _UNK_1508be47c;
  uVar20 = _UNK_1508be478;
  uVar19 = _UNK_1508be474;
  uVar18 = ___xmm_000001ff000001ff000001ff000001ff;
  fVar17 = _UNK_15068962c;
  fVar16 = _UNK_150689628;
  fVar15 = _UNK_150689624;
  fVar14 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar13 = _UNK_15068959c;
  uVar12 = _UNK_150689598;
  uVar11 = _UNK_150689594;
  uVar10 = ___xmm_00007c0000007c0000007c0000007c00;
  fVar9 = __real_437f0000;
  uVar8 = _UNK_15065157c;
  uVar7 = _UNK_150651578;
  uVar6 = _UNK_150651574;
  uVar5 = __xmm_80000000800000008000000080000000;
  fVar4 = __real_3f000000;
  fVar3 = __real_3f800000;
  lVar30 = 0;
  lVar31 = (longlong)(this->Dimensions).Height * (longlong)(this->Dimensions).Width;
  if (0 < lVar31) {
    do {
      pTVar28 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&param_1->Image,lVar30);
      fVar32 = (pTVar28->field0_0x0)._s_0.Z;
      local_f8 = (float)*(undefined8 *)&pTVar28->field0_0x0;
      fStack_f4 = (float)((ulonglong)*(undefined8 *)&pTVar28->field0_0x0 >> 0x20);
      if (this->CurrentPixelFormat == PF_B8G8R8A8) {
        local_e8._s_0.R = local_f8;
        local_e8._s_0.G = fStack_f4;
        local_e8._s_0.A = 1.0;
        local_e8._s_0.B = fVar32;
        if (param_2) {
          FLinearColor::ToFColorSRGB((FLinearColor *)&local_e8._s_0);
        }
        else {
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (fStack_f4 <= 0.0) {
            fStack_f4 = 0.0;
          }
          if (local_f8 <= 0.0) {
            local_f8 = 0.0;
          }
          if (fVar3 <= fVar32) {
            fVar32 = fVar3;
          }
          if (fVar3 <= fStack_f4) {
            fStack_f4 = fVar3;
          }
          if (fVar3 <= local_f8) {
            local_f8 = fVar3;
          }
          local_res8._s_0.G = (char)(int)(fStack_f4 * fVar9 + fVar4);
          local_res8._s_0.B = (char)(int)(fVar32 * fVar9 + fVar4);
          local_res8._s_0.R = (char)(int)(local_f8 * fVar9 + fVar4);
          local_res8._s_0.A = 0xff;
        }
        lVar29 = (longlong)(this->Dimensions).Width;
        this->CurrentMipData[(int)(lVar30 / lVar29) * lVar29 + (longlong)(int)(lVar30 % lVar29)].
        field0_0x0 = local_res8;
      }
      else {
        lVar29 = (longlong)(this->Dimensions).Width;
        fVar36 = (float)(~uVar5 & (uint)local_f8);
        fVar37 = (float)(~uVar6 & (uint)fStack_f4);
        fVar38 = (float)(~uVar7 & (uint)fVar32);
        fVar39 = (float)(~uVar8 & 0x3f800000);
        local_d8 = local_f8;
        fStack_d4 = fStack_f4;
        uStack_cc = 0x3f800000;
        auVar33._0_4_ =
             (~-(uint)((int)fVar36 < ___xmm_38800000388000003880000038800000) &
              (uint)((___xmm_c8000fffc8000fffc8000fffc8000fff + (int)fVar36) -
                    (((int)fVar36 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar36 + fVar14) - (int)fVar14 &
             -(uint)((int)fVar36 < ___xmm_38800000388000003880000038800000)) &
             -(uint)((int)fVar36 < ___xmm_47800000478000004780000047800000);
        auVar33._4_4_ =
             (~-(uint)((int)fVar37 < _UNK_1508be4b4) &
              (uint)((_UNK_1508be504 + (int)fVar37) - (((int)fVar37 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar37 + fVar15) - (int)fVar15 & -(uint)((int)fVar37 < _UNK_1508be4b4)) &
             -(uint)((int)fVar37 < _UNK_1508be4e4);
        auVar33._8_4_ =
             (~-(uint)((int)fVar38 < _UNK_1508be4b8) &
              (uint)((_UNK_1508be508 + (int)fVar38) - (((int)fVar38 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar38 + fVar16) - (int)fVar16 & -(uint)((int)fVar38 < _UNK_1508be4b8)) &
             -(uint)((int)fVar38 < _UNK_1508be4e8);
        auVar33._12_4_ =
             (~-(uint)((int)fVar39 < _UNK_1508be4bc) & (uint)(_UNK_1508be50c + (int)fVar39) >> 0xd |
             (int)(fVar39 + fVar17) - (int)fVar17 & -(uint)((int)fVar39 < _UNK_1508be4bc)) &
             -(uint)((int)fVar39 < _UNK_1508be4ec);
        pFVar1 = this->CurrentMipDataFloat16;
        lVar29 = (int)(lVar30 / lVar29) * lVar29 + (longlong)(int)(lVar30 % lVar29);
        auVar35._0_4_ =
             ~-(uint)((int)fVar36 < ___xmm_47800000478000004780000047800000) &
             (((uint)fVar36 >> 0xd & uVar18 | uVar22) & -(uint)NAN(fVar36) | uVar10);
        auVar35._4_4_ =
             ~-(uint)((int)fVar37 < _UNK_1508be4e4) &
             (((uint)fVar37 >> 0xd & uVar19 | uVar23) & -(uint)NAN(fVar37) | uVar11);
        auVar35._8_4_ =
             ~-(uint)((int)fVar38 < _UNK_1508be4e8) &
             (((uint)fVar38 >> 0xd & uVar20 | uVar24) & -(uint)NAN(fVar38) | uVar12);
        auVar35._12_4_ =
             ~-(uint)((int)fVar39 < _UNK_1508be4ec) &
             (((uint)fVar39 >> 0xd & uVar21 | uVar25) & -(uint)NAN(fVar39) | uVar13);
        auVar34._0_4_ = (int)(uVar5 & (uint)local_f8) >> 0x10;
        auVar34._4_4_ = (int)(uVar6 & (uint)fStack_f4) >> 0x10;
        auVar34._8_4_ = (int)(uVar7 & (uint)fVar32) >> 0x10;
        auVar34._12_4_ = (int)(uVar8 & 0x3f800000) >> 0x10;
        auVar34 = auVar33 | auVar35 | auVar34;
        auVar34 = packssdw(auVar34,auVar34);
        local_res10 = auVar34._0_2_;
        pFVar1[lVar29].R.Encoded = local_res10;
        uStackX_12 = auVar34._2_2_;
        pFVar1[lVar29].G.Encoded = uStackX_12;
        uStackX_14 = auVar34._4_2_;
        pFVar1[lVar29].B.Encoded = uStackX_14;
        uStackX_16 = auVar34._6_2_;
        pFVar1[lVar29].A.Encoded = uStackX_16;
        fStack_d0 = fVar32;
      }
      lVar30 = lVar30 + 1;
    } while (lVar30 < lVar31);
  }
  return true;
}

// CopyImageToSourceData @ 14ca84230

bool __thiscall
UE::Geometry::FTexture2DBuilder::CopyImageToSourceData
          (FTexture2DBuilder *this,TImageBuilder<UE::Math::TVector4<float>_> *param_1,
          ETextureSourceFormat param_2,bool param_3)

{
  return false;
}

// CopyPlatformDataToSourceData @ 14ca84950

bool __cdecl
UE::Geometry::FTexture2DBuilder::CopyPlatformDataToSourceData
          (UTexture2D *param_1,ETextureType param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  FTexture2DBuilder local_48;
  
  local_48.CurrentPixelFormat = PF_B8G8R8A8;
  local_48.Dimensions.Width = 0;
  local_48.Dimensions.Height = 0;
  local_48.BuildType = Color;
  local_48.CurrentMipDataFloat16 = (FFloat16Color *)0x0;
  local_48._padding_ = (longlong)&___7FTexture2DBuilder_Geometry_UE__6B_;
  local_48.RawTexture2D = (UTexture2D *)0x0;
  local_48.CurrentMipData = (FColor *)0x0;
  bVar2 = Initialize(&local_48,param_1,param_2,false);
  local_48._padding_ = (longlong)&___7FTexture2DBuilder_Geometry_UE__6B_;
  if (((local_48.CurrentMipData != (FColor *)0x0) ||
      (local_48.CurrentMipDataFloat16 != (FFloat16Color *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEditable() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\AssetUtils\\Texture2DBuilder.h"
                         ,0x3e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return bVar2;
}

// CopyTo @ 14ca849f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FTexture2DBuilder::CopyTo
          (FTexture2DBuilder *this,TImageBuilder<UE::Math::TVector4<float>_> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  FColor FVar7;
  FFloat16Color *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [14];
  uint uVar11;
  undefined1 auVar12 [14];
  uint uVar13;
  undefined8 uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  undefined1 uVar37;
  TVector4<float> *pTVar38;
  longlong lVar39;
  longlong lVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  
  uVar35 = _UNK_1506896ec;
  uVar34 = _UNK_1506896e8;
  uVar33 = _UNK_1506896e4;
  uVar32 = __xmm_7f8000007f8000007f8000007f800000;
  fVar31 = _UNK_1506896dc;
  fVar30 = _UNK_1506896d8;
  fVar29 = _UNK_1506896d4;
  fVar28 = ___xmm_77800000778000007780000077800000;
  uVar27 = _UNK_1506895bc;
  uVar26 = _UNK_1506895b8;
  uVar25 = _UNK_1506895b4;
  uVar24 = ___xmm_00400000004000000040000000400000;
  iVar23 = _UNK_15068959c;
  iVar22 = _UNK_150689598;
  iVar21 = _UNK_150689594;
  iVar20 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar19 = _UNK_15068958c;
  iVar18 = _UNK_150689588;
  iVar17 = _UNK_150689584;
  iVar16 = ___xmm_00007bff00007bff00007bff00007bff;
  fVar15 = __real_3b808081;
  iVar5 = (this->Dimensions).Width;
  if (((param_1->Dimensions).Width == iVar5) &&
     (iVar6 = (this->Dimensions).Height, (param_1->Dimensions).Height == iVar6)) {
    lVar39 = 0;
    lVar40 = (longlong)iVar5 * (longlong)iVar6;
    if (0 < lVar40) {
      do {
        if (this->CurrentPixelFormat == PF_B8G8R8A8) {
          FVar7.field0_0x0 = (FColor_u_0)this->CurrentMipData[lVar39].field0_0x0.Bits;
          fVar1 = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 >> 0x10 & 0xff];
          fVar2 = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 >> 8 & 0xff];
          fVar3 = FLinearColor::sRGBToLinearTable[(uint)FVar7.field0_0x0 & 0xff];
          pTVar38 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[](&param_1->Image,lVar39);
          (pTVar38->field0_0x0)._s_0.X = fVar1;
          (pTVar38->field0_0x0)._s_0.Y = fVar2;
          (pTVar38->field0_0x0)._s_0.Z = fVar3;
          (pTVar38->field0_0x0)._s_0.W = (float)((uint)FVar7.field0_0x0 >> 0x18) * fVar15;
        }
        else {
          pFVar8 = this->CurrentMipDataFloat16;
          uVar4 = pFVar8[lVar39].A.Encoded;
          auVar10._12_2_ = uVar4;
          auVar10._0_12_ = ZEXT212(uVar4) << 0x30;
          uVar14 = CONCAT44(auVar10._10_4_,CONCAT22(pFVar8[lVar39].B.Encoded,uVar4));
          auVar12._6_8_ = 0;
          auVar12._0_6_ = (uint6)((ulonglong)uVar14 >> 0x10);
          uVar13 = (uint)pFVar8[lVar39].R.Encoded;
          uVar43 = ___xmm_00007fff00007fff00007fff00007fff & uVar13;
          uVar41 = (uint)CONCAT82(SUB148(auVar12 << 0x40,6),pFVar8[lVar39].G.Encoded);
          uVar44 = _UNK_1506895a4 & uVar41;
          uVar42 = (uint)((ulonglong)uVar14 >> 0x10);
          uVar45 = _UNK_1506895a8 & uVar42;
          uVar11 = auVar10._10_4_ >> 0x10;
          uVar46 = _UNK_1506895ac & uVar11;
          pTVar38 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[](&param_1->Image,lVar39);
          (pTVar38->field0_0x0)._s_0.X =
               (float)(-(uint)(iVar20 < (int)uVar43) & uVar24 |
                       -(uint)(iVar16 < (int)uVar43) & uVar32 | (uVar43 ^ uVar13) << 0x10 |
                      (uint)((float)(uVar43 << 0xd) * fVar28));
          (pTVar38->field0_0x0)._s_0.Y =
               (float)(-(uint)(iVar21 < (int)uVar44) & uVar25 |
                       -(uint)(iVar17 < (int)uVar44) & uVar33 | (uVar44 ^ uVar41) << 0x10 |
                      (uint)((float)(uVar44 << 0xd) * fVar29));
          (pTVar38->field0_0x0)._s_0.Z =
               (float)(-(uint)(iVar22 < (int)uVar45) & uVar26 |
                       -(uint)(iVar18 < (int)uVar45) & uVar34 | (uVar45 ^ uVar42) << 0x10 |
                      (uint)((float)(uVar45 << 0xd) * fVar30));
          (pTVar38->field0_0x0)._s_0.W =
               (float)(-(uint)(iVar23 < (int)uVar46) & uVar27 |
                       -(uint)(iVar19 < (int)uVar46) & uVar35 | (uVar46 ^ uVar11) << 0x10 |
                      (uint)((float)(uVar46 << 0xd) * fVar31));
        }
        lVar39 = lVar39 + 1;
      } while (lVar39 < lVar40);
    }
    return true;
  }
  bVar36 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<1217805425223664075>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                      ,0x1cb,"DestImage.GetDimensions() == Dimensions");
  if (!bVar36) {
    return false;
  }
  pcVar9 = (code *)swi(3);
  uVar37 = (*pcVar9)();
  return (bool)uVar37;
}

// GetClearColor @ 14ca8e430

FColor * __thiscall UE::Geometry::FTexture2DBuilder::GetClearColor(FTexture2DBuilder *this)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar1 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    DefaultColor = FColor::Black;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar1 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    DefaultAOColor = FColor::White;
    _Init_thread_footer(&::_TSS1);
  }
  switch(this->BuildType) {
  default:
    return &DefaultColor;
  case Roughness:
    return &DefaultRoughness;
  case Metallic:
    return &DefaultMetallic;
  case Specular:
    return &DefaultSpecular;
  case NormalMap:
    return &DefaultNormalColor;
  case AmbientOcclusion:
    return &DefaultAOColor;
  }
}

// GetClearColorFloat16 @ 14ca8e590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFloat16Color __thiscall
UE::Geometry::FTexture2DBuilder::GetClearColorFloat16(FTexture2DBuilder *this)

{
  FFloat16Color in_RDX;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  switch(this->BuildType) {
  default:
    *(undefined8 *)in_RDX = 0;
    uVar8 = DefaultColor.field0_0x0._0_4_;
    uVar9 = DefaultColor.field0_0x0._4_4_;
    uVar10 = DefaultColor.field0_0x0._8_4_;
    uVar11 = DefaultColor.field0_0x0._12_4_;
    break;
  case Roughness:
    *(undefined8 *)in_RDX = 0;
    uVar8 = DefaultRoughness.field0_0x0._0_4_;
    uVar9 = DefaultRoughness.field0_0x0._4_4_;
    uVar10 = DefaultRoughness.field0_0x0._8_4_;
    uVar11 = DefaultRoughness.field0_0x0._12_4_;
    break;
  case Metallic:
    *(undefined8 *)in_RDX = 0;
    uVar8 = DefaultMetallic.field0_0x0._0_4_;
    uVar9 = DefaultMetallic.field0_0x0._4_4_;
    uVar10 = DefaultMetallic.field0_0x0._8_4_;
    uVar11 = DefaultMetallic.field0_0x0._12_4_;
    break;
  case Specular:
    *(undefined8 *)in_RDX = 0;
    uVar8 = DefaultSpecular.field0_0x0._0_4_;
    uVar9 = DefaultSpecular.field0_0x0._4_4_;
    uVar10 = DefaultSpecular.field0_0x0._8_4_;
    uVar11 = DefaultSpecular.field0_0x0._12_4_;
    break;
  case NormalMap:
    *(undefined8 *)in_RDX = 0;
    uVar8 = DefaultNormalColor.field0_0x0._0_4_;
    uVar9 = DefaultNormalColor.field0_0x0._4_4_;
    uVar10 = DefaultNormalColor.field0_0x0._8_4_;
    uVar11 = DefaultNormalColor.field0_0x0._12_4_;
    break;
  case AmbientOcclusion:
    *(undefined8 *)in_RDX = 0;
    uVar8 = DefaultAOColor.field0_0x0._0_4_;
    uVar9 = DefaultAOColor.field0_0x0._4_4_;
    uVar10 = DefaultAOColor.field0_0x0._8_4_;
    uVar11 = DefaultAOColor.field0_0x0._12_4_;
  }
  fVar3 = (float)(~__xmm_80000000800000008000000080000000 & uVar8);
  fVar4 = (float)(~_UNK_150651574 & uVar9);
  fVar5 = (float)(~_UNK_150651578 & uVar10);
  fVar6 = (float)(~_UNK_15065157c & uVar11);
  auVar1._0_4_ = (int)(__xmm_80000000800000008000000080000000 & uVar8) >> 0x10;
  auVar1._4_4_ = (int)(_UNK_150651574 & uVar9) >> 0x10;
  auVar1._8_4_ = (int)(_UNK_150651578 & uVar10) >> 0x10;
  auVar1._12_4_ = (int)(_UNK_15065157c & uVar11) >> 0x10;
  auVar2._0_4_ = (~-(uint)((int)fVar3 < ___xmm_38800000388000003880000038800000) &
                  (uint)((___xmm_c8000fffc8000fffc8000fffc8000fff + (int)fVar3) -
                        (((int)fVar3 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar3 + ___xmm_3f0000003f0000003f0000003f000000) -
                 (int)___xmm_3f0000003f0000003f0000003f000000 &
                 -(uint)((int)fVar3 < ___xmm_38800000388000003880000038800000)) &
                 -(uint)((int)fVar3 < ___xmm_47800000478000004780000047800000);
  auVar2._4_4_ = (~-(uint)((int)fVar4 < _UNK_1508be4b4) &
                  (uint)((_UNK_1508be504 + (int)fVar4) - (((int)fVar4 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar4 + _UNK_150689624) - (int)_UNK_150689624 &
                 -(uint)((int)fVar4 < _UNK_1508be4b4)) & -(uint)((int)fVar4 < _UNK_1508be4e4);
  auVar2._8_4_ = (~-(uint)((int)fVar5 < _UNK_1508be4b8) &
                  (uint)((_UNK_1508be508 + (int)fVar5) - (((int)fVar5 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar5 + _UNK_150689628) - (int)_UNK_150689628 &
                 -(uint)((int)fVar5 < _UNK_1508be4b8)) & -(uint)((int)fVar5 < _UNK_1508be4e8);
  auVar2._12_4_ =
       (~-(uint)((int)fVar6 < _UNK_1508be4bc) &
        (uint)((_UNK_1508be50c + (int)fVar6) - (((int)fVar6 << 0x12) >> 0x1f)) >> 0xd |
       (int)(fVar6 + _UNK_15068962c) - (int)_UNK_15068962c & -(uint)((int)fVar6 < _UNK_1508be4bc)) &
       -(uint)((int)fVar6 < _UNK_1508be4ec);
  auVar7._0_4_ = ~-(uint)((int)fVar3 < ___xmm_47800000478000004780000047800000) &
                 (((uint)fVar3 >> 0xd & ___xmm_000001ff000001ff000001ff000001ff |
                  ___xmm_00000200000002000000020000000200) & -(uint)NAN(fVar3) |
                 ___xmm_00007c0000007c0000007c0000007c00);
  auVar7._4_4_ = ~-(uint)((int)fVar4 < _UNK_1508be4e4) &
                 (((uint)fVar4 >> 0xd & _UNK_1508be474 | _UNK_1508be484) & -(uint)NAN(fVar4) |
                 _UNK_150689594);
  auVar7._8_4_ = ~-(uint)((int)fVar5 < _UNK_1508be4e8) &
                 (((uint)fVar5 >> 0xd & _UNK_1508be478 | _UNK_1508be488) & -(uint)NAN(fVar5) |
                 _UNK_150689598);
  auVar7._12_4_ =
       ~-(uint)((int)fVar6 < _UNK_1508be4ec) &
       (((uint)fVar6 >> 0xd & _UNK_1508be47c | _UNK_1508be48c) & -(uint)NAN(fVar6) | _UNK_15068959c)
  ;
  auVar1 = auVar2 | auVar7 | auVar1;
  auVar2 = packssdw(auVar1,auVar1);
  *(longlong *)in_RDX = auVar2._0_8_;
  return in_RDX;
}

// Initialize @ 14ca950a0

bool __thiscall
UE::Geometry::FTexture2DBuilder::Initialize
          (FTexture2DBuilder *this,UTexture2D *param_1,ETextureType param_2,bool param_3)

{
  ushort uVar1;
  code *pcVar2;
  FImageDimensions FVar3;
  EPixelFormat EVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  FTexturePlatformData *pFVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  
  if (param_1 == (UTexture2D *)0x0) {
    pcVar7 = "ExistingTexture != nullptr";
    iVar10 = 0xb5;
    paVar9 = &bGEnsureHasExecuted<1217805425223663797>;
  }
  else {
    pFVar8 = UTexture2D::GetPlatformData(param_1);
    if (pFVar8 == (FTexturePlatformData *)0x0) {
      pcVar7 = "TexPlatformData != nullptr";
      iVar10 = 0xb7;
      paVar9 = &bGEnsureHasExecuted<1217805425223663799>;
    }
    else if ((pFVar8->Mips).Array.ArrayNum < 1) {
      pcVar7 = "TexPlatformData->Mips.Num() > 0";
      iVar10 = 0xb8;
      paVar9 = &bGEnsureHasExecuted<1217805425223663800>;
    }
    else {
      EVar4 = PF_B8G8R8A8;
      if (param_2 == EmissiveHDR) {
        EVar4 = PF_FloatRGBA;
      }
      if (pFVar8->PixelFormat == EVar4) {
        this->CurrentPixelFormat = EVar4;
        if (((pFVar8->Mips).Array.ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        uVar1 = *(ushort *)(*(longlong *)(pFVar8->Mips).Array.AllocatorInstance.Data + 0x48);
        if (((pFVar8->Mips).Array.ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        FVar3.Height._0_2_ =
             *(undefined2 *)(*(longlong *)(pFVar8->Mips).Array.AllocatorInstance.Data + 0x4a);
        FVar3.Width = (uint)uVar1;
        FVar3.Height._2_2_ = 0;
        this->Dimensions = FVar3;
        this->BuildType = param_2;
        this->RawTexture2D = param_1;
        if (param_3) {
          bVar5 = LockForEditing(this);
          return bVar5;
        }
        return true;
      }
      pcVar7 = "TexPlatformData->PixelFormat == UsePixelFormat";
      iVar10 = 0xbb;
      paVar9 = &bGEnsureHasExecuted<1217805425223663803>;
    }
  }
  bVar5 = Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                     ,iVar10,pcVar7);
  if (!bVar5) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return (bool)uVar6;
}

// Initialize @ 14ca95250

bool __thiscall
UE::Geometry::FTexture2DBuilder::Initialize
          (FTexture2DBuilder *this,ETextureType param_1,FImageDimensions param_2)

{
  bool bVar1;
  UTexture2D *pUVar2;
  EPixelFormat EVar3;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  EVar3 = PF_B8G8R8A8;
  if (param_1 == EmissiveHDR) {
    EVar3 = PF_FloatRGBA;
  }
  local_18.DataPtr = (uchar *)0x0;
  local_18.ArrayNum = 0;
  pUVar2 = UTexture2D::CreateTransient(param_2.Width,param_2.Height,EVar3,(FName)0x0,&local_18);
  bVar1 = InitializeInternal(this,param_1,param_2,pUVar2);
  return bVar1;
}

// InitializeAndReplaceExistingTexture @ 14ca952d0

bool __thiscall
UE::Geometry::FTexture2DBuilder::InitializeAndReplaceExistingTexture
          (FTexture2DBuilder *this,UTexture2D *param_1,UTexture2D *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FImageDimensions FVar6;
  EPixelFormat EVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  UTexture2D *this_00;
  FTexturePlatformData *pFVar13;
  FTexture2DMipMap *pFVar14;
  FTexture2DMipMap *pFVar15;
  undefined1 local_res10 [16];
  int local_res20;
  FTexture2DMipMap *local_50;
  uint local_48;
  uint uStack_44;
  
  if ((param_1 != (UTexture2D *)0x0) && (param_2 != (UTexture2D *)0x0)) {
    EVar7 = UTexture2D::GetPixelFormat(param_2,0);
    uVar10 = UTexture2D::GetSizeX(param_2);
    uVar11 = UTexture2D::GetSizeY(param_2);
    if (((int)uVar10 < 1) ||
       ((((int)uVar11 < 1 || ((int)uVar10 % GPixelFormats[EVar7].BlockSizeX != 0)) ||
        ((int)uVar11 % GPixelFormats[EVar7].BlockSizeY != 0)))) {
      local_res10[0] = 0;
      bVar8 = `UE::Geometry::FTexture2DBuilder::InitializeAndReplaceExistingTexture'::__l6::
              <lambda_1>::operator()(local_res10);
      if (!bVar8) {
        return false;
      }
    }
    pFVar15 = (FTexture2DMipMap *)0x0;
    this_00 = NewObject<UTexture2D>
                        ((UObject *)param_1->_padding_,(FName)param_1->_padding_,
                         (EObjectFlags)param_1->_padding_,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pFVar13 = ::operator_new(0x38);
    pFVar14 = pFVar15;
    if (pFVar13 != (FTexturePlatformData *)0x0) {
      pFVar14 = (FTexture2DMipMap *)FTexturePlatformData::FTexturePlatformData(pFVar13);
    }
    UTexture2D::SetPlatformData(this_00,(FTexturePlatformData *)pFVar14);
    pFVar13 = UTexture2D::GetPlatformData(this_00);
    pFVar13->SizeX = uVar10;
    pFVar13 = UTexture2D::GetPlatformData(this_00);
    pFVar13->SizeY = uVar11;
    pFVar13 = UTexture2D::GetPlatformData(this_00);
    pFVar13->PixelFormat = EVar7;
    iVar3 = GPixelFormats[EVar7].BlockSizeX;
    local_res20 = (int)uVar11 / GPixelFormats[EVar7].BlockSizeY;
    pFVar14 = ::operator_new(0x50);
    if (pFVar14 != (FTexture2DMipMap *)0x0) {
      pFVar15 = FTexture2DMipMap::FTexture2DMipMap(pFVar14,uVar10,uVar11,0);
    }
    pFVar13 = UTexture2D::GetPlatformData(this_00);
    pFVar4 = (pFVar13->Mips).Array.AllocatorInstance.Data;
    local_50 = pFVar15;
    if (((pFVar4 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 <
         pFVar4 + (longlong)(pFVar13->Mips).Array.ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    iVar12 = (pFVar13->Mips).Array.ArrayNum;
    piVar1 = &(pFVar13->Mips).Array.ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar13->Mips,piVar1);
    }
    (pFVar13->Mips).Array.ArrayNum = iVar12 + 1;
    *(FTexture2DMipMap **)((pFVar13->Mips).Array.AllocatorInstance.Data + (longlong)iVar12 * 8) =
         local_50;
    FBulkData::Lock((FBulkData *)&pFVar15->BulkData,2);
    FBulkData::Realloc((FBulkData *)&pFVar15->BulkData,
                       (longlong)
                       (local_res20 * GPixelFormats[EVar7].BlockBytes * ((int)uVar10 / iVar3)),1);
    FBulkData::Unlock((FBulkData *)&pFVar15->BulkData);
    bVar2 = *(byte *)((longlong)&this_00->_padding_ + 6);
    *(byte *)((longlong)&this_00->_padding_ + 6) =
         (bVar2 ^ *(byte *)((longlong)&param_2->_padding_ + 6)) & 1 ^ bVar2;
    *(char *)&this_00->_padding_ = (char)param_2->_padding_;
    *(undefined1 *)((longlong)&this_00->_padding_ + 7) =
         *(undefined1 *)((longlong)&param_2->_padding_ + 7);
    (**(code **)(this_00->_padding_ + 0x328))(this_00);
    this->BuildType = Color;
    if ((((int)uVar10 < 0) || ((int)uVar11 < 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WidthIn >= 0 && HeightIn >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageDimensions.h"
                           ,0x20,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar6.Height = uVar11;
    FVar6.Width = uVar10;
    this->Dimensions = FVar6;
    this->RawTexture2D = this_00;
    this->CurrentPixelFormat = EVar7;
    local_48 = uVar10;
    uStack_44 = uVar11;
    bVar8 = LockForEditing(this);
    if (bVar8) {
      if ((this->CurrentMipData != (FColor *)0x0) ||
         (this->CurrentMipDataFloat16 != (FFloat16Color *)0x0)) {
        Clear(this);
      }
      return true;
    }
  }
  return false;
}

// InitializeAndReplaceExistingTexture @ 14ca95620

bool __thiscall
UE::Geometry::FTexture2DBuilder::InitializeAndReplaceExistingTexture
          (FTexture2DBuilder *this,UTexture2D *param_1,ETextureType param_2,FImageDimensions param_3
          )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UTexture2D *this_00;
  FTexturePlatformData *pFVar9;
  FTexturePlatformData *pFVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  FBulkData *this_01;
  uint uVar14;
  undefined1 local_res18 [8];
  undefined8 *local_30;
  
  uVar12 = 2;
  if (param_2 == EmissiveHDR) {
    uVar12 = 10;
  }
  uVar14 = param_3.Width;
  uVar13 = param_3.Height;
  if (((((int)uVar14 < 1) || (uVar13 == 0 || (longlong)param_3 < 0)) ||
      ((int)((longlong)
             ((ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | (ulonglong)param_3 & 0xffffffff) %
            (longlong)GPixelFormats[uVar12].BlockSizeX) != 0)) ||
     ((int)((longlong)((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | (ulonglong)param_3 >> 0x20)
           % (longlong)GPixelFormats[uVar12].BlockSizeY) != 0)) {
    local_res18[0] = 0;
    bVar6 = `UE::Geometry::FTexture2DBuilder::InitializeAndReplaceExistingTexture'::__l3::<lambda_1>
            ::operator()(local_res18);
    if (!bVar6) {
      return false;
    }
  }
  pFVar10 = (FTexturePlatformData *)0x0;
  this_00 = NewObject<UTexture2D>
                      ((UObject *)param_1->_padding_,(FName)param_1->_padding_,
                       (EObjectFlags)param_1->_padding_,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pFVar9 = ::operator_new(0x38);
  if (pFVar9 != (FTexturePlatformData *)0x0) {
    pFVar10 = FTexturePlatformData::FTexturePlatformData(pFVar9);
  }
  UTexture2D::SetPlatformData(this_00,pFVar10);
  pFVar9 = UTexture2D::GetPlatformData(this_00);
  pFVar9->SizeX = uVar14;
  pFVar9 = UTexture2D::GetPlatformData(this_00);
  pFVar9->SizeY = uVar13;
  pFVar9 = UTexture2D::GetPlatformData(this_00);
  pFVar9->PixelFormat = (EPixelFormat)uVar12;
  iVar2 = GPixelFormats[uVar12].BlockSizeX;
  iVar3 = GPixelFormats[uVar12].BlockSizeY;
  puVar11 = ::operator_new(0x50);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    *(undefined4 *)((longlong)puVar11 + 0x2d) = 0xffffffff;
    *(undefined1 *)((longlong)puVar11 + 0x31) = 0xff;
    puVar11[7] = FIoChunkId::InvalidChunkId.Id._0_8_;
    *(undefined4 *)(puVar11 + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
    *(short *)(puVar11 + 9) = (short)param_3.Width;
    *(short *)((longlong)puVar11 + 0x4a) = (short)param_3.Height;
    *(undefined2 *)((longlong)puVar11 + 0x4c) = 0;
    if ((0xffff < uVar14) || (0xffff < uVar13)) {
      Assert::Private::ProcessLowLevelFatalError
                ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureResource.h"
                 ,0x42,L"texture mip size doesn\'t fit in 16 bits! %ux%ux%u");
    }
  }
  pFVar9 = UTexture2D::GetPlatformData(this_00);
  pFVar4 = (pFVar9->Mips).Array.AllocatorInstance.Data;
  local_30 = puVar11;
  if (((pFVar4 <= (FScriptContainerElement *)&local_30) &&
      ((FScriptContainerElement *)&local_30 < pFVar4 + (longlong)(pFVar9->Mips).Array.ArrayMax * 8))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (pFVar9->Mips).Array.ArrayNum;
  piVar1 = &(pFVar9->Mips).Array.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar9->Mips,piVar1);
  }
  this_01 = (FBulkData *)(puVar11 + 4);
  (pFVar9->Mips).Array.ArrayNum = iVar8 + 1;
  *(undefined8 **)((pFVar9->Mips).Array.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_30;
  FBulkData::Lock(this_01,2);
  FBulkData::Realloc(this_01,(longlong)
                             ((int)((longlong)
                                    ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 |
                                    (ulonglong)param_3 >> 0x20) / (longlong)iVar3) *
                              GPixelFormats[uVar12].BlockBytes *
                             (int)((longlong)
                                   ((ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 |
                                   (ulonglong)param_3 & 0xffffffff) / (longlong)iVar2)),1);
  FBulkData::Unlock(this_01);
  bVar6 = InitializeInternal(this,param_2,param_3,this_00);
  return bVar6;
}

// InitializeInternal @ 14ca964b0

bool __thiscall
UE::Geometry::FTexture2DBuilder::InitializeInternal
          (FTexture2DBuilder *this,ETextureType param_1,FImageDimensions param_2,UTexture2D *param_3
          )

{
  byte *pbVar1;
  ETextureType EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EPixelFormat EVar6;
  
  if ((param_2.Width != param_2.Height) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DimensionsIn.IsSquare()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                         ,0x81,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  this->BuildType = param_1;
  this->Dimensions = param_2;
  this->RawTexture2D = param_3;
  if (param_3 == (UTexture2D *)0x0) {
    return false;
  }
  EVar6 = UTexture2D::GetPixelFormat(param_3,0);
  EVar2 = this->BuildType;
  this->CurrentPixelFormat = EVar6;
  if (((EVar2 == ColorLinear) || (EVar2 - Roughness < 3)) || (EVar2 == AmbientOcclusion)) {
    pbVar1 = (byte *)((longlong)&this->RawTexture2D->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  else if (EVar2 == EmissiveHDR) {
    pbVar1 = (byte *)((longlong)&this->RawTexture2D->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)&this->RawTexture2D->_padding_ = 6;
  }
  else {
    if (EVar2 != NormalMap) goto LAB_14ca96594;
    *(undefined1 *)&this->RawTexture2D->_padding_ = 1;
    pbVar1 = (byte *)((longlong)&this->RawTexture2D->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)((longlong)&this->RawTexture2D->_padding_ + 7) = 1;
  }
  (**(code **)(this->RawTexture2D->_padding_ + 0x328))();
LAB_14ca96594:
  bVar4 = LockForEditing(this);
  if (!bVar4) {
    return false;
  }
  if ((this->CurrentMipData != (FColor *)0x0) ||
     (this->CurrentMipDataFloat16 != (FFloat16Color *)0x0)) {
    Clear(this);
  }
  return true;
}

// LockForEditing @ 14ca97a10

bool __thiscall UE::Geometry::FTexture2DBuilder::LockForEditing(FTexture2DBuilder *this)

{
  UTexture2D *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTexturePlatformData *pFVar4;
  FColor *pFVar5;
  FFloat16Color *pFVar6;
  
  this_00 = this->RawTexture2D;
  if (((this_00 == (UTexture2D *)0x0) || (this->CurrentMipData != (FColor *)0x0)) ||
     (this->CurrentMipDataFloat16 != (FFloat16Color *)0x0)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1217805425223663828>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                       ,0xd4,
                       "RawTexture2D != nullptr && CurrentMipData == nullptr && CurrentMipDataFloat16 == nullptr"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    if (this->CurrentPixelFormat == PF_B8G8R8A8) {
      pFVar4 = UTexture2D::GetPlatformData(this_00);
      if (((pFVar4->Mips).Array.ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar5 = FBulkData::Lock((FBulkData *)
                               (*(longlong *)(pFVar4->Mips).Array.AllocatorInstance.Data + 0x20),2);
      this->CurrentMipData = pFVar5;
      if ((pFVar5 == (FColor *)0x0) &&
         (bVar2 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1217805425223663838>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                             ,0xde,"CurrentMipData"), bVar2)) {
code_r0x00014ca97b73:
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      pFVar4 = UTexture2D::GetPlatformData(this_00);
      if (((pFVar4->Mips).Array.ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar6 = FBulkData::Lock((FBulkData *)
                               (*(longlong *)(pFVar4->Mips).Array.AllocatorInstance.Data + 0x20),2);
      this->CurrentMipDataFloat16 = pFVar6;
      if ((pFVar6 == (FFloat16Color *)0x0) &&
         (bVar2 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1217805425223663846>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\AssetUtils\\Texture2DBuilder.cpp"
                             ,0xe6,"CurrentMipDataFloat16"), bVar2)) goto code_r0x00014ca97b73;
    }
    if ((this->CurrentMipData != (FColor *)0x0) ||
       (this->CurrentMipDataFloat16 != (FFloat16Color *)0x0)) {
      return true;
    }
  }
  return false;
}

// UpdateSourceData @ 14caa8e10

void __thiscall UE::Geometry::FTexture2DBuilder::UpdateSourceData(FTexture2DBuilder *this)

{
  return;
}

// operator() @ 150575e60

bool __thiscall
`UE::Geometry::FTexture2DBuilder::InitializeAndReplaceExistingTexture'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1217805425223663646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1217805425223663646>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150575ea0

bool __thiscall
`UE::Geometry::FTexture2DBuilder::InitializeAndReplaceExistingTexture'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1217805425223663690>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1217805425223663690>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

