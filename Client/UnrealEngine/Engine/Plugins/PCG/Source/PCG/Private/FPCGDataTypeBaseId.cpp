// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticStruct @ 149858730

UScriptStruct * __cdecl FPCGDataTypeBaseId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeBaseId.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeBaseId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeBaseId,(UObject *)pUVar1,
                         L"PCGDataTypeBaseId");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeBaseId.OuterSingleton;
}

// FPCGDataTypeBaseId @ 14988c460

FPCGDataTypeBaseId * __thiscall
FPCGDataTypeBaseId::FPCGDataTypeBaseId(FPCGDataTypeBaseId *this,UScriptStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14988c4cc;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14988c4ce;
  }
LAB_14988c4cc:
  param_1 = (UScriptStruct *)0x0;
LAB_14988c4ce:
  (this->Struct).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  return this;
}

// AsLegacyType @ 14989f6b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall FPCGDataTypeBaseId::AsLegacyType(FPCGDataTypeBaseId *this)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar2,
                         L"PCGDataTypeInfo");
  }
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar4 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton ==
            (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar1 == Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton;
  }
  if (bVar4) {
    return Any;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial,(UObject *)pUVar2,
                         L"PCGDataTypeInfoSpatial");
  }
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar4 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton ==
            (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar1 == Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton;
  }
  if (bVar4) {
    return Spatial;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete,(UObject *)pUVar2,
                         L"PCGDataTypeInfoConcrete");
  }
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar4 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton ==
            (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar1 == Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton;
  }
  if (bVar4) {
    return Concrete;
  }
  pUVar3 = FPCGDataTypeInfoPoint::StaticStruct();
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar4 = pUVar3 == (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar1 == pUVar3;
  }
  if (bVar4) {
    return Point;
  }
  pUVar3 = FPCGDataTypeInfoComposite::StaticStruct();
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar4 = pUVar3 == (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar1 == pUVar3;
  }
  if (bVar4) {
    return Composite;
  }
  pUVar3 = FPCGDataTypeInfoParam::StaticStruct();
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar4 = pUVar3 == (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar1 == pUVar3;
  }
  if (!bVar4) {
    pUVar3 = FPCGDataTypeInfoSpline::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Spline;
    }
    pUVar3 = FPCGDataTypeInfoLandscapeSpline::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return LandscapeSpline;
    }
    pUVar3 = FPCGDataTypeInfoPolyline::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return PolyLine;
    }
    pUVar3 = FPCGDataTypeInfoPolygon2D::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Polygon2D;
    }
    pUVar3 = FPCGDataTypeInfoLandscape::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Landscape;
    }
    pUVar3 = FPCGDataTypeInfoTexture2D::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Texture;
    }
    pUVar3 = FPCGDataTypeInfoRenderTarget2D::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return RenderTarget;
    }
    pUVar3 = FPCGDataTypeInfoVirtualTexture::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return VirtualTexture;
    }
    pUVar3 = FPCGDataTypeInfoBaseTexture2D::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return BaseTexture;
    }
    pUVar3 = FPCGDataTypeInfoSurface::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Surface;
    }
    pUVar3 = FPCGDataTypeInfoVolume::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Volume;
    }
    pUVar3 = FPCGDataTypeInfoPrimitive::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Primitive;
    }
    pUVar3 = FPCGDataTypeInfoDynamicMesh::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return DynamicMesh;
    }
    pUVar3 = FPCGDataTypeInfoStaticMeshResource::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Resource;
    }
    pUVar3 = FPCGDataTypeInfoConcrete::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Concrete;
    }
    pUVar3 = FPCGDataTypeInfoComposite::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Composite;
    }
    pUVar3 = FPCGDataTypeInfoSpatial::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return Spatial;
    }
    pUVar3 = FPCGDataTypeInfoProxyForGPU::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (bVar4) {
      return ProxyForGPU;
    }
    pUVar3 = FPCGDataTypeInfoParam::StaticStruct();
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar3;
    }
    if (!bVar4) {
      pUVar3 = FPCGDataTypeInfoSettings::StaticStruct();
      pUVar1 = (this->Struct).field0_0x0.DebugPtr;
      if (pUVar1 == (UScriptStruct *)0x0) {
        bVar4 = pUVar3 == (UScriptStruct *)0x0;
      }
      else {
        bVar4 = pUVar1 == pUVar3;
      }
      if (!bVar4) {
        pUVar3 = FPCGDataTypeInfoOther::StaticStruct();
        pUVar1 = (this->Struct).field0_0x0.DebugPtr;
        if (pUVar1 != (UScriptStruct *)0x0) {
          return -(uint)(pUVar1 == pUVar3) & Other;
        }
        return -(uint)(pUVar3 == (UScriptStruct *)0x0) & Other;
      }
      return Settings;
    }
  }
  return Param;
}

// IsChildOf @ 1498d0d60

