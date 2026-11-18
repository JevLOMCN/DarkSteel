// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 6

// FEasyParticleRootState @ 14ac8ecf0

FEasyParticleRootState * __thiscall
FEasyParticleRootState::FEasyParticleRootState(FEasyParticleRootState *this)

{
  FEasyParticleState::FEasyParticleState((FEasyParticleState *)this);
  this->FirstRootTick = false;
  *(undefined ***)this = &___7FEasyParticleRootState__6B_;
  this->field_0x3d8 = 1;
  return this;
}

// ~FEasyParticleRootState @ 14ac90ba0

void __thiscall FEasyParticleRootState::~FEasyParticleRootState(FEasyParticleRootState *this)

{
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar1;
  
  *(undefined ***)this = &___7FEasyParticleRootState__6B_;
  pFVar1 = FUIParticleFactory::m_Instance;
  if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
    this_00 = ::operator_new(0x30);
    pFVar1 = (FUIParticleFactory *)0x0;
    if (this_00 != (FUIParticleFactory *)0x0) {
      pFVar1 = FUIParticleFactory::FUIParticleFactory(this_00);
    }
  }
  FUIParticleFactory::m_Instance = pFVar1;
  FUIParticleFactory::ClearChildren(FUIParticleFactory::m_Instance,this);
  FEasyParticleState::~FEasyParticleState((FEasyParticleState *)this);
  return;
}

// FirstTick @ 14ac96ed0

void __thiscall
FEasyParticleRootState::FirstTick(FEasyParticleRootState *this,float param_1,FGeometry *param_2)

{
  longlong lVar1;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar2;
  int iVar3;
  float fVar4;
  
  if ((this->FirstRootTick != false) && (this->field_0x3d8 != '\0')) {
    lVar1 = *(longlong *)&this->field_0x3c8;
    this->FirstRootTick = false;
    if ((lVar1 != 0) &&
       (((fVar4 = *(float *)(lVar1 + 0x2c), 0.0 < fVar4 && (param_1 < fVar4)) &&
        (0 < *(int *)(lVar1 + 0x30))))) {
      iVar3 = 0;
      fVar4 = (fVar4 - param_1) / (float)*(int *)(lVar1 + 0x30);
      do {
        pFVar2 = FUIParticleFactory::m_Instance;
        if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
          this_00 = ::operator_new(0x30);
          pFVar2 = (FUIParticleFactory *)0x0;
          if (this_00 != (FUIParticleFactory *)0x0) {
            pFVar2 = FUIParticleFactory::FUIParticleFactory(this_00);
          }
        }
        FUIParticleFactory::m_Instance = pFVar2;
        if (UUIParticleUtility::Multi_Thread == false) {
          FUIParticleFactory::Tick(FUIParticleFactory::m_Instance,this,fVar4,param_2);
        }
        else {
          FUIParticleFactory::ParallelTick(FUIParticleFactory::m_Instance,this,fVar4,param_2);
        }
        FEasyParticleState::TrySpawnParticle((FEasyParticleState *)this,param_2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(longlong *)&this->field_0x3c8 + 0x30));
    }
  }
  return;
}

// InitRoot @ 14ac99b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FEasyParticleRootState::InitRoot
          (FEasyParticleRootState *this,UUIParticleEmitterAsset *param_1,float param_2,int param_3)

