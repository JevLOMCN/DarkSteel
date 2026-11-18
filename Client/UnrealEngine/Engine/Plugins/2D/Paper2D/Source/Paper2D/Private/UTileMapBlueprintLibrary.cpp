// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 14

// StaticClass @ 14acde490

UClass * __cdecl UTileMapBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"TileMapBlueprintLibrary",
               &Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTileMapBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTileMapBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTileMapBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton;
}

// UTileMapBlueprintLibrary @ 14aceb560

UTileMapBlueprintLibrary * __thiscall
UTileMapBlueprintLibrary::UTileMapBlueprintLibrary
          (UTileMapBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTileMapBlueprintLibrary__6B_;
  return this;
}

// UTileMapBlueprintLibrary @ 14aceb590

UTileMapBlueprintLibrary * __thiscall
UTileMapBlueprintLibrary::UTileMapBlueprintLibrary
          (UTileMapBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTileMapBlueprintLibrary__6B_;
  return this;
}

// ~UTileMapBlueprintLibrary @ 14acec000

void __thiscall UTileMapBlueprintLibrary::~UTileMapBlueprintLibrary(UTileMapBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UTileMapBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BreakTile @ 14acef590

void __cdecl
UTileMapBlueprintLibrary::BreakTile
          (FPaperTileInfo *param_1,int *param_2,UPaperTileSet **param_3,bool *param_4,bool *param_5,
          bool *param_6)

{
  *param_2 = param_1->PackedTileIndex & 0x1fffffff;
  *param_3 = (UPaperTileSet *)(param_1->TileSet).field0_0x0;
  *param_4 = SUB41((uint)param_1->PackedTileIndex >> 0x1f,0);
  *param_5 = (bool)((byte)((uint)param_1->PackedTileIndex >> 0x1e) & 1);
  *param_6 = (bool)((byte)((uint)param_1->PackedTileIndex >> 0x1d) & 1);
  return;
}

// GetPrivateStaticClass @ 14acfda20

UClass * __cdecl UTileMapBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"TileMapBlueprintLibrary",
               &Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTileMapBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTileMapBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTileMapBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTileMapBlueprintLibrary.InnerSingleton;
}

// GetTileTransform @ 14ad01640

TTransform<double> * __cdecl
UTileMapBlueprintLibrary::GetTileTransform
          (TTransform<double> *__return_storage_ptr__,FPaperTileInfo *param_1)

{
  UPaperTileLayer::GetTileTransform(__return_storage_ptr__,(uint)param_1->PackedTileIndex >> 0x1d);
  return __return_storage_ptr__;
}

// GetTileUserData @ 14ad017f0

FName __cdecl UTileMapBlueprintLibrary::GetTileUserData(FPaperTileInfo *param_1)

{
  FPaperTileMetadata *pFVar1;
  undefined8 *in_RDX;
  
  if ((UPaperTileSet *)*in_RDX != (UPaperTileSet *)0x0) {
    pFVar1 = UPaperTileSet::GetTileMetadata
                       ((UPaperTileSet *)*in_RDX,*(uint *)(in_RDX + 1) & 0x1fffffff);
    if (pFVar1 != (FPaperTileMetadata *)0x0) {
      (param_1->TileSet).field0_0x0 = *(TObjectPtr<UPaperTileSet>_u_0 *)&pFVar1->UserDataName;
      return (FName)param_1;
    }
  }
  (param_1->TileSet).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
  return (FName)param_1;
}

// MakeTile @ 14ad036f0

FPaperTileInfo * __cdecl
UTileMapBlueprintLibrary::MakeTile
          (FPaperTileInfo *__return_storage_ptr__,int param_1,UPaperTileSet *param_2,bool param_3,
          bool param_4,bool param_5)

