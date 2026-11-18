// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 1

// FSceneTextures @ 14de6fec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneTextures * __thiscall
FSceneTextures::FSceneTextures(FSceneTextures *this,FSceneTextures *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  FRDGTexture *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  lVar8 = 2;
  plVar5 = &param_1->_padding_;
  plVar6 = &this->_padding_;
  do {
    plVar9 = plVar6;
    plVar7 = plVar5;
    lVar3 = plVar7[1];
    *plVar9 = *plVar7;
    plVar9[1] = lVar3;
    lVar3 = plVar7[3];
    plVar9[2] = plVar7[2];
    plVar9[3] = lVar3;
    lVar3 = plVar7[5];
    plVar9[4] = plVar7[4];
    plVar9[5] = lVar3;
    lVar3 = plVar7[7];
    plVar9[6] = plVar7[6];
    plVar9[7] = lVar3;
    lVar3 = plVar7[9];
    plVar9[8] = plVar7[8];
    plVar9[9] = lVar3;
    lVar3 = plVar7[0xb];
    plVar9[10] = plVar7[10];
    plVar9[0xb] = lVar3;
    lVar3 = plVar7[0xd];
    plVar9[0xc] = plVar7[0xc];
    plVar9[0xd] = lVar3;
    lVar3 = plVar7[0xf];
    plVar9[0xe] = plVar7[0xe];
    plVar9[0xf] = lVar3;
    lVar8 = lVar8 + -1;
    plVar5 = plVar7 + 0x10;
    plVar6 = plVar9 + 0x10;
  } while (lVar8 != 0);
  lVar8 = plVar7[0x11];
  plVar9[0x10] = plVar7[0x10];
  plVar9[0x11] = lVar8;
  lVar8 = plVar7[0x13];
  plVar9[0x12] = plVar7[0x12];
  plVar9[0x13] = lVar8;
  lVar8 = plVar7[0x15];
  plVar9[0x14] = plVar7[0x14];
  plVar9[0x15] = lVar8;
  lVar8 = plVar7[0x17];
  plVar9[0x16] = plVar7[0x16];
  plVar9[0x17] = lVar8;
  lVar8 = plVar7[0x19];
  plVar9[0x18] = plVar7[0x18];
  plVar9[0x19] = lVar8;
  lVar8 = plVar7[0x1b];
  plVar9[0x1a] = plVar7[0x1a];
  plVar9[0x1b] = lVar8;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  this->_padding_ = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TSet<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->_padding_,
              (TSet<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&param_1->_padding_);
  plVar5 = &this->_padding_;
  *plVar5 = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar2 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,0,(ForAnyElementType *)plVar5,iVar2,piVar1);
    memcpy((void *)*plVar5,_Src,(longlong)iVar2 << 5);
  }
  this->SmallDepth = param_1->SmallDepth;
  this->GBufferA = param_1->GBufferA;
  this->GBufferB = param_1->GBufferB;
  this->GBufferC = param_1->GBufferC;
  this->GBufferD = param_1->GBufferD;
  this->GBufferE = param_1->GBufferE;
  this->GBufferF = param_1->GBufferF;
  this->GBufferSGGX = param_1->GBufferSGGX;
  pFVar4 = (param_1->DepthAux).Resolve;
  (this->DepthAux).Target = (param_1->DepthAux).Target;
  (this->DepthAux).Resolve = pFVar4;
  this->Velocity = param_1->Velocity;
  this->MobileLocalLightTextureA = param_1->MobileLocalLightTextureA;
  this->MobileLocalLightTextureB = param_1->MobileLocalLightTextureB;
  this->ScreenSpaceAO = param_1->ScreenSpaceAO;
  this->DebugAux = param_1->DebugAux;
  this->StereoMotionVectors = param_1->StereoMotionVectors;
  this->StereoMotionVectorDepth = param_1->StereoMotionVectorDepth;
  return this;
}