{
  int *piVar1;
  TArray<FChildEmitter,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UUIParticleEmitterAsset *this_00;
  FUIParticleFactory *this_01;
  FUIParticleFactory *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  UUIParticleEmitterAsset *local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (param_1 == (UUIParticleEmitterAsset *)0x0) {
    this->field_0x3d9 = 1;
  }
  else {
    if (*(UUIParticleEmitterAsset **)&this->field_0x3c8 == (UUIParticleEmitterAsset *)0x0 ||
        *(UUIParticleEmitterAsset **)&this->field_0x3c8 != param_1) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(UUIParticleEmitterAsset **)&this->field_0x3c8 = param_1;
      pUVar10 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar10,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar11 = UUIParticleEmitterAsset::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar11);
      local_d8._8_8_ = pUVar10;
      this_00 = (UUIParticleEmitterAsset *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar13 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      UUIParticleEmitterAsset::Reset(this_00);
      pTVar2 = &this_00->ChildrenEmitters;
      local_f8 = 0;
      uStack_f4 = uStack_f4 & 0xffffff00;
      uStack_f0 = 0;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      iStack_ec = param_3;
      local_e8 = param_1;
      if ((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
         (lVar14 = (longlong)(this_00->ChildrenEmitters).ArrayMax,
         (FScriptContainerElement *)&local_f8 < pFVar3 + lVar14 * 0x18)) {
        local_110 = (longlong)(this_00->ChildrenEmitters).ArrayNum;
        local_108 = 0x18;
        local_128 = &local_f8;
        local_120 = pFVar3;
        local_118 = lVar14;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (this_00->ChildrenEmitters).ArrayNum;
      piVar1 = &(this_00->ChildrenEmitters).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      (this_00->ChildrenEmitters).ArrayNum = iVar8 + 1;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
      *(ulonglong *)pFVar3 = CONCAT44(uStack_f4,local_f8);
      *(ulonglong *)(pFVar3 + 8) = CONCAT44(iStack_ec,uStack_f0);
      *(UUIParticleEmitterAsset **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_e8;
      pFVar12 = FUIParticleFactory::m_Instance;
      if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
        this_01 = ::operator_new(0x30);
        pFVar12 = (FUIParticleFactory *)0x0;
        if (this_01 != (FUIParticleFactory *)0x0) {
          pFVar12 = FUIParticleFactory::FUIParticleFactory(this_01);
        }
      }
      FUIParticleFactory::m_Instance = pFVar12;
      FUIParticleFactory::ClearChildren(FUIParticleFactory::m_Instance,this);
    }
    else {
      this_00 = *(UUIParticleEmitterAsset **)&this->field_0x3d0;
      if ((this_00->ChildrenEmitters).ArrayNum == 1) {
        *(int *)((this_00->ChildrenEmitters).AllocatorInstance.Data + 0xc) = param_3;
      }
    }
    *(undefined4 *)&this->field_0x138 = 0x4479c000;
    this->field_0x3d8 = 1;
    this->field_0x3da = 0;
    uVar9 = rand();
    fVar6 = __real_38000100;
    *(float *)&this->field_0x168 = (float)(uVar9 & 0x7fff) * __real_38000100;
    uVar9 = rand();
    *(float *)&this->field_0x16c = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x170 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x174 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x178 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x19c = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1a0 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x180 = (float)(uVar9 & 0x7fff) * fVar6;
    FLerpKeyColor::Random((FLerpKeyColor *)&this->field_0x184);
    uVar9 = rand();
    *(float *)&this->field_0x194 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x198 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1a4 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x17c = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1a8 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1ac = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1b0 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1b4 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1b8 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1bc = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x258 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x25c = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1c4 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1c0 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1c8 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1cc = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1d0 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1d4 = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x1dc = (float)(uVar9 & 0x7fff) * fVar6;
    uVar9 = rand();
    *(float *)&this->field_0x244 = param_2;
    *(undefined4 *)&this->field_0x74 = 0;
    *(float *)&this->field_0x1e0 = (float)(uVar9 & 0x7fff) * fVar6;
    FEasyParticleState::InitWithAsset((FEasyParticleState *)this,this_00);
    ResetRoot(this);
  }
  return;
}

// ResetRoot @ 14ac9f200

void __thiscall FEasyParticleRootState::ResetRoot(FEasyParticleRootState *this)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  undefined4 extraout_XMM0_Da;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar11;
  
  FEasyParticleState::ResetStateProperty((FEasyParticleState *)this);
  *(undefined4 *)&this->field_0x74 = 0;
  uVar8 = rand();
  lVar7 = *(longlong *)&this->field_0x3d0;
  puVar1 = &this->field_0x3e0;
  fVar11 = (float)(uVar8 & 0x7fff) * __real_38000100;
  *(float *)&this->field_0x208 = fVar11;
  if (lVar7 != 0) {
    fVar10 = *(float *)&this->field_0x74;
    *(undefined8 *)&this->field_0x30 = *(undefined8 *)&this->field_0x150;
    *(undefined8 *)&this->field_0x38 = *(undefined8 *)&this->field_0x158;
    fVar9 = FUIParticleProperty::GetValue_Float
                      ((FUIParticleProperty *)(lVar7 + 0x1868),0.0,0.0,fVar10,fVar11);
    fVar11 = FUIParticleProperty::GetValue_Float
                       ((FUIParticleProperty *)(lVar7 + 0x2068),0.0,0.0,fVar10,fVar11);
    *(double *)puVar1 = (double)*(float *)&this->field_0x78 * (double)fVar9;
    *(double *)&this->field_0x3e8 = (double)*(float *)&this->field_0x78 * (double)fVar11;
  }
  cVar6 = this->field_0x14c;
  if (cVar6 == '\0') {
    *(double *)&this->field_0x40 = *(double *)&this->field_0x220 + *(double *)puVar1;
    *(double *)&this->field_0x48 = *(double *)&this->field_0x228 + *(double *)&this->field_0x3e8;
  }
  else if (cVar6 == '\x01') {
    __libm_sse2_sincos_();
    *(double *)&this->field_0x40 =
         (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * (double)*(float *)&this->field_0x250
         + *(double *)puVar1;
    *(double *)&this->field_0x48 =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)*(float *)&this->field_0x250
         + *(double *)&this->field_0x3e8;
  }
  else if (cVar6 == '\x02') {
    dVar2 = *(double *)puVar1;
    dVar3 = *(double *)&this->field_0x228;
    dVar4 = *(double *)&this->field_0x220;
    dVar5 = *(double *)&this->field_0x3e8;
    fVar11 = FUIParticleProperty::GetValue_Float
                       ((FUIParticleProperty *)(*(longlong *)&this->field_0x3d0 + 0x9898),0.0,0.0,
                        *(float *)&this->field_0x74,*(float *)&this->field_0x1a0);
    fVar10 = FUIParticleProperty::GetValue_Float
                       ((FUIParticleProperty *)(*(longlong *)&this->field_0x3d0 + 0x9098),0.0,0.0,
                        *(float *)&this->field_0x74,*(float *)&this->field_0x19c);
    *(double *)&this->field_0x40 =
         (double)*(float *)&this->field_0x78 * (double)fVar10 + dVar2 + dVar4;
    *(double *)&this->field_0x48 =
         (double)fVar11 * (double)*(float *)&this->field_0x78 + dVar3 + dVar5;
  }
  *(undefined4 *)&this->field_0x248 = 0;
  *(undefined4 *)&this->field_0x138 = 0x4479c000;
  this->FirstRootTick = true;
  *(FEasyParticleRootState **)&this->field_0x408 = this;
  return;
}

