// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 3

// StaticStruct @ 14acdfa00

UScriptStruct * __cdecl FSpriteDrawCallRecord::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpriteDrawCallRecord.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Paper2D();
    Z_Registration_Info_UScriptStruct_FSpriteDrawCallRecord.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpriteDrawCallRecord,(UObject *)pUVar1,
                         L"SpriteDrawCallRecord");
  }
  return Z_Registration_Info_UScriptStruct_FSpriteDrawCallRecord.OuterSingleton;
}

// FSpriteDrawCallRecord @ 14ace9a30

FSpriteDrawCallRecord * __thiscall
FSpriteDrawCallRecord::FSpriteDrawCallRecord
          (FSpriteDrawCallRecord *this,FSpriteDrawCallRecord *param_1)

{
  UTexture *pUVar1;
  ForElementType<UTexture_*> FVar2;
  ForElementType<UE::Math::TVector4<double>_> FVar3;
  double dVar4;
  
  dVar4 = (param_1->Destination).field0_0x0._s_0.Y;
  (this->Destination).field0_0x0._s_0.X = (param_1->Destination).field0_0x0._s_0.X;
  (this->Destination).field0_0x0._s_0.Y = dVar4;
  (this->Destination).field0_0x0._s_0.Z = (param_1->Destination).field0_0x0._s_0.Z;
  pUVar1 = (param_1->BaseTexture).field0_0x0.DebugPtr;
  (this->BaseTexture).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->AdditionalTextures).AllocatorInstance.SecondaryData = (ForElementType<UTexture_*>)0x0;
  if ((param_1->AdditionalTextures).AllocatorInstance.SecondaryData ==
      (ForElementType<UTexture_*>)0x0) {
    memmove(&this->AdditionalTextures,&param_1->AdditionalTextures,0x20);
  }
  FVar2 = (this->AdditionalTextures).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UTexture_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->AdditionalTextures).AllocatorInstance.SecondaryData =
       (param_1->AdditionalTextures).AllocatorInstance.SecondaryData;
  (param_1->AdditionalTextures).AllocatorInstance.SecondaryData = (ForElementType<UTexture_*>)0x0;
  (this->AdditionalTextures).ArrayNum = (param_1->AdditionalTextures).ArrayNum;
  (this->AdditionalTextures).ArrayMax = (param_1->AdditionalTextures).ArrayMax;
  (param_1->AdditionalTextures).ArrayNum = 0;
  (param_1->AdditionalTextures).ArrayMax = 4;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  (this->RenderVerts).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector4<double>_>)0x0;
  if ((param_1->RenderVerts).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TVector4<double>_>)0x0) {
    memmove(&this->RenderVerts,&param_1->RenderVerts,0xc0);
  }
  FVar3 = (this->RenderVerts).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->RenderVerts).AllocatorInstance.SecondaryData =
       (param_1->RenderVerts).AllocatorInstance.SecondaryData;
  (param_1->RenderVerts).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector4<double>_>)0x0;
  (this->RenderVerts).ArrayNum = (param_1->RenderVerts).ArrayNum;
  (this->RenderVerts).ArrayMax = (param_1->RenderVerts).ArrayMax;
  (param_1->RenderVerts).ArrayNum = 0;
  (param_1->RenderVerts).ArrayMax = 6;
  return this;
}

// BuildFromSprite @ 14acef5d0

void __thiscall
FSpriteDrawCallRecord::BuildFromSprite(FSpriteDrawCallRecord *this,UPaperSprite *param_1)

{
  int *piVar1;
  int iVar2;
  UTexture2D *pUVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  ForElementType<UE::Math::TVector4<double>_> _Dst;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1 != (UPaperSprite *)0x0) {
    (this->Destination).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Destination).field0_0x0._s_0.Y = (double)uVar4;
    (this->Destination).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pUVar3 = (param_1->BakedSourceTexture).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->BaseTexture).field0_0x0.DebugPtr = (UTexture *)pUVar3;
    TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
    operator=<TSizedDefaultAllocator<32>_>
              (&this->AdditionalTextures,
               (TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)&param_1->AdditionalSourceTextures)
    ;
    (this->Color).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
    piVar1 = &(this->RenderVerts).ArrayMax;
    iVar2 = (param_1->BakedRenderData).ArrayNum;
    _Src = (param_1->BakedRenderData).AllocatorInstance.Data;
    (this->RenderVerts).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 6;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                (0x20,0x10,iVar2,*piVar1,&(this->RenderVerts).AllocatorInstance,iVar2,piVar1);
      _Dst = (this->RenderVerts).AllocatorInstance.SecondaryData;
      if (iVar2 != 0) {
        if (_Dst == (ForElementType<UE::Math::TVector4<double>_>)0x0) {
          _Dst = (ForElementType<UE::Math::TVector4<double>_>)&this->RenderVerts;
        }
        memcpy((void *)_Dst,_Src,(longlong)iVar2 << 5);
      }
    }
  }
  return;
}