{
  uint uVar1;
  
  (__return_storage_ptr__->TileSet).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
  __return_storage_ptr__->PackedTileIndex = -1;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UPaperTileSet *)0x0)) {
    (__return_storage_ptr__->TileSet).field0_0x0.DebugPtr = param_2;
    __return_storage_ptr__->PackedTileIndex = param_1;
    if (param_2 == (UPaperTileSet *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_2);
    (__return_storage_ptr__->TileSet).field0_0x0.DebugPtr = param_2;
    __return_storage_ptr__->PackedTileIndex = param_1;
  }
  if (param_1 != -1) {
    if (param_3) {
      param_1 = param_1 | 0x80000000;
    }
    else {
      param_1 = param_1 & 0x7fffffff;
    }
    __return_storage_ptr__->PackedTileIndex = param_1;
  }
  if (param_2 != (UPaperTileSet *)0x0) {
    if (param_1 == 0xffffffff) {
      uVar1 = 0xffffffff;
      if (param_2 == (UPaperTileSet *)0x0) {
        return __return_storage_ptr__;
      }
    }
    else if (param_4) {
      uVar1 = param_1 | 0x40000000;
      __return_storage_ptr__->PackedTileIndex = uVar1;
    }
    else {
      uVar1 = param_1 & 0xbfffffff;
      __return_storage_ptr__->PackedTileIndex = uVar1;
    }
    if (uVar1 != 0xffffffff) {
      if (param_5) {
        __return_storage_ptr__->PackedTileIndex = uVar1 | 0x20000000;
      }
      else {
        __return_storage_ptr__->PackedTileIndex = uVar1 & 0xdfffffff;
      }
    }
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUTileMapBlueprintLibrary @ 14ad0e190

void __cdecl UTileMapBlueprintLibrary::StaticRegisterNativesUTileMapBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBreakTile @ 14ad104f0

void __cdecl UTileMapBlueprintLibrary::execBreakTile(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  byte bVar4;
  UObject *pUVar5;
  uint uVar6;
  uchar *puVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte local_res10 [16];
  byte local_res20 [8];
  byte local_58 [4];
  uint local_54;
  uchar local_50 [8];
  UObject *local_48;
  uint local_40;
  
  local_40 = 0xffffffff;
  local_48 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_54 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  puVar1 = (uint *)param_2->MostRecentPropertyAddress;
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\0';
  local_50[5] = '\0';
  local_50[6] = '\0';
  local_50[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = &local_54;
  if (puVar1 != (uint *)0x0) {
    puVar9 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_50;
  if (puVar2 != (uchar *)0x0) {
    puVar7 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar11 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar8 = local_res10;
  if (pbVar11 != (byte *)0x0) {
    pbVar8 = pbVar11;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar11 = param_2->MostRecentPropertyAddress;
  local_58[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar10 = local_res20;
  if (pbVar11 != (byte *)0x0) {
    pbVar10 = pbVar11;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pUVar5 = local_48;
  pbVar11 = local_58;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  uVar6 = local_40;
  *puVar9 = local_40 & 0x1fffffff;
  *(UObject **)puVar7 = pUVar5;
  bVar4 = (byte)(uVar6 >> 0x18);
  *pbVar8 = bVar4 >> 7;
  *pbVar10 = bVar4 >> 6 & 1;
  *pbVar11 = bVar4 >> 5 & 1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar7);
  }
  return;
}

// execGetTileTransform @ 14ad11d00

void __cdecl
UTileMapBlueprintLibrary::execGetTileTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_78;
  uint local_70;
  TTransform<double> local_68;
  
  local_70 = 0xffffffff;
  local_78 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  UPaperTileLayer::GetTileTransform(&local_68,local_70 >> 0x1d);
  *(double *)param_3 = local_68.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_68.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_68.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_68.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_68.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_68.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_68.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_68.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_68.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_68.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_68.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_68.Scale3D.ZW.m128d_f64[1];
  return;
}

// execGetTileUserData @ 14ad11df0

void __cdecl
UTileMapBlueprintLibrary::execGetTileUserData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  UObject *local_18;
  uint local_10;
  
  local_10 = 0xffffffff;
  local_18 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pUVar3 = local_18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_18 == (UObject *)0x0) goto LAB_14ad11f27;
  }
  else {
    if (local_18 == (UObject *)0x0) {
LAB_14ad11f27:
      *(undefined8 *)param_3 = 0;
      return;
    }
    UE::GC::MarkAsReachable(local_18);
  }
  uVar6 = local_10 & 0x1fffffff;
  if ((int)uVar6 < *(int *)&pUVar3[3].field_0x8) {
    if (*(int *)&pUVar3[3].field_0x8 <= (int)uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar5 = (undefined8 *)((ulonglong)uVar6 * 0x40 + *(longlong *)(pUVar3 + 3));
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)param_3 = *puVar5;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execMakeTile @ 14ad12460

void __cdecl UTileMapBlueprintLibrary::execMakeTile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  uint local_48 [2];
  UObject *local_40;
  
  local_48[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_40 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] == 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar6 = local_res18[0] == 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar3 = local_40;
  uVar4 = local_48[0];
  bVar7 = local_res20[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_40 == (UObject *)0x0)) {
    if (local_40 != (UObject *)0x0) goto LAB_14ad12602;
LAB_14ad1261a:
    if (pUVar3 == (UObject *)0x0) goto LAB_14ad12650;
  }
  else {
    UE::GC::MarkAsReachable(local_40);
LAB_14ad12602:
    if (uVar4 == 0xffffffff) goto LAB_14ad1261a;
    if (bVar5) {
      uVar4 = uVar4 & 0x7fffffff;
    }
    else {
      uVar4 = uVar4 | 0x80000000;
    }
  }
  if (uVar4 == 0xffffffff) {
    uVar4 = 0xffffffff;
    if (pUVar3 == (UObject *)0x0) goto LAB_14ad12650;
  }
  else if (bVar6) {
    uVar4 = uVar4 & 0xbfffffff;
  }
  else {
    uVar4 = uVar4 | 0x40000000;
  }
  if (uVar4 != 0xffffffff) {
    if (bVar7) {
      uVar4 = uVar4 & 0xdfffffff;
    }
    else {
      uVar4 = uVar4 | 0x20000000;
    }
  }
LAB_14ad12650:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)param_3 = pUVar3;
  *(uint *)((longlong)param_3 + 8) = uVar4;
  return;
}

