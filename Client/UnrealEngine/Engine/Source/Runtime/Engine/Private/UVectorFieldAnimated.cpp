// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147336100

UClass * __cdecl UVectorFieldAnimated::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldAnimated",
               &Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton,
               StaticRegisterNativesUVectorFieldAnimated,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVectorFieldAnimated>,
               InternalVTableHelperCtorCaller<UVectorFieldAnimated>,local_res8,
               UVectorField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton;
}

// UVectorFieldAnimated @ 147340da0

UVectorFieldAnimated * __thiscall
UVectorFieldAnimated::UVectorFieldAnimated(UVectorFieldAnimated *this,FVTableHelper *param_1)

{
  UVectorField::UVectorField((UVectorField *)this,param_1);
  this->_padding_ = (longlong)&___7UVectorFieldAnimated__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->NoiseField).field0_0x0.DebugPtr = (UVectorFieldStatic *)0x0;
  return this;
}

// ~UVectorFieldAnimated @ 1473422e0

void __thiscall UVectorFieldAnimated::~UVectorFieldAnimated(UVectorFieldAnimated *this)

{
  this->_padding_ = (longlong)&___7UVectorFieldAnimated__6B_;
  UVectorField::~UVectorField((UVectorField *)this);
  return;
}

// GetPrivateStaticClass @ 1473501a0

UClass * __cdecl UVectorFieldAnimated::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldAnimated",
               &Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton,
               StaticRegisterNativesUVectorFieldAnimated,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVectorFieldAnimated>,
               InternalVTableHelperCtorCaller<UVectorFieldAnimated>,local_res8,
               UVectorField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldAnimated.InnerSingleton;
}

// StaticRegisterNativesUVectorFieldAnimated @ 147358930

void __cdecl UVectorFieldAnimated::StaticRegisterNativesUVectorFieldAnimated(void)

{
  return;
}

// UVectorFieldAnimated @ 14890bd50

UVectorFieldAnimated * __thiscall
UVectorFieldAnimated::UVectorFieldAnimated(UVectorFieldAnimated *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UVectorFieldAnimated__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->NoiseField).field0_0x0.DebugPtr = (UVectorFieldStatic *)0x0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->VolumeSizeX = 0x10;
  this->VolumeSizeY = 0x10;
  this->VolumeSizeZ = 0x10;
  this->_padding_ = -0x4020000000000000;
  this->_padding_ = -0x4020000000000000;
  this->_padding_ = -0x4020000000000000;
  this->_padding_ = 0x3fe0000000000000;
  this->_padding_ = 0x3fe0000000000000;
  this->_padding_ = 0x3fe0000000000000;
  return this;
}

// InitInstance @ 1489623b0

void __thiscall
UVectorFieldAnimated::InitInstance
          (UVectorFieldAnimated *this,FVectorFieldInstance *param_1,bool param_2)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FVectorFieldResource *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  FVectorFieldResource *this_00;
  wchar_t *pwVar14;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar14 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar14,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    this_00 = ::operator_new(0x90);
    if (this_00 != (FVectorFieldResource *)0x0) {
      FRenderResource::FRenderResource((FRenderResource *)this_00);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ = (longlong)&___7FVectorFieldResource__6B_;
      this_00->_padding_ = (longlong)&___7FVectorFieldAnimatedResource__6B_;
      (this_00->VolumeTextureRHI).Reference = (FRHITexture *)0x0;
      (this_00->LocalBounds).IsValid = '\0';
      ((FThreadSafeCounter *)(&this_00->LocalBounds + 1))->Counter = 0;
      *(undefined8 *)((FThreadSafeCounter *)(&this_00->LocalBounds + 1) + 2) = 0;
      *(undefined4 *)&this_00[1]._padding_ = 0;
      this_00->SizeX = this->VolumeSizeX;
      this_00->SizeY = this->VolumeSizeY;
      this_00->SizeZ = this->VolumeSizeZ;
      this_00->Intensity = *(float *)&this->_padding_;
      dVar5 = (double)this->_padding_;
      (this_00->LocalBounds).Min.field0_0x0._s_0.X = (double)this->_padding_;
      (this_00->LocalBounds).Min.field0_0x0._s_0.Y = dVar5;
      dVar5 = (double)this->_padding_;
      (this_00->LocalBounds).Min.field0_0x0._s_0.Z = (double)this->_padding_;
      (this_00->LocalBounds).Max.field0_0x0._s_0.X = dVar5;
      dVar5 = (double)this->_padding_;
      (this_00->LocalBounds).Max.field0_0x0._s_0.Y = (double)this->_padding_;
      (this_00->LocalBounds).Max.field0_0x0._s_0.Z = dVar5;
      uVar6 = *(undefined1 *)((longlong)&this->_padding_ + 1);
      uVar7 = *(undefined1 *)((longlong)&this->_padding_ + 2);
      uVar8 = *(undefined1 *)((longlong)&this->_padding_ + 3);
      uVar9 = *(undefined1 *)((longlong)&this->_padding_ + 4);
      uVar10 = *(undefined1 *)((longlong)&this->_padding_ + 5);
      uVar11 = *(undefined1 *)((longlong)&this->_padding_ + 6);
      uVar12 = *(undefined1 *)((longlong)&this->_padding_ + 7);
      (this_00->LocalBounds).IsValid = *(undefined1 *)&this->_padding_;
      (this_00->LocalBounds).Pad[0] = uVar6;
      (this_00->LocalBounds).Pad[1] = uVar7;
      (this_00->LocalBounds).Pad[2] = uVar8;
      (this_00->LocalBounds).Pad[3] = uVar9;
      (this_00->LocalBounds).Pad[4] = uVar10;
      (this_00->LocalBounds).Pad[5] = uVar11;
      (this_00->LocalBounds).Pad[6] = uVar12;
    }
    if (!param_2) {
      BeginInitResource((FRenderResource *)this_00,(FRenderCommandPipe *)0x0);
    }
    if (((param_1->Resource).Reference != (FVectorFieldResource *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                            ,0x59,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_1->Resource).Reference;
    if (pFVar3 != this_00) {
      (param_1->Resource).Reference = this_00;
      if (this_00 != (FVectorFieldResource *)0x0) {
        LOCK();
        ((FThreadSafeCounter *)(&this_00->LocalBounds + 1))->Counter =
             ((FThreadSafeCounter *)(&this_00->LocalBounds + 1))->Counter + 1;
        UNLOCK();
      }
      if (pFVar3 != (FVectorFieldResource *)0x0) {
        LOCK();
        pFVar1 = (FThreadSafeCounter *)(&pFVar3->LocalBounds + 1);
        iVar2 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    param_1->bInstancedResource = true;
  }
  return;
}

