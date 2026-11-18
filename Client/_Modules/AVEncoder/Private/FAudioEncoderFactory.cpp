// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 5

// ~FAudioEncoderFactory @ 148d011d0

void __thiscall AVEncoder::FAudioEncoderFactory::~FAudioEncoderFactory(FAudioEncoderFactory *this)

{
  *this = (FAudioEncoderFactory)&___7FAudioEncoderFactory_AVEncoder__6B_;
  return;
}

// FindFactory @ 148d0a770

FAudioEncoderFactory * __cdecl AVEncoder::FAudioEncoderFactory::FindFactory(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  FString *local_38;
  int local_30;
  
  DoDefaultRegistration();
  iVar7 = Factories.ArrayNum;
  pFVar1 = Factories.AllocatorInstance.Data + (longlong)iVar7 * 8;
  FVar9 = Factories.AllocatorInstance;
  do {
    if (Factories.ArrayNum != iVar7) {
      `TCheckedPointerIterator<AVEncoder::FAudioEncoderFactory_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar9.Data == pFVar1) {
      return (FAudioEncoderFactory *)0x0;
    }
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)FVar9.Data + 0x10))(*(longlong **)FVar9.Data,&local_38);
    puVar3 = (undefined8 *)*plVar6;
    lVar4 = plVar6[1];
    for (puVar8 = puVar3; puVar8 != puVar3 + (longlong)(int)lVar4 * 2; puVar8 = puVar8 + 2) {
      iVar5 = *(int *)(puVar8 + 1);
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar5 == iVar2) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar8,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar10 = iVar5 == 0;
          goto LAB_148d0a805;
        }
LAB_148d0a84c:
        iVar5 = (int)((longlong)puVar8 - (longlong)puVar3 >> 4);
        goto LAB_148d0a81a;
      }
      bVar10 = iVar5 + iVar2 == 1;
LAB_148d0a805:
      if (bVar10) goto LAB_148d0a84c;
    }
    iVar5 = -1;
LAB_148d0a81a:
    DestructItems<FString,int>(local_38,local_30);
    if (local_38 != (FString *)0x0) {
      FMemory::Free(local_38);
    }
    if (iVar5 != -1) {
      return *(FAudioEncoderFactory **)FVar9.Data;
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// GetAllFactories @ 148d0ad10

TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_> * __cdecl
AVEncoder::FAudioEncoderFactory::GetAllFactories
          (TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  int iVar1;
  longlong lVar2;
  
  if (!GDefaultFactoriesRegistered) {
    RegisterDefaultFactories();
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = Factories.ArrayNum;
  _Src = Factories.AllocatorInstance;
  lVar2 = (longlong)Factories.ArrayNum;
  __return_storage_ptr__->ArrayNum = Factories.ArrayNum;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar2 << 3);
  return __return_storage_ptr__;
}

// RegisterFactory @ 148d114f0

void __cdecl AVEncoder::FAudioEncoderFactory::RegisterFactory(FAudioEncoderFactory *param_1)

{
  FAudioEncoderFactory *local_res8 [4];
  
  if (!GDefaultFactoriesRegistered) {
    RegisterDefaultFactories();
  }
  local_res8[0] = param_1;
  TArray<AVEncoder::FAudioEncoderFactory_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<AVEncoder::FAudioEncoderFactory_*>(&Factories,local_res8);
  return;
}

// UnregisterFactory @ 148d153d0

void __cdecl AVEncoder::FAudioEncoderFactory::UnregisterFactory(FAudioEncoderFactory *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  longlong lVar4;
  FAudioEncoderFactory *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FAudioEncoderFactory *local_28 [2];
  
  local_28[0] = param_1;
  if (((Factories.AllocatorInstance.Data <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 <
       Factories.AllocatorInstance.Data + (longlong)Factories.ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2.Data = Factories.AllocatorInstance.Data;
  lVar4 = (longlong)Factories.ArrayNum;
  iVar9 = Factories.ArrayNum;
  if (Factories.ArrayNum != 0) {
    iVar9 = 0;
    bVar3 = *(FAudioEncoderFactory **)Factories.AllocatorInstance.Data != local_28[0];
    lVar6 = 0;
    pFVar5 = local_28[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (lVar4 <= lVar6) break;
      } while (bVar3 == (*(FAudioEncoderFactory **)(FVar2.Data + lVar6 * 8) != pFVar5));
      if (bVar3 != false) {
        if (iVar9 != iVar7) {
          memmove(FVar2.Data + (longlong)iVar9 * 8,FVar2.Data + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pFVar5 = local_28[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < lVar4);
  }
  Factories.ArrayNum = iVar9;
  return;
}

