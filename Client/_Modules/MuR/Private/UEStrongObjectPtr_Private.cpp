// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// FInternalReferenceCollectorReferencerNameProvider>_> @ 14aa007f0

void __cdecl
UE::Mutable::Private::
operator>><bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE
::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::
FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE
::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>
          (FInputArchive *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  byte local_res18 [16];
  
  Private::operator>>(param_1,local_res18);
  if (9 < local_res18[0]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < sizeof...(Ts)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                       ,0x8b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (9 < (ulonglong)local_res18[0]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Loaders)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                       ,0x80,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Mutable::Private::TVariantLoadFromInputArchiveLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Load(unsigned___int64,UE::Mutable::Private::FInputArchive&___ptr64,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>&___ptr64)'
              ::__l2::Loaders)[local_res18[0]])(param_1,param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_> @ 14aa04270

void __cdecl
UE::Mutable::Private::operator<<<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::
Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>
          (FOutputArchive *param_1,
          TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *param_2)

{
  uchar local_res8 [8];
  <lambda_1> local_res10;
  
  local_res8[0] = param_2->TypeIndex;
  Private::operator<<(param_1,local_res8);
  local_res10.Ar = param_1;
  (*switchD_14aa91dff::switchdataD_152295830[param_2->TypeIndex])(&local_res10,param_2);
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_> @ 14ab56a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Mutable::Private::operator>><TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE
::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_>
          (FInputArchive *param_1,
          TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>
  *pTVar8;
  uint uVar9;
  undefined1 auStackY_c8 [32];
  byte local_98 [4];
  uint local_94;
  int local_90;
  uint local_8c;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  FSparseArrayAllocationInfo local_78;
  undefined1 local_68 [16];
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_8c,4);
  uVar9 = 0;
  if (local_8c != 0) {
    do {
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      local_68[0] = 0;
      local_58 = 0;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_94,4);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_88,local_94,Default);
      if (local_94 != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,local_88.AllocatorInstance.Data,(ulonglong)local_94 << 2);
      }
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_98,1);
      if ((9 < local_98[0]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < sizeof...(Ts)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x8b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = (ulonglong)local_98[0];
      if ((9 < uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Loaders)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SerialisationPrivate.h"
                             ,0x80,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Mutable::Private::TVariantLoadFromInputArchiveLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Load(unsigned___int64,UE::Mutable::Private::FInputArchive&___ptr64,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>&___ptr64)'
                  ::__l2::Loaders)[uVar7])(param_1,local_68);
      if (*(int *)&param_2->field_0x34 == 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,0x10,1,(ForAnyElementType *)param_2,(int *)&param_2->field_0x8,
                           (int *)&param_2->field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
      }
      else {
        iVar5 = *(int *)&param_2->field_0x30;
        iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + *(longlong *)param_2);
        iVar1 = *(int *)&param_2->field_0x34 + -1;
        *(int *)&param_2->field_0x30 = iVar2;
        *(int *)&param_2->field_0x34 = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)((longlong)iVar2 * 0x40 + *(longlong *)param_2) = 0xffffffff;
        }
      }
      TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)param_2,&local_78,iVar5);
      pTVar8 = local_78.Pointer;
      if (local_78.Pointer ==
          (TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>
           *)0x0) {
        pTVar8 = (TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>
                  *)0x0;
      }
      else {
        *(undefined8 *)local_78.Pointer = 0;
        *(FScriptContainerElement **)local_78.Pointer = local_88.AllocatorInstance.Data;
        local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)((longlong)local_78.Pointer + 8) = local_88.ArrayNum;
        *(int *)((longlong)local_78.Pointer + 0xc) = local_88.ArrayMax;
        uVar7 = (ulonglong)local_58;
        local_88.ArrayNum = 0;
        local_88.ArrayMax = 0;
        *(byte *)((longlong)local_78.Pointer + 0x20) = local_58;
        if ((9 < local_58) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar7] ==
            Core::Private::TMoveConstructorCaller<bool>::Construct) {
          *(undefined1 *)((longlong)pTVar8 + 0x10) = local_68[0];
          *(undefined4 *)((longlong)pTVar8 + 0x30) = 0xffffffff;
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar7])
                    ((undefined1 *)((longlong)pTVar8 + 0x10),local_68);
          *(undefined4 *)((longlong)pTVar8 + 0x30) = 0xffffffff;
        }
      }
      local_90 = local_78.Index;
      uVar6 = GetTypeHash<int>((TArray<int,TSizedDefaultAllocator<32>_> *)pTVar8);
      bVar4 = TSet<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>,FDefaultSetAllocator>
              ::TryReplaceExisting
                        ((TSet<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>,FDefaultSetAllocator>
                          *)param_2,uVar6,pTVar8,&local_90,(bool *)0x0);
      if (!bVar4) {
        TSet<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>,FDefaultSetAllocator>
        ::RehashOrLink((TSet<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>,FDefaultSetAllocator>
                        *)param_2,uVar6,pTVar8,local_90);
      }
      uVar7 = (ulonglong)local_58;
      if ((9 < uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar7] != Core::Private::TDestructorCaller<bool>::Destruct) {
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar7])(local_68);
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_8c);
  }
  return;
}

// FInternalReferenceCollectorReferencerNameProvider>_>_> @ 14ab57db0

void __cdecl
UE::Mutable::Private::operator<<<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE
::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::
FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private
::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::
TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::
TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::
FInternalReferenceCollectorReferencerNameProvider>_>_>
          (FOutputArchive *param_1,
          TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
          *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20 [2];
  <lambda_1> local_b0;
  TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res20[0] = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res20);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar2 = &param_2->field_0x10;
  iStack_a0 = 0;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14ab57e6d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_8c = local_88 + -1 + (int)lVar8;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14ab57e6d:
  uVar11 = *(uint *)&param_2->field_0x28;
  uVar14 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_2;
  local_98 = puVar2;
  iStack_84 = iStack_8c;
  local_78 = param_2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar14 = uVar14 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14ab57f80;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14ab57f80:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == param_2))
    break;
    puVar10 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_70.CurrentBitIndex * 0x40);
    local_res18[0] = *(uint *)(puVar10 + 1);
    (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
    if (local_res18[0] != 0) {
      (**(code **)((longlong)*param_1->Stream + 8))
                (param_1->Stream,*puVar10,(ulonglong)local_res18[0] << 2);
    }
    local_res8[0] = *(undefined1 *)(puVar10 + 4);
    (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,1);
    local_b0.Ar = param_1;
    (*switchD_14aa91dff::switchdataD_152295830[*(byte *)(puVar10 + 4)])
              (&local_b0,
               (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                *)(puVar10 + 2));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