// TickTick @ 14aca1f70

void __thiscall
FEasyParticleRootState::TickTick(FEasyParticleRootState *this,float param_1,FGeometry *param_2)

{
  longlong lVar1;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar2;
  int iVar3;
  float fVar4;
  
  if ((((this->field_0x3d8 != '\0') && (lVar1 = *(longlong *)&this->field_0x3c8, lVar1 != 0)) &&
      (fVar4 = *(float *)(lVar1 + 0x2c), 0.0 < fVar4)) &&
     ((param_1 < fVar4 && (0 < *(int *)(lVar1 + 0x30))))) {
    iVar3 = 0;
    fVar4 = (fVar4 - param_1) / (float)*(int *)(lVar1 + 0x30);
    do {
      pFVar2 = FUIParticleFactory::m_Instance;
      if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
        this_00 = ::operator_new(0x30);
        pFVar2 = (FUIParticleFactory *)0x0;
        if (this_00 != (FUIParticleFactory *)0x0) {
          pFVar2 = FUIParticleFactory::FUIParticleFactory(this_00);
        }
      }
      FUIParticleFactory::m_Instance = pFVar2;
      if (UUIParticleUtility::Multi_Thread == false) {
        FUIParticleFactory::Tick(FUIParticleFactory::m_Instance,this,fVar4,param_2);
      }
      else {
        FUIParticleFactory::ParallelTick(FUIParticleFactory::m_Instance,this,fVar4,param_2);
      }
      FEasyParticleState::TrySpawnParticle((FEasyParticleState *)this,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(longlong *)&this->field_0x3c8 + 0x30));
  }
  return;
}