bool __thiscall FPCGDataTypeBaseId::IsChildOf(FPCGDataTypeBaseId *this,FPCGDataTypeBaseId *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  
  pUVar2 = (this->Struct).field0_0x0.DebugPtr;
  if ((pUVar2 != (UScriptStruct *)0x0) &&
     (pUVar3 = (param_1->Struct).field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      return true;
    }
  }
  return false;
}

// IsValid @ 1498d1080

bool __thiscall FPCGDataTypeBaseId::IsValid(FPCGDataTypeBaseId *this)

{
  return (this->Struct).field0_0x0.DebugPtr != (UScriptStruct *)0x0;
}

// MakeFromLegacyType @ 1498d19c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeBaseId __cdecl FPCGDataTypeBaseId::MakeFromLegacyType(EPCGDataType param_1)

{
  int iVar1;
  UPackage *pUVar2;
  UScriptStruct *pUVar3;
  undefined4 in_register_0000000c;
  TObjectPtr<UScriptStruct_const_> TVar4;
  uint in_EDX;
  bool bVar5;
  
  TVar4.field0_0x0._4_4_ = in_register_0000000c;
  TVar4.field0_0x0._0_4_ = param_1;
  if (in_EDX < 0x801) {
    if (in_EDX == 0x800) {
      pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoStaticMeshResource,
                                 (UObject *)pUVar2,L"PCGDataTypeInfoStaticMeshResource");
        bVar5 = pUVar3 == (UScriptStruct *)0x0;
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoStaticMeshResource.OuterSingleton = pUVar3
        ;
        goto LAB_1498d1f8b;
      }
    }
    else if (in_EDX < 0x41) {
      if (in_EDX == 0x40) {
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoRenderTarget2D");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
      }
      else {
        switch(in_EDX) {
        default:
switchD_1498d1a12_caseD_0:
          *(undefined8 *)TVar4.field0_0x0 = 0;
          return (FPCGDataTypeBaseId)TVar4.field0_0x0;
        case 2:
          pUVar3 = FPCGDataTypeInfoPoint::StaticStruct();
          goto LAB_1498d1f85;
        case 4:
          pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.OuterSingleton;
          if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.OuterSingleton !=
              (UScriptStruct *)0x0) break;
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSpline,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoSpline");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpline.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        case 8:
          pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton;
          if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar2 = Z_Construct_UPackage__Script_PCG();
            pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline,
                                     (UObject *)pUVar2,L"PCGDataTypeInfoLandscapeSpline");
            bVar5 = pUVar3 == (UScriptStruct *)0x0;
            Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton =
                 pUVar3;
            goto LAB_1498d1f8b;
          }
          break;
        case 0x10:
          pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.OuterSingleton;
          if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar2 = Z_Construct_UPackage__Script_PCG();
            pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscape,
                                     (UObject *)pUVar2,L"PCGDataTypeInfoLandscape");
            bVar5 = pUVar3 == (UScriptStruct *)0x0;
            Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscape.OuterSingleton = pUVar3;
            goto LAB_1498d1f8b;
          }
          break;
        case 0x20:
          pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.OuterSingleton;
          if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar2 = Z_Construct_UPackage__Script_PCG();
            pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D,
                                     (UObject *)pUVar2,L"PCGDataTypeInfoTexture2D");
            bVar5 = pUVar3 == (UScriptStruct *)0x0;
            Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.OuterSingleton = pUVar3;
            goto LAB_1498d1f8b;
          }
        }
      }
    }
    else if (in_EDX == 0x60) {
      pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoBaseTexture2D,
                                 (UObject *)pUVar2,L"PCGDataTypeInfoBaseTexture2D");
        bVar5 = pUVar3 == (UScriptStruct *)0x0;
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoBaseTexture2D.OuterSingleton = pUVar3;
        goto LAB_1498d1f8b;
      }
    }
    else if (in_EDX == 0x80) {
      pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoVolume,(UObject *)pUVar2,
                                 L"PCGDataTypeInfoVolume");
        bVar5 = pUVar3 == (UScriptStruct *)0x0;
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVolume.OuterSingleton = pUVar3;
        goto LAB_1498d1f8b;
      }
    }
    else if (in_EDX == 0x100) {
      pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive,
                                 (UObject *)pUVar2,L"PCGDataTypeInfoPrimitive");
        bVar5 = pUVar3 == (UScriptStruct *)0x0;
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton = pUVar3;
        goto LAB_1498d1f8b;
      }
    }
    else if (in_EDX == 0x200) {
      pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoComposite,
                                 (UObject *)pUVar2,L"PCGDataTypeInfoComposite");
        bVar5 = pUVar3 == (UScriptStruct *)0x0;
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoComposite.OuterSingleton = pUVar3;
        goto LAB_1498d1f8b;
      }
    }
    else {
      if (in_EDX != 0x400) goto switchD_1498d1a12_caseD_0;
      pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoDynamicMesh,
                                 (UObject *)pUVar2,L"PCGDataTypeInfoDynamicMesh");
        bVar5 = pUVar3 == (UScriptStruct *)0x0;
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoDynamicMesh.OuterSingleton = pUVar3;
        goto LAB_1498d1f8b;
      }
    }
