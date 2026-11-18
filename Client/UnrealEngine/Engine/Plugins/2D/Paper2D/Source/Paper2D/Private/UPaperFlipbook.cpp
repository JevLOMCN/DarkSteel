// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 30

// StaticClass @ 14acdf8d0

UClass * __cdecl UPaperFlipbook::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbook",
               &Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton,
               StaticRegisterNativesUPaperFlipbook,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperFlipbook>,InternalVTableHelperCtorCaller<UPaperFlipbook>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton;
}

// UPaperFlipbook @ 14acea210

UPaperFlipbook * __thiscall
UPaperFlipbook::UPaperFlipbook(UPaperFlipbook *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPaperFlipbook__6B_;
  (this->KeyFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyFrames).ArrayNum = 0;
  (this->KeyFrames).ArrayMax = 0;
  (this->DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// UPaperFlipbook @ 14acea250

UPaperFlipbook * __thiscall
UPaperFlipbook::UPaperFlipbook(UPaperFlipbook *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UPaperFlipbook__6B_;
  (this->KeyFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyFrames).ArrayNum = 0;
  (this->KeyFrames).ArrayMax = 0;
  (this->DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  pvVar1 = ThreadLocalStoragePointer;
  this->FramesPerSecond = 15.0;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&MaskedMaterialRef,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
      atexit(`UPaperFlipbook::UPaperFlipbook'::__l2::
             _dynamic_atexit_destructor_for__MaskedMaterialRef__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (MaskedMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)MaskedMaterialRef.Object.field0_0x0);
  }
  (this->DefaultMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)MaskedMaterialRef.Object.field0_0x0;
  return this;
}

// ~UPaperFlipbook @ 14aceba00

void __thiscall UPaperFlipbook::~UPaperFlipbook(UPaperFlipbook *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPaperFlipbook__6B_;
  pFVar1 = (this->KeyFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ContainsSprite @ 14acf2310

bool __thiscall UPaperFlipbook::ContainsSprite(UPaperFlipbook *this,UPaperSprite *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->KeyFrames).ArrayNum;
  pFVar2 = (this->KeyFrames).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->KeyFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) {
      return false;
    }
    if (*(UPaperSprite **)pFVar2 == (UPaperSprite *)0x0) {
      bVar4 = param_1 == (UPaperSprite *)0x0;
    }
    else {
      bVar4 = *(UPaperSprite **)pFVar2 == param_1;
    }
    if (bVar4) break;
    pFVar2 = pFVar2 + 0x10;
  }
  return true;
}

// DoesSocketExist @ 14acf5c30

bool __thiscall UPaperFlipbook::DoesSocketExist(UPaperFlipbook *this,FName param_1)

{
  int iVar1;
  FPaperSpriteSocket *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->KeyFrames).ArrayNum;
  pFVar4 = (this->KeyFrames).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->KeyFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    if ((*(UPaperSprite **)pFVar4 != (UPaperSprite *)0x0) &&
       (pFVar2 = UPaperSprite::FindSocket(*(UPaperSprite **)pFVar4,param_1),
       pFVar2 != (FPaperSpriteSocket *)0x0)) {
      return true;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  return false;
}

// FindSocket @ 14acf7ae0

bool __thiscall
UPaperFlipbook::FindSocket
          (UPaperFlipbook *this,FName param_1,int param_2,TTransform<double> *param_3)

{
  UPaperSprite *this_00;
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FPaperSpriteSocket *pFVar10;
  double dVar11;
  
  if (((-1 < param_2) && (param_2 < (this->KeyFrames).ArrayNum)) && (param_1 != (FName)0x0)) {
    uVar9 = 0;
    if (param_2 < (this->KeyFrames).ArrayNum) {
      uVar9 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    this_00 = *(UPaperSprite **)
               ((this->KeyFrames).AllocatorInstance.Data + (longlong)param_2 * 0x10);
    if ((this_00 != (UPaperSprite *)0x0) &&
       (pFVar10 = UPaperSprite::FindSocket(this_00,param_1), pFVar10 != (FPaperSpriteSocket *)0x0))
    {
      dVar3 = (pFVar10->LocalTransform).Rotation.XY.m128d_f64[1];
      (param_3->Rotation).XY.m128d_f64[0] = (pFVar10->LocalTransform).Rotation.XY.m128d_f64[0];
      (param_3->Rotation).XY.m128d_f64[1] = dVar3;
      dVar3 = (pFVar10->LocalTransform).Rotation.ZW.m128d_f64[1];
      (param_3->Rotation).ZW.m128d_f64[0] = (pFVar10->LocalTransform).Rotation.ZW.m128d_f64[0];
      (param_3->Rotation).ZW.m128d_f64[1] = dVar3;
      dVar3 = (pFVar10->LocalTransform).Translation.XY.m128d_f64[1];
      (param_3->Translation).XY.m128d_f64[0] = (pFVar10->LocalTransform).Translation.XY.m128d_f64[0]
      ;
      (param_3->Translation).XY.m128d_f64[1] = dVar3;
      dVar3 = (pFVar10->LocalTransform).Translation.ZW.m128d_f64[1];
      (param_3->Translation).ZW.m128d_f64[0] = (pFVar10->LocalTransform).Translation.ZW.m128d_f64[0]
      ;
      (param_3->Translation).ZW.m128d_f64[1] = dVar3;
      dVar3 = (pFVar10->LocalTransform).Scale3D.XY.m128d_f64[1];
      (param_3->Scale3D).XY.m128d_f64[0] = (pFVar10->LocalTransform).Scale3D.XY.m128d_f64[0];
      (param_3->Scale3D).XY.m128d_f64[1] = dVar3;
      fVar6 = __real_3f800000;
      dVar3 = (pFVar10->LocalTransform).Scale3D.ZW.m128d_f64[1];
      (param_3->Scale3D).ZW.m128d_f64[0] = (pFVar10->LocalTransform).Scale3D.ZW.m128d_f64[0];
      (param_3->Scale3D).ZW.m128d_f64[1] = dVar3;
      dVar11 = (double)(fVar6 / this_00->PixelsPerUnrealUnit);
      dVar5 = (param_3->Translation).ZW.m128d_f64[1] * 0.0;
      dVar3 = dVar11 * (param_3->Translation).XY.m128d_f64[1];
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar11 * (param_3->Translation).XY.m128d_f64[0];
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64 = auVar2;
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = dVar11 * (param_3->Translation).ZW.m128d_f64[0];
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(param_3->Translation).ZW.m128d_f64 = auVar4;
      return true;
    }
  }
  return false;
}

// GetFramesPerSecond @ 14acfa910

float __thiscall UPaperFlipbook::GetFramesPerSecond(UPaperFlipbook *this)

{
  return this->FramesPerSecond;
}

// GetKeyFrameChecked @ 14acfab10

FPaperFlipbookKeyFrame * __thiscall
UPaperFlipbook::GetKeyFrameChecked(UPaperFlipbook *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPaperFlipbookKeyFrame *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->KeyFrames).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPaperFlipbookKeyFrame *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPaperFlipbookKeyFrame *)
         ((this->KeyFrames).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// GetKeyFrameIndexAtTime @ 14acfab90

int __thiscall
UPaperFlipbook::GetKeyFrameIndexAtTime(UPaperFlipbook *this,float param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  
  fVar8 = 0.0;
  if ((param_1 < 0.0) && (!param_2)) {
    return -1;
  }
  uVar3 = (this->KeyFrames).ArrayNum;
  uVar6 = 0;
  if (this->FramesPerSecond <= 0.0) {
    uVar3 = (uint)(0 < (int)uVar3);
  }
  else {
    uVar7 = uVar6;
    if (0 < (int)uVar3) {
      do {
        uVar5 = (uint)uVar6;
        uVar3 = 0;
        if ((int)uVar5 < (this->KeyFrames).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        fVar8 = fVar8 + (float)*(int *)((this->KeyFrames).AllocatorInstance.Data + uVar7 + 8) /
                        this->FramesPerSecond;
        if (param_1 <= fVar8) {
          return uVar5;
        }
        uVar3 = (this->KeyFrames).ArrayNum;
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar7 = uVar7 + 0x10;
      } while ((int)(uVar5 + 1) < (int)uVar3);
    }
  }
  return uVar3 - 1;
}

// GetNumFrames @ 14acfc5b0

int __thiscall UPaperFlipbook::GetNumFrames(UPaperFlipbook *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = 0;
  if (0 < (this->KeyFrames).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->KeyFrames).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + *(int *)((this->KeyFrames).AllocatorInstance.Data + lVar6 + 8);
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (this->KeyFrames).ArrayNum);
  }
  return iVar4;
}

// GetPrivateStaticClass @ 14acfcf50

UClass * __cdecl UPaperFlipbook::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperFlipbook",
               &Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton,
               StaticRegisterNativesUPaperFlipbook,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperFlipbook>,InternalVTableHelperCtorCaller<UPaperFlipbook>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperFlipbook.InnerSingleton;
}

// GetRenderBounds @ 14acfdba0

TBoxSphereBounds<double,double> * __thiscall
UPaperFlipbook::GetRenderBounds
          (UPaperFlipbook *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double>_u_0 local_50;
  double dStack_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  bVar2 = false;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  iVar1 = (this->KeyFrames).ArrayNum;
  pFVar4 = (this->KeyFrames).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
LAB_14acfdbf3:
  do {
    if ((this->KeyFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) {
      return __return_storage_ptr__;
    }
    if (*(UPaperSprite **)pFVar4 != (UPaperSprite *)0x0) {
      UPaperSprite::GetRenderBounds
                (*(UPaperSprite **)pFVar4,(TBoxSphereBounds<double,double> *)&local_88._s_0);
      if (bVar2) {
        UE::Math::TBoxSphereBounds<double,double>::operator+
                  (__return_storage_ptr__,(TBoxSphereBounds<double,double> *)&local_50._s_0,
                   (TBoxSphereBounds<double,double> *)&local_88._s_0);
        pFVar4 = pFVar4 + 0x10;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_50._s_0.X;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_50._s_0.Y;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_50._s_0.Z;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_38;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_30;
        (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_28;
        __return_storage_ptr__->SphereRadius = local_20;
        goto LAB_14acfdbf3;
      }
      bVar2 = true;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_88._s_0.X;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_88._s_0.Y;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_88._s_0.Z;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dStack_70;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = local_68;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dStack_60;
      __return_storage_ptr__->SphereRadius = local_58;
    }
    pFVar4 = pFVar4 + 0x10;
  } while( true );
}

// GetSpriteAtFrame @ 14acfead0

UPaperSprite * __thiscall UPaperFlipbook::GetSpriteAtFrame(UPaperFlipbook *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UPaperSprite *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->KeyFrames).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->KeyFrames).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPaperSprite *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(UPaperSprite **)((this->KeyFrames).AllocatorInstance.Data + (longlong)param_1 * 0x10)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPaperSprite *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (UPaperSprite *)0x0;
}

// GetSpriteAtTime @ 14acfeb80

UPaperSprite * __thiscall
UPaperFlipbook::GetSpriteAtTime(UPaperFlipbook *this,float param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  UPaperSprite *pUVar5;
  
  uVar3 = GetKeyFrameIndexAtTime(this,param_1,param_2);
  if ((-1 < (int)uVar3) && ((int)uVar3 < (this->KeyFrames).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar3 < (this->KeyFrames).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UPaperSprite *)(*pcVar1)();
        return pUVar5;
      }
    }
    pUVar5 = *(UPaperSprite **)
              ((this->KeyFrames).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPaperSprite *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    return pUVar5;
  }
  return (UPaperSprite *)0x0;
}

// GetTotalDuration @ 14ad01900

float __thiscall UPaperFlipbook::GetTotalDuration(UPaperFlipbook *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  fVar1 = this->FramesPerSecond;
  if (fVar1 != 0.0) {
    iVar2 = GetNumFrames(this);
    fVar3 = (float)iVar2 / fVar1;
  }
  return fVar3;
}

// HasAnySockets @ 14ad025e0

bool __thiscall UPaperFlipbook::HasAnySockets(UPaperFlipbook *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->KeyFrames).ArrayNum;
  pFVar2 = (this->KeyFrames).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->KeyFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((*(longlong *)pFVar2 != 0) && (0 < *(int *)(*(longlong *)pFVar2 + 0x88))) {
      return true;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return false;
}

// InvalidateCachedData @ 14ad03360

void __thiscall UPaperFlipbook::InvalidateCachedData(UPaperFlipbook *this)

{
  return;
}

// PostLoad @ 14ad055d0

void __thiscall UPaperFlipbook::PostLoad(UPaperFlipbook *this)

{
  int iVar1;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18 = FPaperCustomVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar1 < 7) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
    return;
  }
  return;
}

// QuerySupportedSockets @ 14ad06060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperFlipbook::QuerySupportedSockets
          (UPaperFlipbook *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_108 [32];
  undefined1 local_b8;
  undefined1 local_b7 [7];
  TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> local_b0;
  uint local_a0;
  undefined1 local_9c [20];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar12 = (this->KeyFrames).AllocatorInstance.Data;
  iVar6 = 0;
  local_a0 = (this->KeyFrames).ArrayNum;
  uVar9 = (ulonglong)(int)local_a0;
  local_88.Elements._0_8_ = 0;
  pFVar13 = pFVar12 + uVar9 * 0x10;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_9c._4_8_ = this;
  do {
    if (((TArray<FPaperFlipbookKeyFrame,TSizedDefaultAllocator<32>_> *)(local_9c._4_8_ + 0x30))->
        ArrayNum != (int)uVar9) {
      local_b8 = 0;
      `TCheckedPointerIterator<FPaperFlipbookKeyFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_b8);
      iVar6 = local_b0.ArrayMax;
    }
    if (pFVar12 == pFVar13) {
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    if (*(longlong *)pFVar12 != 0) {
      local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
      if ((iVar6 < 0) && (iVar6 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
      }
      UPaperSprite::QuerySupportedSockets(*(UPaperSprite **)pFVar12,&local_b0);
      iVar6 = local_b0.ArrayNum;
      uVar9 = (ulonglong)local_b0.ArrayNum;
      pFVar1 = local_b0.AllocatorInstance.Data + uVar9 * 0xc;
      FVar11.Data = local_b0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar6) {
          local_b7[0] = 0;
          `TCheckedPointerIterator<FComponentSocketDescription,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_b7);
        }
        if (FVar11.Data == pFVar1) break;
        lVar2 = *(longlong *)FVar11.Data;
        uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
          FVar10 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_88.Hash.SecondaryData;
          }
          for (iVar8 = *(int *)((longlong)FVar10 +
                               (ulonglong)
                               (local_88.HashSize - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar7) *
                               4); iVar8 != -1;
              iVar8 = *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
            if (*(longlong *)(local_88.Elements._0_8_ + (longlong)iVar8 * 0x10) == lVar2)
            goto LAB_14ad06287;
          }
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&local_88,(FName *)local_9c,(bool *)FVar11.Data);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= FVar11.Data) && (FVar11.Data < pFVar3 + (longlong)param_1->ArrayMax * 0xc))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        pFVar3 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0xc) = *(undefined8 *)FVar11.Data;
        *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = *(undefined4 *)(FVar11.Data + 8);
LAB_14ad06287:
        uVar9 = local_b0._8_8_ & 0xffffffff;
        FVar11.Data = FVar11.Data + 0xc;
      }
      iVar6 = local_b0.ArrayMax;
    }
    pFVar12 = pFVar12 + 0x10;
    uVar9 = (ulonglong)local_a0;
  } while( true );
}

// Serialize @ 14ad098e0

void __thiscall UPaperFlipbook::Serialize(UPaperFlipbook *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ad09900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  return;
}

// Serialize @ 14ad09910

void __thiscall UPaperFlipbook::Serialize(UPaperFlipbook *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  return;
}

// StaticRegisterNativesUPaperFlipbook @ 14ad0df50

void __cdecl UPaperFlipbook::StaticRegisterNativesUPaperFlipbook(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UPaperFlipbook_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetKeyFrameIndexAtTime @ 14ad10e30

void __cdecl
UPaperFlipbook::execGetKeyFrameIndexAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = GetKeyFrameIndexAtTime((UPaperFlipbook *)param_1,local_res18[0],local_res10[0] != 0);
  *(int *)param_3 = iVar2;
  return;
}

// execGetNumFrames @ 14ad111a0

void __cdecl UPaperFlipbook::execGetNumFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetNumFrames((UPaperFlipbook *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetNumKeyFrames @ 14ad111e0

void __cdecl UPaperFlipbook::execGetNumKeyFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x10;
  return;
}

// execGetSpriteAtFrame @ 14ad11330

void __cdecl UPaperFlipbook::execGetSpriteAtFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPaperSprite *pUVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetSpriteAtFrame((UPaperFlipbook *)param_1,local_res10[0]);
  *(UPaperSprite **)param_3 = pUVar2;
  return;
}

// execGetSpriteAtTime @ 14ad113d0

void __cdecl UPaperFlipbook::execGetSpriteAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = GetKeyFrameIndexAtTime((UPaperFlipbook *)param_1,local_res10[0],local_res8[0] != 0);
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)&param_1[1].field_0x10)) {
    uVar6 = 0;
    if ((int)uVar5 < *(int *)&param_1[1].field_0x10) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar2 = *(UObject **)(*(longlong *)&param_1[1].field_0x8 + (longlong)(int)uVar5 * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(UObject **)param_3 = pUVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetTotalDuration @ 14ad11f40

void __cdecl UPaperFlipbook::execGetTotalDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)(param_1 + 1);
  if (fVar1 != 0.0) {
    iVar2 = GetNumFrames((UPaperFlipbook *)param_1);
    *(float *)param_3 = (float)iVar2 / fVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execIsValidKeyFrameIndex @ 14ad12040

void __cdecl
UPaperFlipbook::execIsValidKeyFrameIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8[0] < 0) || (*(int *)&param_1[1].field_0x10 <= local_res8[0])) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(undefined1 *)param_3 = 1;
  }
  return;
}