LAB_1498d1f8d:
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar2,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498d1fe4;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_1498d1fe6;
  }
  else {
    if (in_EDX < 0x37ff) {
      if (in_EDX == 0x37fe) {
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSpatial,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoSpatial");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSpatial.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
      }
      else if (in_EDX == 0x1000) {
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoVirtualTexture,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoVirtualTexture");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoVirtualTexture.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
      }
      else if (in_EDX == 0x1070) {
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoSurface,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoSurface");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoSurface.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
      }
      else if (in_EDX == 0x2000) {
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPolygon2D,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoPolygon2D");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolygon2D.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
      }
      else if (in_EDX == 0x200c) {
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPolyline,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoPolyline");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPolyline.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
      }
      else {
        if (in_EDX != 0x35fe) goto switchD_1498d1a12_caseD_0;
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoConcrete,
                                   (UObject *)pUVar2,L"PCGDataTypeInfoConcrete");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoConcrete.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
      }
      goto LAB_1498d1f8d;
    }
    if (in_EDX == 0x4000000) {
      pUVar3 = FPCGDataTypeInfoProxyForGPU::StaticStruct();
LAB_1498d1f85:
      bVar5 = pUVar3 == (UScriptStruct *)0x0;
LAB_1498d1f8b:
      if (!bVar5) goto LAB_1498d1f8d;
    }
    else {
      if (in_EDX == 0x8000000) {
        pUVar3 = FPCGDataTypeInfoParam::StaticStruct();
        goto LAB_1498d1f85;
      }
      if (in_EDX == 0x10000000) {
        pUVar3 = FPCGDataTypeInfoSettings::StaticStruct();
        goto LAB_1498d1f85;
      }
      if (in_EDX == 0x20000000) {
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.OuterSingleton;
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar2 = Z_Construct_UPackage__Script_PCG();
          pUVar3 = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoOther,(UObject *)pUVar2
                                   ,L"PCGDataTypeInfoOther");
          bVar5 = pUVar3 == (UScriptStruct *)0x0;
          Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoOther.OuterSingleton = pUVar3;
          goto LAB_1498d1f8b;
        }
        goto LAB_1498d1f8d;
      }
      if (in_EDX != 0x3fffffff) goto switchD_1498d1a12_caseD_0;
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar2 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar2,
                             L"PCGDataTypeInfo");
        if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1498d1f22;
      }
      else {
LAB_1498d1f22:
        pUVar3 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton;
        if ((longlong *)
            *(undefined1 **)
             ((Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_ +
             (longlong)
             (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_ * 8
             ) == &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)
        goto LAB_1498d1fe6;
      }
    }
  }
LAB_1498d1fe4:
  pUVar3 = (UScriptStruct *)0x0;
LAB_1498d1fe6:
  *(UScriptStruct **)TVar4.field0_0x0 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return (FPCGDataTypeBaseId)TVar4.field0_0x0.DebugPtr;
}

// ToString @ 1498f81a0

FString * __thiscall
FPCGDataTypeBaseId::ToString(FPCGDataTypeBaseId *this,FString *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  UPackage *pUVar6;
  FString *pFVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar6,
                         L"PCGDataTypeInfo");
  }
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar10 = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton ==
             (UScriptStruct *)0x0;
  }
  else {
    bVar10 = pUVar1 == Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton;
  }
  if (bVar10) {
    ::FString::FString(__return_storage_ptr__,L"Any");
    return __return_storage_ptr__;
  }
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&Prefix,L"DataTypeInfo");
    atexit(`FPCGDataTypeBaseId::ToString'::__l11::_dynamic_atexit_destructor_for__Prefix__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar9 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    PrefixSize = Prefix.Data.ArrayNum + -1;
    if (Prefix.Data.ArrayNum == 0) {
      PrefixSize = 0;
    }
    _Init_thread_footer(&::_TSS1);
  }
  local_res8 = (FName)((this->Struct).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  iVar4 = Prefix.Data.ArrayNum + -1;
  FVar3 = Prefix.Data.AllocatorInstance;
  if (Prefix.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  iVar4 = ::FString::Find(&local_28,(wchar_t *)FVar3.Data,iVar4,IgnoreCase,FromStart,-1);
  if (iVar4 == -1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    iVar8 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    iVar4 = (iVar8 - PrefixSize) - iVar4;
    iVar5 = iVar8;
    if (iVar4 < iVar8) {
      iVar5 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    pFVar7 = ::FString::ConstructFromPtrSize
                       (&local_18,
                        (wchar_t *)
                        (local_28.Data.AllocatorInstance.Data +
                        ((longlong)iVar8 - (longlong)iVar4) * 2),iVar4);
    if (__return_storage_ptr__ != pFVar7) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

