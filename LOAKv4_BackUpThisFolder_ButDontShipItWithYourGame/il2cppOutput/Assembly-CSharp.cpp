#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<Loak.Unity.LeaderboardListItem>
struct Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>
struct ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Meshing.MeshObjectsClearedArgs>
struct ArdkEventHandler_1_t17A3116E533559C3D77887BABABECEE1DB2866AF;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Meshing.MeshObjectsUpdatedArgs>
struct ArdkEventHandler_1_tE3E50351EF87E711096B705219BE93A7D997E074;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>
struct ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>
struct ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>
struct ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>
struct ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7;
// System.Comparison`1<Loak.Unity.LeaderboardModel>
struct Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>
struct Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Object>
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
// System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>
struct Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t14F299CF6D5D447FDD3C6B9AB97583E1F37A40E4;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A;
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1;
// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext>
struct Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.IO.Stream>
struct HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,UnityEngine.GameObject>
struct KeyCollection_t48102B1606F67EFBEDD560E285A24B38044F569D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,Loak.Unity.LoakRoomManagement/Player>
struct KeyCollection_tAB2709845F89ABD810324CA873047ED8FEF91D9A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct KeyCollection_t157A746EBAA898D93471CBB4D6A4029336B6F540;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.DateTime>
struct KeyCollection_tD76881B666DF7467AACE0E475784F30EED5DC770;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>
struct List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>
struct List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Guid>
struct List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15;
// System.Collections.Generic.List`1<Niantic.ARDK.AR.Anchors.IARPlaneAnchor>
struct List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem>
struct List_1_tC2636C0705B471731FBAD53759369EBE554ED803;
// System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>
struct List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<Loak.Unity.LeaderboardModel>
struct Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct TaskFactory_1_t49820C8D72BE148BBE4A62330A8BA133AE93529F;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2;
// UnityEngine.Events.UnityEvent`1<Niantic.ARDK.Networking.IPeer>
struct UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`3<System.UInt32,System.Guid,System.Object[]>
struct UnityEvent_3_t1F9672EBEE1A8766C2B174829626913EB758A5DD;
// UnityEngine.Events.UnityEvent`3<System.UInt32,System.Guid,System.Object>
struct UnityEvent_3_t9D1FC2801E786123CD00085F8B4B8455EBA2B580;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,UnityEngine.GameObject>
struct ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.Object>
struct ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Loak.Unity.LoakRoomManagement/Player>
struct ValueCollection_tAAB5D74F186017545090B39F1BF70DF2049AEE5C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct ValueCollection_t511CC81D57B44A21F8871F3AAC664940B16F9415;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_tC161D1546B01DB1896E03E07713685569419D7C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,UnityEngine.GameObject>[]
struct EntryU5BU5D_tD40D2249B9F67FA1B302BF053E22D50E8F9BB9ED;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,Loak.Unity.LoakRoomManagement/Player>[]
struct EntryU5BU5D_tA4D02A9EC13440E4D2B29EBE8F8EB69EB727C376;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>[]
struct EntryU5BU5D_tEA664935E183D4732B25CE39D4FDD5988943054B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.DateTime>[]
struct EntryU5BU5D_tD9B87E489119A249F1794A0289FEF378A985A9B6;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.ValueTuple`2<System.Object,System.Int64>[]
struct ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581;
// System.ValueTuple`2<System.String,System.Int64>[]
struct ValueTuple_2U5BU5D_t9474A9871E34F10BD526359F84581C6DD4224827;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Guid[]
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// Niantic.ARDK.AR.Anchors.IARPlaneAnchor[]
struct IARPlaneAnchorU5BU5D_tDBD4B3D72113DFFC6BB239CDFC07172FBC8BB766;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Loak.Unity.LeaderboardListItem[]
struct LeaderboardListItemU5BU5D_t33421E7688E9610D2133A15D8B5A942F7DAF698A;
// Loak.Unity.LeaderboardModel[]
struct LeaderboardModelU5BU5D_tE1F42517AFEDA79E7982AE1439E75440A6BB8FDC;
// Loak.Unity.LeaderboardScore[]
struct LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TMP_Text[]
struct TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Niantic.ARDK.Extensions.Meshing.ARMeshManager
struct ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A;
// Niantic.ARDK.Extensions.ARPlaneManager
struct ARPlaneManager_t4960B2216E340DF44530466B213C11460445E9D9;
// Niantic.ARDK.AR.Configuration.ARSessionChangesCollector
struct ARSessionChangesCollector_t249430ABE12D571F1A9CB9EE78E1CF979AE6F8C1;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BackButton
struct BackButton_tDD46B24681B87D968EA33D516F8A7568B81CC833;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1;
// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// Buttons
struct Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F;
// CompassManager
struct CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// FloorPlaneFinder
struct FloorPlaneFinder_t7F00FAA3B9825F13BBAFF2B69616EEC6A90FC7EA;
// GameLogic
struct GameLogic_tECBEC8501055C6739738F91B8986E2589806C9E1;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HitTextBehaviour
struct HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC;
// Niantic.ARDK.AR.Networking.IARNetworking
struct IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D;
// Niantic.ARDK.AR.IARSession
struct IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8;
// Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration
struct IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Niantic.ARDK.Networking.IMultipeerNetworking
struct IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F;
// Niantic.ARDK.Networking.IPeer
struct IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// Loak.Unity.Leaderboard
struct Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644;
// Loak.Unity.LeaderboardListItem
struct LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94;
// Loak.Unity.LeaderboardModel
struct LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9;
// Loak.Unity.LeaderboardScore
struct LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41;
// Loak.Unity.LoakLeaderboard
struct LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC;
// Loak.Unity.LoakRoomManagement
struct LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B;
// Loak.Unity.LoakScanner
struct LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676;
// Loak.Unity.LoakSessionManager
struct LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2;
// LoakTapPlace
struct LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Niantic.ARDK.Extensions.Meshing.MeshObjectsGenerator
struct MeshObjectsGenerator_t25BACF774834E056200C07956F2DB16DDA66BD34;
// MeshTagger
struct MeshTagger_t121159DC561D8038DB1F007D2E157A47D7A0CC52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NextButton
struct NextButton_t2C45B35301B0C4805E1C10DFAAF0C3F458ADB720;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ReplayButton
struct ReplayButton_t96D503EAA80022688814C658167E3B86F9C2E41D;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreAccesor
struct ScoreAccesor_t09AFDF4EAA911822900F6E06764A7D5526928C4D;
// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39;
// ScoreSingleton
struct ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF;
// ScoreTextBehaviour
struct ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Loak.Examples.SharedARExample
struct SharedARExample_t2E097EC8DAD3F0EF86AE46A15C7747BD6988B1CF;
// SpearController
struct SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288;
// SpearManager
struct SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Loak.Unity.Tab
struct Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// TextMoveAndFade
struct TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// VehicleManager
struct VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Niantic.ARDK.Utilities._ThreadCheckedObject
struct _ThreadCheckedObject_tB062B0CBB623B72F74B98674276DCEEE598566A6;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext
struct _TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext
struct _TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// HitTextBehaviour/<FadeOutCoroutine>d__4
struct U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324;
// Loak.Unity.Leaderboard/<>c
struct U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810;
// Loak.Unity.Leaderboard/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F;
// Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5
struct U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB;
// Loak.Unity.LoakLeaderboard/<>c
struct U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA;
// Loak.Unity.LoakRoomManagement/Player
struct Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474;
// Loak.Unity.LoakScanner/<EndScan>d__18
struct U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// Loak.Unity.Tab/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// TextMoveAndFade/<MoveAndFade>d__6
struct U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5;

IL2CPP_EXTERN_C RuntimeClass* ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARConfiguration_t63AD4587231BC6249D6ED8AB8BC140DCA79F6ABE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC2636C0705B471731FBAD53759369EBE554ED803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____19DC465D7F6D4CB213BB555C91585CA9BCE5919DE6CF433321767153FE8265E6_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06CFD62DDFC0DC7E1C2B03C41E31003CCD32ABB3;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2B6B10EE5CD5FE943937FE1570F2ED3FD6718B;
IL2CPP_EXTERN_C String_t* _stringLiteral0D7A526F566683A2C99AD67349808457812AF62D;
IL2CPP_EXTERN_C String_t* _stringLiteral161FBCF2832F6B9B09EFBDE41ED1DEA4E44FD8A0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B2C5496A46B099F4A0A24ECEA0AB96752299264;
IL2CPP_EXTERN_C String_t* _stringLiteral22AC41F53B6E883C2F75959D31F4C423AA24DCFE;
IL2CPP_EXTERN_C String_t* _stringLiteral2B5881C16CE5F14FBF1A8F45D547F53320E2343F;
IL2CPP_EXTERN_C String_t* _stringLiteral3638AC7950A71A82C59C07CE85133C6A8269515C;
IL2CPP_EXTERN_C String_t* _stringLiteral367C784520DD366871AA98DB46837916381AF345;
IL2CPP_EXTERN_C String_t* _stringLiteral387F894C2A68334378B4AEF513520EDF7E7477F6;
IL2CPP_EXTERN_C String_t* _stringLiteral38940A425CDB40C3E9E5BEEAF6624FABC8A5A6E3;
IL2CPP_EXTERN_C String_t* _stringLiteral38CDC28333865A2F4583FDC0F6A76A63935BAAAB;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEC2DB37F967EF725B7E8ED4E7B3A0134059D9A;
IL2CPP_EXTERN_C String_t* _stringLiteral54A7AE1E041886438F39665D7B7B89B8220792EE;
IL2CPP_EXTERN_C String_t* _stringLiteral56C66A66D0F84902F8C5AC2559D3485EB559BA72;
IL2CPP_EXTERN_C String_t* _stringLiteral5F07FDB329D54541CF6BEA00118C3A3FA9AF3D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral611268EDF9FD52FBE5D1B55241557D7D2BC4558F;
IL2CPP_EXTERN_C String_t* _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821;
IL2CPP_EXTERN_C String_t* _stringLiteral6A456B12AD9BD5E63FDCC0D09B7E408B87DC0443;
IL2CPP_EXTERN_C String_t* _stringLiteral6A526BE0B38083B23AE8E2A7D449D75408DDE510;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB4C068CE2E399B821DFB40520B7F37AEB8457C;
IL2CPP_EXTERN_C String_t* _stringLiteral78DEBC08EC97631284B57E948D7183E8B7A39284;
IL2CPP_EXTERN_C String_t* _stringLiteral8593DB2A61302DE8F5ABB531DC0DBEC5C34C43E4;
IL2CPP_EXTERN_C String_t* _stringLiteral88180CF406F8E1FE964A06A0B540BDFAB073849B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C511D2DA5E5CDD57CB15B3E68697D759B5F4391;
IL2CPP_EXTERN_C String_t* _stringLiteral967CEB06C24E0743D0F8F4EB9B8D012B394E4047;
IL2CPP_EXTERN_C String_t* _stringLiteral9D332B36ED3D749630920EA48C050FE4DA13756D;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5F9835A152F2BA019EBD6CEFB449507FEB9523;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5B8A31DA57AA99332BFC1DD882603611334F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9CD2E11747EC882244656F25262F8FA81D56C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralC9442C7989F7BA569512A180CBB9C63F28805AD7;
IL2CPP_EXTERN_C String_t* _stringLiteralCA660C1E6FDE7EEDB2D7B9FF0A459353D652B8B3;
IL2CPP_EXTERN_C String_t* _stringLiteralD33EE5F654143DB227FC4E3BEF61D303531999B3;
IL2CPP_EXTERN_C String_t* _stringLiteralD69A24C7BBC466505FD98D644D1165897EDFB076;
IL2CPP_EXTERN_C String_t* _stringLiteralD6D054A0FFBB0A73F649A23C61B32D8B1F3D9BEE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2135C6A93AE8571C504AFB58DDF03497BAAAF9F;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C35CD048F8F12BC4A0831048A26F7592D9C6FD;
IL2CPP_EXTERN_C String_t* _stringLiteralEEBFE93D5D8C9CA5E4E015695E10136300141661;
IL2CPP_EXTERN_C String_t* _stringLiteralFABC49B6267B8B2AF5A0C9BFA2FB0213BB749383;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m05E05EFFDFE1F3682B3A1CCABBA67ECB92B9E27C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m74FF08191011AAE2E1C17946808B20185D3F6D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m66A77D28E4FAB199391BF703CB4CA75013FEACA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_m4D006BBAB8F458A8171386E467D431CE663CFDF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m2CECE2164CA1202EBBB1C85A10BC9382571E14B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Buttons_OnPointerDown_m078B4014E9C12B721F4183C45B1FAAEA1F87C78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Buttons_OnPointerUp_m0B3353FB2E99AE947CD62BE7F61AFF7A495594E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC6814EE492C8F7C184ACA80844A78C14957452E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m380B95E83EEBFD6A183AD7D33F2A7A3BDD2AF6F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF3B6DB0E3540E6D731056FABDC9355991E86B460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC_mC6AFE40A3353EBA2ADD432F4B1370574C8CE83EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA180309A777C8CBF81E0E6D32475343386BD5D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAEAAE2A9C8DA9BD7BA7FF7B0029EE2063A80A8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2997632D39CC284C898519AEBBCE5EB62B37185F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mC1A039F33D6AD1109A9552FFF614E27ED05AB445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1398A7684BBFE794CD38D6C2D5558D861801B219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF55CDEAACAAD854EF3EE0EED3DE57509EC528099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mE2AB14A0B5A0123E0E21CB828AA20339D51A0EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3ACC07363CE8359A9083172D685660E4ADC4C002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9250AD4440543EAF799D581494E13DA2CB597B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6DF00FC5CE2FBB9A312E31C886649B1EDCFC3BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0E9BDCA1040A86271F55419D3E497224C25CCEBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m72E151AB2EC171A1240D7D98AE225F1033B6D08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m746D063B295CFF9679A08F8B0DB8E956D6DB125B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m90DE235285047FDC7EC7167DAADFB93E428AB227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4C3C0C48B0DC5EEFA287EB6AFE994C148EEEED4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5CFEE9AF9CDBDF27577D09244CB3E046BAACB1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDD268362D5FC4AA875D0B30248843584762ACCE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m688BFD581676B247B11FAEFAB7275487413AE101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m788DD6A9A71FFEF6231D041B90ACA616B6062172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3D943D3749D1B38FD3A470AEE2568D11213F85BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF382B27F4C37DE6EC8245019C1E5847F769D889F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5ED2463AFC7EE03A9773956851811667A1F30BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA6E64A809B9A4445C48CB959F4BCA0F81562B03A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m13A9042E39DE81F9357ABE1A0C23742537007361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m3622500CD6CB2927F86946BB1862C25488764282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mEC761BB226AE1816EBB639162DD7664BB57B69F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m526F7A298FA1A1F881BF8D4F0E4AE2A7E3275278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04_mE1E626661F1EA3FA595C0B4F525AFBCD0FCDEDCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_mE5FDA7070B67615DF36177D7349B893F6E3ECE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99_m8E13AF03B2672C7946A56E7EB3E3ABCC819A43AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288_m7E546DCDD03D9F5C440F5357E72D2329124BFA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m193BF48016B0D18A550E2A60372534FC4E4A7720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m487F6D5D00341DBFAA6CF2127BACFFE3B67A0429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mFE70DDF2FA91865CBE3C5013297F1B6874D6B875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m672F779EAC3F4A6D3202E4969CA65368E1119D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_BinarySearch_m9148D62CDABCCD6B989553F09DD34B79498C5599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mFC6635059A80A83B79FA201BF75A8579BC04F301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_mC4E8FE0173A21B9C52364D51BF23FAB7992D3420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m74B6E014DF9E338F36D91F3DDAF7D8FEB12257D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m57FA6E4A4462D73F14D872CDD6BB07F05A2AB2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m95ACCD628689E008D836F9935BDB115F9FA71247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m0EFADA47629D71A3FCFB78EBFA3930745E6F8C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m0A1FF0AB691CD0243AAB6D4D5E9866CC5E5935AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1D6D71C35238498256C676729EDEDF89086E0BCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6459CF09B306447EAD4BE3AA9AFA0A834A231274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m93B163E0623D670D697E5F2E4FA8734EFED62351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m83A381698F8B5E4A2460451D53E979DE4D859464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA55079A4152292F3E130607A94A656656D5F2826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoakSessionManager_OnConnected_mEED911EAB59047081C895BAE5C7F34D3D9C74FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoakSessionManager_OnPeerAdded_mD8B3999F0454540B9D428D2861952155A51A9E47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoakSessionManager_OnPeerDataRecieved_mA404CACA2BD788E72FC946ECBA1111EC048D064C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoakSessionManager_OnPeerRemoved_mCBC0D593CBD1370842818C8CBB83A503D95EF288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoakSessionManager_OnPeerStateReceived_m64740FBE0E4AF687775BC5D63DA3AB53AD19EE23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A_mE34CD19B4BFFDDE0B8E855A37DA54EB0084B344E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m3E502C6D03B94C1F413E0C27BD3D0DE54C0B44A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndScanU3Ed__18_System_Collections_IEnumerator_Reset_m136D5983EE1B915EB30E446037048D4C5D234587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m0D6351052F31F799ACCA69FA02795AEB95EF313B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveAndFadeU3Ed__6_System_Collections_IEnumerator_Reset_m70B1E427FDFA6B83F13F795D1286D2F66BF0E09E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFitItemAndSortU3Eb__15_0_m9B7B506BA6727A517EF11D7C6D6B5ED88FA09E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetUIItemsU3Eb__20_0_mF4A46751C562A1A3D49E2FB918FE46709F75AAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CAddToLeaderboardTableU3Eb__0_mC5332870E47C922E677FB0104F57FB6C9FFB4E47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m80C4EA0C0BD8D786EB9F92D720F6A2067FC958AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m3F906D54B515400E1B965A03E9B0FE6B630615ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_mEC1DF4F74F3C4F73F7B307FEC742D3F0738A3627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m572AAE9850586E7DD8E018C1AF5F59D19B842109_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>
struct Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD40D2249B9F67FA1B302BF053E22D50E8F9BB9ED* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t48102B1606F67EFBEDD560E285A24B38044F569D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>
struct Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA4D02A9EC13440E4D2B29EBE8F8EB69EB727C376* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAB2709845F89ABD810324CA873047ED8FEF91D9A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAAB5D74F186017545090B39F1BF70DF2049AEE5C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA664935E183D4732B25CE39D4FDD5988943054B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t157A746EBAA898D93471CBB4D6A4029336B6F540* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t511CC81D57B44A21F8871F3AAC664940B16F9415* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD9B87E489119A249F1794A0289FEF378A985A9B6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD76881B666DF7467AACE0E475784F30EED5DC770* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC161D1546B01DB1896E03E07713685569419D7C2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>
struct List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>
struct List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t9474A9871E34F10BD526359F84581C6DD4224827* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t9474A9871E34F10BD526359F84581C6DD4224827* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Guid>
struct List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Niantic.ARDK.AR.Anchors.IARPlaneAnchor>
struct List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IARPlaneAnchorU5BU5D_tDBD4B3D72113DFFC6BB239CDFC07172FBC8BB766* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IARPlaneAnchorU5BU5D_tDBD4B3D72113DFFC6BB239CDFC07172FBC8BB766* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem>
struct List_1_tC2636C0705B471731FBAD53759369EBE554ED803  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LeaderboardListItemU5BU5D_t33421E7688E9610D2133A15D8B5A942F7DAF698A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC2636C0705B471731FBAD53759369EBE554ED803_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LeaderboardListItemU5BU5D_t33421E7688E9610D2133A15D8B5A942F7DAF698A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>
struct List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LeaderboardModelU5BU5D_tE1F42517AFEDA79E7982AE1439E75440A6BB8FDC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LeaderboardModelU5BU5D_tE1F42517AFEDA79E7982AE1439E75440A6BB8FDC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,UnityEngine.GameObject>
struct ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer
struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_contexts
	Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9* ____contexts_2;
	// System.IO.Stream Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_4;
};

struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7_StaticFields
{
	// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreamsLock
	RuntimeObject* ____runningStreamsLock_0;
	// System.Collections.Generic.HashSet`1<System.IO.Stream> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreams
	HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F* ____runningStreams_1;
};

// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Loak.Unity.LeaderboardModel
struct LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9  : public RuntimeObject
{
	// System.Int64 Loak.Unity.LeaderboardModel::score
	int64_t ___score_0;
	// System.String Loak.Unity.LeaderboardModel::username
	String_t* ___username_1;
};

// Loak.Unity.LeaderboardScore
struct LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41  : public RuntimeObject
{
	// System.String Loak.Unity.LeaderboardScore::username
	String_t* ___username_0;
	// System.Int32 Loak.Unity.LeaderboardScore::score
	int32_t ___score_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Loak.Unity.Tab
struct Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6  : public RuntimeObject
{
	// UnityEngine.GameObject Loak.Unity.Tab::uiObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiObject_0;
	// UnityEngine.UI.Button Loak.Unity.Tab::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_1;
	// UnityEngine.UI.Image Loak.Unity.Tab::bullet
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bullet_2;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>> Loak.Unity.Tab::entries
	List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries_3;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Loak.Unity.Leaderboard/<>c
struct U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810  : public RuntimeObject
{
};

struct U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_StaticFields
{
	// Loak.Unity.Leaderboard/<>c Loak.Unity.Leaderboard/<>c::<>9
	U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810* ___U3CU3E9_0;
	// System.Comparison`1<Loak.Unity.LeaderboardModel> Loak.Unity.Leaderboard/<>c::<>9__15_0
	Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* ___U3CU3E9__15_0_1;
};

// Loak.Unity.Leaderboard/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F  : public RuntimeObject
{
	// Loak.Unity.LeaderboardModel Loak.Unity.Leaderboard/<>c__DisplayClass14_0::leaderboardData
	LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___leaderboardData_0;
};

// Loak.Unity.LoakLeaderboard/<>c
struct U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA  : public RuntimeObject
{
};

struct U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_StaticFields
{
	// Loak.Unity.LoakLeaderboard/<>c Loak.Unity.LoakLeaderboard/<>c::<>9
	U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA* ___U3CU3E9_0;
	// System.Action`1<Loak.Unity.LeaderboardListItem> Loak.Unity.LoakLeaderboard/<>c::<>9__20_0
	Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* ___U3CU3E9__20_0_1;
};

// Loak.Unity.LoakScanner/<EndScan>d__18
struct U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7  : public RuntimeObject
{
	// System.Int32 Loak.Unity.LoakScanner/<EndScan>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Loak.Unity.LoakScanner/<EndScan>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Loak.Unity.LoakScanner Loak.Unity.LoakScanner/<EndScan>d__18::<>4__this
	LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* ___U3CU3E4__this_2;
};

// Loak.Unity.Tab/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747  : public RuntimeObject
{
	// Loak.Unity.Tab Loak.Unity.Tab/<>c__DisplayClass4_0::tab
	Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* ___tab_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,UnityEngine.GameObject>
struct Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,System.Object>
struct Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___m_result_22;
};

struct Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t49820C8D72BE148BBE4A62330A8BA133AE93529F* ___s_defaultFactory_23;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Niantic.ARDK.Networking.IPeer>
struct UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<System.UInt32,System.Guid,System.Object[]>
struct UnityEvent_3_t1F9672EBEE1A8766C2B174829626913EB758A5DD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`2<System.Object,System.Int64>
struct ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int64_t ___Item2_1;
};

// System.ValueTuple`2<System.String,System.Int64>
struct ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 
{
	// T1 System.ValueTuple`2::Item1
	String_t* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int64_t ___Item2_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::_context
	_TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE* ____context_5;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::_context
	_TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208* ____context_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::<Self>k__BackingField
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::<Host>k__BackingField
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF_marshaled_pinvoke
{
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF_marshaled_com
{
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs
struct PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs
struct PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs
struct PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs
struct PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_1;
	// Niantic.ARDK.Networking.TransportType Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::<TransportType>k__BackingField
	uint8_t ___U3CTransportTypeU3Ek__BackingField_2;
	// System.Byte[] Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_3;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs
struct PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	uint32_t ___U3CTagU3Ek__BackingField_1;
	uint8_t ___U3CTransportTypeU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs
struct PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	uint32_t ___U3CTagU3Ek__BackingField_1;
	uint8_t ___U3CTransportTypeU3Ek__BackingField_2;
	Il2CppSafeArray/*NONE*/* ____data_3;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs
struct PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs
struct PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs
struct PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
};

// Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs
struct PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::<Peer>k__BackingField
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	// Niantic.ARDK.AR.Networking.PeerState Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs
struct PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D_marshaled_pinvoke
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	int32_t ___U3CStateU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs
struct PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D_marshaled_com
{
	RuntimeObject* ___U3CPeerU3Ek__BackingField_0;
	int32_t ___U3CStateU3Ek__BackingField_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};
#pragma pack(pop, tp)

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>
struct AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>
struct KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::19DC465D7F6D4CB213BB555C91585CA9BCE5919DE6CF433321767153FE8265E6
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___19DC465D7F6D4CB213BB555C91585CA9BCE5919DE6CF433321767153FE8265E6_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// HitTextBehaviour/<FadeOutCoroutine>d__4
struct U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324  : public RuntimeObject
{
	// System.Int32 HitTextBehaviour/<FadeOutCoroutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HitTextBehaviour/<FadeOutCoroutine>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HitTextBehaviour HitTextBehaviour/<FadeOutCoroutine>d__4::<>4__this
	HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* ___U3CU3E4__this_2;
	// UnityEngine.Color HitTextBehaviour/<FadeOutCoroutine>d__4::<startColor>5__1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CstartColorU3E5__1_3;
	// System.Single HitTextBehaviour/<FadeOutCoroutine>d__4::<elapsed>5__2
	float ___U3CelapsedU3E5__2_4;
	// UnityEngine.Color HitTextBehaviour/<FadeOutCoroutine>d__4::<endColor>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CendColorU3E5__3_5;
	// System.Single HitTextBehaviour/<FadeOutCoroutine>d__4::<t>5__4
	float ___U3CtU3E5__4_6;
};

// Loak.Unity.LoakRoomManagement/Player
struct Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474  : public RuntimeObject
{
	// System.Guid Loak.Unity.LoakRoomManagement/Player::identifier
	Guid_t ___identifier_0;
	// System.String Loak.Unity.LoakRoomManagement/Player::username
	String_t* ___username_1;
};

// TextMoveAndFade/<MoveAndFade>d__6
struct U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5  : public RuntimeObject
{
	// System.Int32 TextMoveAndFade/<MoveAndFade>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TextMoveAndFade/<MoveAndFade>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TextMoveAndFade TextMoveAndFade/<MoveAndFade>d__6::<>4__this
	TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* ___U3CU3E4__this_2;
	// TMPro.TextMeshProUGUI TextMoveAndFade/<MoveAndFade>d__6::<text>5__1
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___U3CtextU3E5__1_3;
	// UnityEngine.Color TextMoveAndFade/<MoveAndFade>d__6::<color>5__2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcolorU3E5__2_4;
	// System.Single TextMoveAndFade/<MoveAndFade>d__6::<startTime>5__3
	float ___U3CstartTimeU3E5__3_5;
	// System.Single TextMoveAndFade/<MoveAndFade>d__6::<t>5__4
	float ___U3CtU3E5__4_6;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.Object>
struct Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,Loak.Unity.LoakRoomManagement/Player>
struct Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5
struct U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB  : public RuntimeObject
{
	// System.Int32 Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>> Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A ___U3CU3Et__builder_1;
	// System.String Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::gameId
	String_t* ___gameId_2;
	// Loak.Unity.Leaderboard Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::<>4__this
	Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* ___U3CU3E4__this_3;
	// System.TimeSpan Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::<timeSinceLastRefresh>5__1
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CtimeSinceLastRefreshU3E5__1_4;
	// System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel> Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::<retrievedLeaderboards>5__2
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___U3CretrievedLeaderboardsU3E5__2_5;
};

// System.Action`1<Loak.Unity.LeaderboardListItem>
struct Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>
struct ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>
struct ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>
struct ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>
struct ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>
struct ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7  : public MulticastDelegate_t
{
};

// System.Comparison`1<Loak.Unity.LeaderboardModel>
struct Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4  : public MulticastDelegate_t
{
};

// System.Predicate`1<Loak.Unity.LeaderboardModel>
struct Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BackButton
struct BackButton_tDD46B24681B87D968EA33D516F8A7568B81CC833  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Buttons
struct Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CompassManager
struct CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI CompassManager::initialHeadingText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___initialHeadingText_4;
	// UnityEngine.GameObject CompassManager::ARSceneCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ARSceneCamera_5;
	// UnityEngine.Camera CompassManager::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_6;
	// System.Single CompassManager::currentHeading
	float ___currentHeading_7;
};

// FloorPlaneFinder
struct FloorPlaneFinder_t7F00FAA3B9825F13BBAFF2B69616EEC6A90FC7EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Niantic.ARDK.AR.Anchors.IARPlaneAnchor> FloorPlaneFinder::<PlaneAnchors>k__BackingField
	List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B* ___U3CPlaneAnchorsU3Ek__BackingField_4;
	// Niantic.ARDK.Extensions.ARPlaneManager FloorPlaneFinder::planeManager
	ARPlaneManager_t4960B2216E340DF44530466B213C11460445E9D9* ___planeManager_5;
};

// GameLogic
struct GameLogic_tECBEC8501055C6739738F91B8986E2589806C9E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HitTextBehaviour
struct HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI HitTextBehaviour::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_4;
	// System.Single HitTextBehaviour::fadeDuration
	float ___fadeDuration_5;
};

// Loak.Unity.Leaderboard
struct Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>> Loak.Unity.Leaderboard::LeaderboardTable
	Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* ___LeaderboardTable_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.DateTime> Loak.Unity.Leaderboard::LastRefreshTimestamps
	Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* ___LastRefreshTimestamps_6;
	// System.Single Loak.Unity.Leaderboard::coolDownTimer
	float ___coolDownTimer_7;
};

struct Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644_StaticFields
{
	// Loak.Unity.Leaderboard Loak.Unity.Leaderboard::Instance
	Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* ___Instance_4;
};

// Loak.Unity.LeaderboardListItem
struct LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color Loak.Unity.LeaderboardListItem::highlightedTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___highlightedTextColor_4;
	// UnityEngine.Sprite Loak.Unity.LeaderboardListItem::highlightedBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___highlightedBackground_5;
	// UnityEngine.Color Loak.Unity.LeaderboardListItem::unhighlightedTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unhighlightedTextColor_6;
	// UnityEngine.Sprite Loak.Unity.LeaderboardListItem::unhighlightedBackground
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___unhighlightedBackground_7;
	// UnityEngine.UI.Image Loak.Unity.LeaderboardListItem::backgroundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___backgroundImage_8;
	// TMPro.TMP_Text[] Loak.Unity.LeaderboardListItem::textElements
	TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* ___textElements_9;
};

// Loak.Unity.LoakLeaderboard
struct LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Loak.Unity.LoakLeaderboard/LeaderboardConfiguration Loak.Unity.LoakLeaderboard::leaderboardConfiguration
	int32_t ___leaderboardConfiguration_5;
	// System.Int32 Loak.Unity.LoakLeaderboard::numberOfEntries
	int32_t ___numberOfEntries_6;
	// System.String Loak.Unity.LoakLeaderboard::highlightedName
	String_t* ___highlightedName_7;
	// Loak.Unity.LeaderboardListItem Loak.Unity.LoakLeaderboard::listItemPrefab
	LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* ___listItemPrefab_8;
	// System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem> Loak.Unity.LoakLeaderboard::listItems
	List_1_tC2636C0705B471731FBAD53759369EBE554ED803* ___listItems_9;
	// UnityEngine.Canvas Loak.Unity.LoakLeaderboard::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_10;
	// UnityEngine.GameObject Loak.Unity.LoakLeaderboard::loadingView
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadingView_11;
	// UnityEngine.GameObject Loak.Unity.LoakLeaderboard::list
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___list_12;
	// Loak.Unity.Tab Loak.Unity.LoakLeaderboard::activeTab
	Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* ___activeTab_13;
	// Loak.Unity.Tab Loak.Unity.LoakLeaderboard::friendsTab
	Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* ___friendsTab_14;
	// Loak.Unity.Tab Loak.Unity.LoakLeaderboard::globalTab
	Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* ___globalTab_15;
};

struct LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_StaticFields
{
	// Loak.Unity.LoakLeaderboard Loak.Unity.LoakLeaderboard::Instance
	LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* ___Instance_4;
};

// Loak.Unity.LoakRoomManagement
struct LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Loak.Unity.LoakRoomManagement::roomPrefix
	String_t* ___roomPrefix_5;
	// System.Int32 Loak.Unity.LoakRoomManagement::roomCap
	int32_t ___roomCap_6;
	// System.String Loak.Unity.LoakRoomManagement::username
	String_t* ___username_7;
	// System.String Loak.Unity.LoakRoomManagement::<roomCode>k__BackingField
	String_t* ___U3CroomCodeU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player> Loak.Unity.LoakRoomManagement::<connectedPlayers>k__BackingField
	Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* ___U3CconnectedPlayersU3Ek__BackingField_9;
	// UnityEngine.Canvas Loak.Unity.LoakRoomManagement::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_10;
	// UnityEngine.GameObject Loak.Unity.LoakRoomManagement::modeSelectView
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modeSelectView_11;
	// UnityEngine.GameObject Loak.Unity.LoakRoomManagement::multiplayerView
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___multiplayerView_12;
	// UnityEngine.GameObject Loak.Unity.LoakRoomManagement::joinView
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___joinView_13;
	// TMPro.TMP_InputField Loak.Unity.LoakRoomManagement::joinInput
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___joinInput_14;
	// UnityEngine.GameObject Loak.Unity.LoakRoomManagement::lobbyView
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lobbyView_15;
	// TMPro.TMP_Text Loak.Unity.LoakRoomManagement::lobbyCode
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___lobbyCode_16;
	// UnityEngine.Transform Loak.Unity.LoakRoomManagement::lobbyListParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lobbyListParent_17;
	// UnityEngine.GameObject Loak.Unity.LoakRoomManagement::lobbyListPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lobbyListPrefab_18;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject> Loak.Unity.LoakRoomManagement::lobbyListItems
	Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* ___lobbyListItems_19;
	// UnityEngine.UI.Button Loak.Unity.LoakRoomManagement::lobbyPlayButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___lobbyPlayButton_20;
	// UnityEngine.GameObject Loak.Unity.LoakRoomManagement::localizeView
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___localizeView_21;
	// Loak.Unity.LoakSessionManager Loak.Unity.LoakRoomManagement::seshMan
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* ___seshMan_22;
	// System.Boolean Loak.Unity.LoakRoomManagement::creating
	bool ___creating_23;
};

struct LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B_StaticFields
{
	// Loak.Unity.LoakRoomManagement Loak.Unity.LoakRoomManagement::Instance
	LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* ___Instance_4;
};

// Loak.Unity.LoakScanner
struct LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Loak.Unity.LoakScanner::scanThreshold
	int32_t ___scanThreshold_5;
	// System.Boolean Loak.Unity.LoakScanner::autoStart
	bool ___autoStart_6;
	// UnityEngine.Events.UnityEvent Loak.Unity.LoakScanner::OnScanStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnScanStart_7;
	// UnityEngine.Events.UnityEvent Loak.Unity.LoakScanner::OnScanEnd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnScanEnd_8;
	// UnityEngine.GameObject Loak.Unity.LoakScanner::scanCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scanCanvas_9;
	// TMPro.TMP_Text Loak.Unity.LoakScanner::scanText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___scanText_10;
	// UnityEngine.UI.Image Loak.Unity.LoakScanner::fillBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fillBar_11;
	// Niantic.ARDK.Extensions.Meshing.ARMeshManager Loak.Unity.LoakScanner::meshMan
	ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* ___meshMan_12;
	// System.String Loak.Unity.LoakScanner::scanningString
	String_t* ___scanningString_13;
	// System.String Loak.Unity.LoakScanner::completeString
	String_t* ___completeString_14;
	// System.Single Loak.Unity.LoakScanner::scanProgress
	float ___scanProgress_15;
	// System.Boolean Loak.Unity.LoakScanner::scanning
	bool ___scanning_16;
};

struct LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676_StaticFields
{
	// Loak.Unity.LoakScanner Loak.Unity.LoakScanner::Instance
	LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* ___Instance_4;
};

// Loak.Unity.LoakSessionManager
struct LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Loak.Unity.LoakSessionManager::arOnStart
	bool ___arOnStart_5;
	// UnityEngine.Events.UnityEvent Loak.Unity.LoakSessionManager::OnSessionJoined
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSessionJoined_6;
	// UnityEngine.Events.UnityEvent Loak.Unity.LoakSessionManager::OnSessionStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSessionStarted_7;
	// UnityEngine.Events.UnityEvent Loak.Unity.LoakSessionManager::OnSessionLocalized
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSessionLocalized_8;
	// UnityEngine.Events.UnityEvent`1<Niantic.ARDK.Networking.IPeer> Loak.Unity.LoakSessionManager::OnPeerJoined
	UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763* ___OnPeerJoined_9;
	// UnityEngine.Events.UnityEvent`1<Niantic.ARDK.Networking.IPeer> Loak.Unity.LoakSessionManager::OnPeerLeft
	UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763* ___OnPeerLeft_10;
	// UnityEngine.Events.UnityEvent`3<System.UInt32,System.Guid,System.Object[]> Loak.Unity.LoakSessionManager::OnDataRecieved
	UnityEvent_3_t1F9672EBEE1A8766C2B174829626913EB758A5DD* ___OnDataRecieved_11;
	// System.Boolean Loak.Unity.LoakSessionManager::IsHost
	bool ___IsHost_12;
	// Niantic.ARDK.Networking.IPeer Loak.Unity.LoakSessionManager::me
	RuntimeObject* ___me_13;
	// System.Boolean Loak.Unity.LoakSessionManager::sessionBegan
	bool ___sessionBegan_14;
	// System.String Loak.Unity.LoakSessionManager::sessionIdentifier
	String_t* ___sessionIdentifier_15;
	// Niantic.ARDK.Networking.IMultipeerNetworking Loak.Unity.LoakSessionManager::networking
	RuntimeObject* ___networking_16;
	// Niantic.ARDK.AR.IARSession Loak.Unity.LoakSessionManager::arSession
	RuntimeObject* ___arSession_17;
	// Niantic.ARDK.AR.Networking.IARNetworking Loak.Unity.LoakSessionManager::arNetworking
	RuntimeObject* ___arNetworking_18;
	// Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration Loak.Unity.LoakSessionManager::configuration
	RuntimeObject* ___configuration_19;
	// Niantic.ARDK.AR.Networking.PeerState Loak.Unity.LoakSessionManager::prevState
	int32_t ___prevState_20;
};

struct LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields
{
	// Loak.Unity.LoakSessionManager Loak.Unity.LoakSessionManager::Instance
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* ___Instance_4;
};

// LoakTapPlace
struct LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LoakTapPlace::objectToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToPlace_5;
	// UnityEngine.Transform LoakTapPlace::objectParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectParent_6;
	// System.Boolean LoakTapPlace::allowMultiple
	bool ___allowMultiple_7;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject> LoakTapPlace::OnObjectPlaced
	UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2* ___OnObjectPlaced_8;
	// UnityEngine.Camera LoakTapPlace::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_9;
	// UnityEngine.GameObject LoakTapPlace::singleObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___singleObject_10;
};

struct LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields
{
	// LoakTapPlace LoakTapPlace::Instance
	LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* ___Instance_4;
};

// MeshTagger
struct MeshTagger_t121159DC561D8038DB1F007D2E157A47D7A0CC52  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MeshTagger::meshParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshParent_4;
};

// NextButton
struct NextButton_t2C45B35301B0C4805E1C10DFAAF0C3F458ADB720  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ReplayButton
struct ReplayButton_t96D503EAA80022688814C658167E3B86F9C2E41D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ScoreAccesor
struct ScoreAccesor_t09AFDF4EAA911822900F6E06764A7D5526928C4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ScoreAccesor::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_4;
	// System.Int32 ScoreAccesor::score
	int32_t ___score_5;
};

// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera ScoreManager::ARCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___ARCamera_4;
	// TMPro.TextMeshProUGUI ScoreManager::directionText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___directionText_5;
	// TMPro.TextMeshProUGUI ScoreManager::hitText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___hitText_6;
	// TMPro.TextMeshProUGUI ScoreManager::cumScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___cumScoreText_7;
	// UnityEngine.AudioSource ScoreManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_8;
	// UnityEngine.AudioClip ScoreManager::hit
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hit_9;
	// UnityEngine.AudioClip ScoreManager::miss
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___miss_10;
	// System.Int32[] ScoreManager::directionint
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___directionint_11;
	// System.String[] ScoreManager::directionstr
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___directionstr_12;
	// System.Int32 ScoreManager::lastdirectionIndex
	int32_t ___lastdirectionIndex_13;
	// System.Int32 ScoreManager::cumulativeScore
	int32_t ___cumulativeScore_14;
	// HitTextBehaviour ScoreManager::hitTextBehaviour
	HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* ___hitTextBehaviour_15;
};

// ScoreSingleton
struct ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ScoreSingleton::lastGameScore
	int32_t ___lastGameScore_5;
};

struct ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_StaticFields
{
	// ScoreSingleton ScoreSingleton::Instance
	ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* ___Instance_4;
};

// ScoreTextBehaviour
struct ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ScoreTextBehaviour::_scoreTextPrefab
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____scoreTextPrefab_4;
	// UnityEngine.GameObject ScoreTextBehaviour::_scoreTextUIPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____scoreTextUIPanel_5;
	// UnityEngine.GameObject ScoreTextBehaviour::_scoreTextStartTransform
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____scoreTextStartTransform_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ScoreTextBehaviour::_scoreTexts
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____scoreTexts_7;
};

// Loak.Examples.SharedARExample
struct SharedARExample_t2E097EC8DAD3F0EF86AE46A15C7747BD6988B1CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject> Loak.Examples.SharedARExample::peerObjects
	Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* ___peerObjects_4;
};

// SpearController
struct SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 SpearController::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_4;
	// System.Single SpearController::<Score>k__BackingField
	float ___U3CScoreU3Ek__BackingField_5;
	// UnityEngine.Rigidbody SpearController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
	// UnityEngine.BoxCollider SpearController::bcSpear
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___bcSpear_7;
	// UnityEngine.CapsuleCollider SpearController::bcSpearTip
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___bcSpearTip_8;
	// UnityEngine.AudioClip[] SpearController::audioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audioClips_9;
	// UnityEngine.AudioSource SpearController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_10;
};

// SpearManager
struct SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] SpearManager::spearPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___spearPrefabs_4;
	// UnityEngine.GameObject SpearManager::CompassManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CompassManager_5;
	// UnityEngine.GameObject SpearManager::ScreenManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ScreenManager_6;
	// UnityEngine.GameObject SpearManager::GameManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameManager_7;
	// CompassManager SpearManager::_compassManagerScript
	CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* ____compassManagerScript_8;
	// ScoreTextBehaviour SpearManager::_scoreTextBehaviour
	ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* ____scoreTextBehaviour_9;
	// ScoreManager SpearManager::_scoreManager
	ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* ____scoreManager_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpearManager::loadedSpears
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___loadedSpears_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpearManager::shotSpears
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___shotSpears_12;
	// UnityEngine.Camera SpearManager::ARcamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___ARcamera_13;
	// System.Boolean SpearManager::isSwiping
	bool ___isSwiping_14;
	// System.Single SpearManager::swipeStartTime
	float ___swipeStartTime_15;
	// UnityEngine.Vector2 SpearManager::swipeStartPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___swipeStartPos_16;
	// System.Single SpearManager::lastSwipeTime
	float ___lastSwipeTime_17;
};

// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TextMoveAndFade
struct TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TextMoveAndFade::_moveSpeed
	float ____moveSpeed_4;
	// System.Single TextMoveAndFade::_fadeDuration
	float ____fadeDuration_5;
	// UnityEngine.RectTransform TextMoveAndFade::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_6;
	// System.Single TextMoveAndFade::m_XAxis
	float ___m_XAxis_7;
	// System.Single TextMoveAndFade::m_YAxis
	float ___m_YAxis_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Niantic.ARDK.Extensions.UnityLifecycleDriverBase
struct UnityLifecycleDriverBase_t9755F207604E4A621F83A87843F84F1DCB60BEB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VehicleManager
struct VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject VehicleManager::Vehicle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Vehicle_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> VehicleManager::ActiveVehicles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___ActiveVehicles_5;
	// UnityEngine.Camera VehicleManager::ARcamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___ARcamera_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Niantic.ARDK.Extensions.UnityLifecycleDriver
struct UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708  : public UnityLifecycleDriverBase_t9755F207604E4A621F83A87843F84F1DCB60BEB4
{
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_manageUsingUnityLifecycle
	bool ____manageUsingUnityLifecycle_4;
	// Niantic.ARDK.Utilities._ThreadCheckedObject Niantic.ARDK.Extensions.UnityLifecycleDriver::_threadChecker
	_ThreadCheckedObject_tB062B0CBB623B72F74B98674276DCEEE598566A6* ____threadChecker_5;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_initialized
	bool ____initialized_6;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_deinitialized
	bool ____deinitialized_7;
	// System.Boolean Niantic.ARDK.Extensions.UnityLifecycleDriver::_areFeaturesEnabled
	bool ____areFeaturesEnabled_8;
};

// Niantic.ARDK.Extensions.ARConfigChanger
struct ARConfigChanger_tB87A55AE634C8C484F1832B385880733606E2725  : public UnityLifecycleDriver_t19A065B156F390FF32D17F4891660C8DA190B708
{
	// Niantic.ARDK.AR.Configuration.ARSessionChangesCollector Niantic.ARDK.Extensions.ARConfigChanger::_changesCollector
	ARSessionChangesCollector_t249430ABE12D571F1A9CB9EE78E1CF979AE6F8C1* ____changesCollector_9;
	// System.Action Niantic.ARDK.Extensions.ARConfigChanger::_ConfigurationChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____ConfigurationChanged_10;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// Niantic.ARDK.Extensions.ARSessionListener
struct ARSessionListener_t1615B60F26EF9D7831939E5E8EA6C0EC52820FF6  : public ARConfigChanger_tB87A55AE634C8C484F1832B385880733606E2725
{
	// Niantic.ARDK.AR.IARSession Niantic.ARDK.Extensions.ARSessionListener::<ARSession>k__BackingField
	RuntimeObject* ___U3CARSessionU3Ek__BackingField_11;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// Niantic.ARDK.Extensions.Meshing.ARMeshManager
struct ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A  : public ARSessionListener_t1615B60F26EF9D7831939E5E8EA6C0EC52820FF6
{
	// System.UInt32 Niantic.ARDK.Extensions.Meshing.ARMeshManager::_targetFrameRate
	uint32_t ____targetFrameRate_12;
	// System.Single Niantic.ARDK.Extensions.Meshing.ARMeshManager::_targetBlockSize
	float ____targetBlockSize_13;
	// System.Single Niantic.ARDK.Extensions.Meshing.ARMeshManager::_meshDecimationThreshold
	float ____meshDecimationThreshold_14;
	// Niantic.ARDK.Extensions.Meshing.ARMeshManager/MeshingMode Niantic.ARDK.Extensions.Meshing.ARMeshManager::_meshingMode
	int32_t ____meshingMode_15;
	// System.Boolean Niantic.ARDK.Extensions.Meshing.ARMeshManager::UseCustomMeshingMode
	bool ___UseCustomMeshingMode_16;
	// System.Single Niantic.ARDK.Extensions.Meshing.ARMeshManager::_meshingRangeMax
	float ____meshingRangeMax_17;
	// System.Single Niantic.ARDK.Extensions.Meshing.ARMeshManager::_voxelSize
	float ____voxelSize_18;
	// System.Boolean Niantic.ARDK.Extensions.Meshing.ARMeshManager::_boundedVolumetricRange
	bool ____boundedVolumetricRange_19;
	// System.Boolean Niantic.ARDK.Extensions.Meshing.ARMeshManager::_generateUnityMeshes
	bool ____generateUnityMeshes_20;
	// UnityEngine.GameObject Niantic.ARDK.Extensions.Meshing.ARMeshManager::_meshPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____meshPrefab_21;
	// UnityEngine.GameObject Niantic.ARDK.Extensions.Meshing.ARMeshManager::_meshRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____meshRoot_22;
	// System.Int32 Niantic.ARDK.Extensions.Meshing.ARMeshManager::_colliderUpdateThrottle
	int32_t ____colliderUpdateThrottle_23;
	// System.Boolean Niantic.ARDK.Extensions.Meshing.ARMeshManager::_useInvisibleMaterial
	bool ____useInvisibleMaterial_24;
	// UnityEngine.Material Niantic.ARDK.Extensions.Meshing.ARMeshManager::_invisibleMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____invisibleMaterial_25;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Meshing.MeshObjectsUpdatedArgs> Niantic.ARDK.Extensions.Meshing.ARMeshManager::MeshObjectsUpdated
	ArdkEventHandler_1_tE3E50351EF87E711096B705219BE93A7D997E074* ___MeshObjectsUpdated_26;
	// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Extensions.Meshing.MeshObjectsClearedArgs> Niantic.ARDK.Extensions.Meshing.ARMeshManager::MeshObjectsCleared
	ArdkEventHandler_1_t17A3116E533559C3D77887BABABECEE1DB2866AF* ___MeshObjectsCleared_27;
	// System.UInt32 Niantic.ARDK.Extensions.Meshing.ARMeshManager::_prevTargetFrameRate
	uint32_t ____prevTargetFrameRate_28;
	// System.Single Niantic.ARDK.Extensions.Meshing.ARMeshManager::_prevTargetBlockSize
	float ____prevTargetBlockSize_29;
	// System.Single Niantic.ARDK.Extensions.Meshing.ARMeshManager::_prevMeshDecimationThreshold
	float ____prevMeshDecimationThreshold_30;
	// Niantic.ARDK.Extensions.Meshing.ARMeshManager/MeshingMode Niantic.ARDK.Extensions.Meshing.ARMeshManager::_prevMeshingMode
	int32_t ____prevMeshingMode_31;
	// System.Boolean Niantic.ARDK.Extensions.Meshing.ARMeshManager::_clearMeshOnRerun
	bool ____clearMeshOnRerun_32;
	// Niantic.ARDK.Extensions.Meshing.MeshObjectsGenerator Niantic.ARDK.Extensions.Meshing.ARMeshManager::_generator
	MeshObjectsGenerator_t25BACF774834E056200C07956F2DB16DDA66BD34* ____generator_33;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// Loak.Unity.LeaderboardScore[]
struct LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346  : public RuntimeArray
{
	ALIGN_FIELD (8) LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* m_Items[1];

	inline LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_Text[]
struct TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* m_Items[1];

	inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Guid[]
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42  : public RuntimeArray
{
	ALIGN_FIELD (8) Guid_t m_Items[1];

	inline Guid_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mDF485F0120506000FE3F7CB415937FBA18B5F22E_gshared (Dictionary_2_t14F299CF6D5D447FDD3C6B9AB97583E1F37A40E4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD40533CAB4ECC9DFA7E006BB88135530149CAA65_gshared (Dictionary_2_t14F299CF6D5D447FDD3C6B9AB97583E1F37A40E4* __this, RuntimeObject* ___key0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Dictionary_2_get_Item_mA112323DDAF2F393124F2131663569C2B3671041_gshared (Dictionary_2_t14F299CF6D5D447FDD3C6B9AB97583E1F37A40E4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m88102D8F28AB51C4FBE1189C1993E4E07C0D410A_gshared (Dictionary_2_t14F299CF6D5D447FDD3C6B9AB97583E1F37A40E4* __this, RuntimeObject* ___key0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::BinarySearch(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m9A9A662A79511BFCFF586238DA14181DE810265F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9EB0BD7F63082A1C7A17B99045B447FED95303A6_gshared (Dictionary_2_t14F299CF6D5D447FDD3C6B9AB97583E1F37A40E4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA2F21B18E75D600C0C62268B3CAE83FC76983567_gshared_inline (List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 List_1_get_Item_m66C71277CE8C03304CF3DCA76C9AB2909558E7ED_gshared (List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mF44830CCE504347DFE1E61EC5F4E02A407D8122C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5BB7F76414590352F287EA41F9AB910EE48E7956_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8 ValueCollection_GetEnumerator_mB2733C33EA584968EFC8B1C6D3B3EB1B65111843_gshared (ValueCollection_tDDD3D21DE247A37B6EFC39326193FCD731A2E296* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4CE294246806CA00D6E66F53D74A31D53A934324_gshared (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF89061B27B4237E55D2FAA66133A1A5505799C4D_gshared_inline (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD940DC6E45C702CD712A3AAA27659E88E4B85CB5_gshared (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Guid>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6459CF09B306447EAD4BE3AA9AFA0A834A231274_gshared (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3 Dictionary_2_GetEnumerator_mB49B0C517100C32E16F152131A91071EB3428CBB_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7069AFB2C344B6E6CFC1046EC160E9537D6255DA_gshared (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 Enumerator_get_Current_mCA547978C08237FB95FE2E694CAA1EE3BC9CBBBB_gshared_inline (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Guid>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_gshared_inline (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* __this, Guid_t ___item0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m292DFC3775CE846E9E83364F64992769595376ED_gshared (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Guid>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* List_1_ToArray_m0A1FF0AB691CD0243AAB6D4D5E9866CC5E5935AF_gshared (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m387DE0E7090B01FCF6F61CF76D8FADF7EC1DF151_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared (bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E_gshared (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64_gshared (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1_gshared (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47_gshared (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336_gshared (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.UInt32,System.Guid,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m6BC52785E72247FF6546FD44864214F95F40EF0C_gshared (UnityEvent_3_t9D1FC2801E786123CD00085F8B4B8455EBA2B580* __this, uint32_t ___arg00, Guid_t ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE1D4EB8E35047347D05CF24CE7482F447D77EB9D_gshared (Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* __this, Guid_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void CompassManager::InitializeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassManager_InitializeGame_mEB62B88E82921B512FB6284660C81781BFE88CA2 (CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.SystemInfo::get_supportsAccelerometer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsAccelerometer_mDD94E914406FBF282CCECEFF79F80A3E5ECC9559 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsGyroscope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211 (const RuntimeMethod* method) ;
// UnityEngine.Compass UnityEngine.Input::get_compass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Compass::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9 (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Compass::get_trueHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HitTextBehaviour::FadeOutCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HitTextBehaviour_FadeOutCoroutine_mBE0258BEC363590AB5F0DDD52C3B4D38A1F1EBCD (HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void HitTextBehaviour/<FadeOutCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoroutineU3Ed__4__ctor_m05E0F39E59F2DE8314076BD5BA5A1285366CB11E (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<HitTextBehaviour>()
inline HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* Component_GetComponent_TisHitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC_mC6AFE40A3353EBA2ADD432F4B1370574C8CE83EE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void HitTextBehaviour::fadeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTextBehaviour_fadeout_m7C3D490E750F5F9D2FF2148385FEF65FDA9A84E3 (HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void ScoreSingleton::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSingleton_AddScore_mCA6C2A615CD39FFC253E7BC75BBB7B53CEF3259A (ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void SpearController::PropelForward(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_PropelForward_mF4740C53E68AA9CBDE2803EA9DDB3448A90A7CF0 (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, float ___speed0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CompassManager>()
inline CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* GameObject_GetComponent_TisCompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04_mE1E626661F1EA3FA595C0B4F525AFBCD0FCDEDCD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ScoreTextBehaviour>()
inline ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* GameObject_GetComponent_TisScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99_m8E13AF03B2672C7946A56E7EB3E3ABCC819A43AD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ScoreManager>()
inline ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* GameObject_GetComponent_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_mE5FDA7070B67615DF36177D7349B893F6E3ECE39 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void SpearManager::LoadSpear(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_LoadSpear_m317E722264647629D6EDE081ED42367AFA52A3DE (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ScoreManager::NewSpear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_NewSpear_m5AF4EBE10CD4FAED3343EF6DE2E956895FA10FB7 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<SpearController>()
inline SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* GameObject_GetComponent_TisSpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288_m7E546DCDD03D9F5C440F5357E72D2329124BFA9A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SpearController::ShootObject(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_ShootObject_mA8DC78B8ACDF8F9CBF5AD505AC6DB456C665FCBD (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, float ___impuls0, const RuntimeMethod* method) ;
// System.Int32 CompassManager::GetCurrentHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompassManager_GetCurrentHeading_mD7179BBC25F76B9D1C336B090DBF567365CDEC6E (CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::CalculateHit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_CalculateHit_m5E17D151A0F3534381967072B6A7BC8399AE0023 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, int32_t ___shotdirection0, const RuntimeMethod* method) ;
// System.Void ScoreTextBehaviour::CreateScoreText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTextBehaviour_CreateScoreText_mCC70571A7BD1AEE4AA077757E55D1D8895A401CB (ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* __this, int32_t ___angleshot0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void SpearManager::MoveSpearAlong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_MoveSpearAlong_m800E39585D552E16A3FB123A9E94FB47BE5A2DA4 (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void SpearManager::SpearScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_SpearScore_m6338681C32BC4027720ABF19862EACFE12A225FA (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) ;
// System.Void SpearManager::ShootSpear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_ShootSpear_m3AAA18D39DA4CEB36DFA8654534A665037F42595 (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, float ___impuls0, const RuntimeMethod* method) ;
// System.Void SpearManager::SpearDestroyer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_SpearDestroyer_mB7E4E78BCDF84040507689A0C357E131B5095170 (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator TextMoveAndFade::MoveAndFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMoveAndFade_MoveAndFade_m61FD69C0CB6EEDE2496A46513524541950B4B5FC (TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* __this, const RuntimeMethod* method) ;
// System.Void TextMoveAndFade/<MoveAndFade>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveAndFadeU3Ed__6__ctor_m3466B00A262F70A0A348C4DCF6FD7FE5C797C5EC (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void VehicleManager::OnGameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_OnGameStart_mDD7464C8EDB3318E065E0608ACA1DDC6CC10744A (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void VehicleManager::VehiclePositioner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_VehiclePositioner_m89E07CA5FABDC63E8139C39B6A191B39C9DA08CD (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) ;
// System.Void VehicleManager::VehicleRotationer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_VehicleRotationer_m6CF156CC3C17356CD2D9E2B948583384BA87DDE5 (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformAgnosticInput_get_touchCount_m7B5705756A3948A905D86BA45AE1D8D557AD7FA3 (const RuntimeMethod* method) ;
// UnityEngine.Touch Niantic.ARDK.Utilities.Input.Legacy.PlatformAgnosticInput::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 PlatformAgnosticInput_GetTouch_m67C8FA8D9C111F706AF6AEE6F18EC88841B84E3F (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m4055619E0F7EFA04620EAA0517F8393C4EBCFE87 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>::Invoke(T0)
inline void UnityEvent_1_Invoke_m3F906D54B515400E1B965A03E9B0FE6B630615ED (UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void System.Collections.Generic.List`1<Niantic.ARDK.AR.Anchors.IARPlaneAnchor>::.ctor()
inline void List_1__ctor_m93B163E0623D670D697E5F2E4FA8734EFED62351 (List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRefreshedLeaderboardU3Ed__5__ctor_m432EE6FE4ACA4F7E185841B389DFF4B141BAE5D4 (U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::Create()
inline AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A AsyncTaskMethodBuilder_1_Create_m05E05EFFDFE1F3682B3A1CCABBA67ECB92B9E27C (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::Start<Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_m4D006BBAB8F458A8171386E467D431CE663CFDF2 (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* __this, U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A*, U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::get_Task()
inline Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6* AsyncTaskMethodBuilder_1_get_Task_m2CECE2164CA1202EBBB1C85A10BC9382571E14B5 (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6* (*) (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF55CDEAACAAD854EF3EE0EED3DE57509EC528099 (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mDF485F0120506000FE3F7CB415937FBA18B5F22E_gshared)(__this, ___key0, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAEAAE2A9C8DA9BD7BA7FF7B0029EE2063A80A8D6 (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* __this, String_t* ___key0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1*, String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Dictionary_2_Add_mD40533CAB4ECC9DFA7E006BB88135530149CAA65_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Item(TKey)
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086 (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA112323DDAF2F393124F2131663569C2B3671041_gshared)(__this, ___key0, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.Boolean Loak.Unity.Leaderboard::CheckIfTimestampExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_CheckIfTimestampExists_m5A97317444E72EE6C9B7E8922A3284681E77F33C (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___gameId0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5CFEE9AF9CDBDF27577D09244CB3E046BAACB1DD (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* __this, String_t* ___key0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1*, String_t*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Dictionary_2_set_Item_m88102D8F28AB51C4FBE1189C1993E4E07C0D410A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* __this, String_t* ___key0, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A*, String_t*, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* __this, String_t* ___key0, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A*, String_t*, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::.ctor()
inline void List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5 (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Loak.Unity.LeaderboardModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardModel__ctor_mB5E475535663A7348CBD9C8D4D5D0CD49C31A368 (LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::Add(T)
inline void List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_inline (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* __this, String_t* ___key0, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A*, String_t*, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Loak.Unity.Leaderboard::AddToLeaderboardTable(System.String,Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_AddToLeaderboardTable_mFE663852CF40D09CEE882D6B9FDBE0BFE9774937 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___worldID0, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___leaderboardData1, const RuntimeMethod* method) ;
// System.Void Loak.Unity.Leaderboard/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mBD916D2C5F2C57E2BC586F1F590820109D7E1274 (U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::get_Count()
inline int32_t List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_inline (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Predicate`1<Loak.Unity.LeaderboardModel>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m22528C472AF802CBED7FCFC77A98CC002F82A110 (Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::Find(System.Predicate`1<T>)
inline LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* List_1_Find_mFC6635059A80A83B79FA201BF75A8579BC04F301 (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9* ___match0, const RuntimeMethod* method)
{
	return ((  LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Boolean System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::Remove(T)
inline bool List_1_Remove_m95ACCD628689E008D836F9935BDB115F9FA71247 (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Loak.Unity.Leaderboard::FitItemAndSort(System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>,Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_FitItemAndSort_m82EAF108F280F24C8F71D72388A7ECC6ED82A083 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___models0, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___leaderboardData1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::BinarySearch(T)
inline int32_t List_1_BinarySearch_m9148D62CDABCCD6B989553F09DD34B79498C5599 (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9*, const RuntimeMethod*))List_1_BinarySearch_m9A9A662A79511BFCFF586238DA14181DE810265F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::Insert(System.Int32,T)
inline void List_1_Insert_m74B6E014DF9E338F36D91F3DDAF7D8FEB12257D2 (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, int32_t ___index0, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, int32_t, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m57FA6E4A4462D73F14D872CDD6BB07F05A2AB2A4 (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Comparison`1<Loak.Unity.LeaderboardModel>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m35987F1698A084EDCC8A4B2636999586D5A2F0A1 (Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m0EFADA47629D71A3FCFB78EBFA3930745E6F8C73 (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* __this, Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::.ctor()
inline void Dictionary_2__ctor_m0E9BDCA1040A86271F55419D3E497224C25CCEBF (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor()
inline void Dictionary_2__ctor_m72E151AB2EC171A1240D7D98AE225F1033B6D08F (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1*, const RuntimeMethod*))Dictionary_2__ctor_m9EB0BD7F63082A1C7A17B99045B447FED95303A6_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m74FF08191011AAE2E1C17946808B20185D3F6D0C (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m66A77D28E4FAB199391BF703CB4CA75013FEACA7 (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* __this, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A*, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Loak.Unity.Leaderboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE5D9207FBACEB31EB32B673877A89ECDD24B31C1 (U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810* __this, const RuntimeMethod* method) ;
// System.Int32 Loak.Unity.LeaderboardModel::CompareTo(Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardModel_CompareTo_m03CA727F74C8706307A0B5DF49792603798C36A4 (LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* __this, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___other0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Image>(System.Boolean)
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC6814EE492C8F7C184ACA80844A78C14957452E8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___includeInactive0, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TMP_Text>(System.Boolean)
inline TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.Tab::.ctor(UnityEngine.GameObject,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab__ctor_m9D5F188FC45D340C7C4AD7FE5B926AF30C1FDE38 (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiObject0, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries1, const RuntimeMethod* method) ;
// System.Void Loak.Unity.Tab::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811 (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, bool ___val0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakLeaderboard::ActivateTab(Loak.Unity.Tab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_ActivateTab_mD4ABDC923E6179D3929CBEA4D163ACF64341D2B3 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* ___tab0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<Loak.Unity.LeaderboardListItem>(System.Boolean)
inline LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* Component_GetComponentInChildren_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m380B95E83EEBFD6A183AD7D33F2A7A3BDD2AF6F3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem>::get_Count()
inline int32_t List_1_get_Count_m83A381698F8B5E4A2460451D53E979DE4D859464_inline (List_1_tC2636C0705B471731FBAD53759369EBE554ED803* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC2636C0705B471731FBAD53759369EBE554ED803*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem>::Add(T)
inline void List_1_Add_m672F779EAC3F4A6D3202E4969CA65368E1119D87_inline (List_1_tC2636C0705B471731FBAD53759369EBE554ED803* __this, LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2636C0705B471731FBAD53759369EBE554ED803*, LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.Object::Instantiate<Loak.Unity.LeaderboardListItem>(T,UnityEngine.Transform)
inline LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* Object_Instantiate_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m3E502C6D03B94C1F413E0C27BD3D0DE54C0B44A6 (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* (*) (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem>::get_Item(System.Int32)
inline LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F (List_1_tC2636C0705B471731FBAD53759369EBE554ED803* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* (*) (List_1_tC2636C0705B471731FBAD53759369EBE554ED803*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Loak.Unity.LeaderboardListItem::SetRank(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_SetRank_m85C96A8680D5D508185D04E74FB841B059E58A69 (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, int32_t ___rank0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.Tab::Update(System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab_Update_mE12BBA1E0DD3AE721F1879F974995F790606E33B (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakLeaderboard::SetUIItems(System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_SetUIItems_m85BCB3B3FE4E0745FA1C97F04CE33FCFBA58CAF0 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.Tab::ToggleSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab_ToggleSelected_m8487A880E7E9EDF893B725AF321F9CFAD49D1E47 (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, bool ___val0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>::get_Count()
inline int32_t List_1_get_Count_mA55079A4152292F3E130607A94A656656D5F2826_inline (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*, const RuntimeMethod*))List_1_get_Count_mA2F21B18E75D600C0C62268B3CAE83FC76983567_gshared_inline)(__this, method);
}
// System.Void System.Action`1<Loak.Unity.LeaderboardListItem>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B2F7C8CCA4ACB1CCA8A79F2BD7C77F5DEF57A74 (Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_mC4E8FE0173A21B9C52364D51BF23FAB7992D3420 (List_1_tC2636C0705B471731FBAD53759369EBE554ED803* __this, Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2636C0705B471731FBAD53759369EBE554ED803*, Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// T System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>::get_Item(System.Int32)
inline ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867 (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 (*) (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*, int32_t, const RuntimeMethod*))List_1_get_Item_m66C71277CE8C03304CF3DCA76C9AB2909558E7ED_gshared)(__this, ___index0, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LeaderboardListItem::SetUIText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_SetUIText_m4BF908D2CBEE7988F49782C1DDAB84B86F28FF3B (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, String_t* ___username0, String_t* ___score1, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LeaderboardListItem::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_Highlight_m76D10D829C0AB5B9D255E19DD3D4F8BA3E47DFF7 (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, bool ___val0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Loak.Unity.LeaderboardListItem>::.ctor()
inline void List_1__ctor_m1D6D71C35238498256C676729EDEDF89086E0BCE (List_1_tC2636C0705B471731FBAD53759369EBE554ED803* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2636C0705B471731FBAD53759369EBE554ED803*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Loak.Unity.LoakLeaderboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD55DF35E888B9127F81E6E8613B3457511D29EA6 (U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.Tab/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC1A9392C21708EC4D161DC178058E13E835CED1D (U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Image>(System.Boolean)
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m3622500CD6CB2927F86946BB1862C25488764282 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF44830CCE504347DFE1E61EC5F4E02A407D8122C_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Canvas>(System.Boolean)
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___includeInactive0, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TMP_InputField>(System.Boolean)
inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* GameObject_GetComponentInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mEC761BB226AE1816EBB639162DD7664BB57B69F1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF44830CCE504347DFE1E61EC5F4E02A407D8122C_gshared)(__this, ___includeInactive0, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Button>(System.Boolean)
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m13A9042E39DE81F9357ABE1A0C23742537007361 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF44830CCE504347DFE1E61EC5F4E02A407D8122C_gshared)(__this, ___includeInactive0, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakRoomManagement::set_roomCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoakRoomManagement_set_roomCode_m7FA5225328B0E347D605DC592E6DCC0F38793A46_inline (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Loak.Unity.LoakRoomManagement::get_roomCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoakRoomManagement_get_roomCode_m61BF335ED90705C4FF572C865D77D99A01545046_inline (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakSessionManager::LeaveSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player> Loak.Unity.LoakRoomManagement::get_connectedPlayers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::Clear()
inline void Dictionary_2_Clear_m2997632D39CC284C898519AEBBCE5EB62B37185F (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*, const RuntimeMethod*))Dictionary_2_Clear_m5BB7F76414590352F287EA41F9AB910EE48E7956_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::get_Values()
inline ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74* Dictionary_2_get_Values_m90DE235285047FDC7EC7167DAADFB93E428AB227 (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74* (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, const RuntimeMethod*))Dictionary_2_get_Values_m2A497B1A3A2856303D35DC5C7172B6CC06BBF5AE_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416 ValueCollection_GetEnumerator_m572AAE9850586E7DD8E018C1AF5F59D19B842109 (ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416 (*) (ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74*, const RuntimeMethod*))ValueCollection_GetEnumerator_mB2733C33EA584968EFC8B1C6D3B3EB1B65111843_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m688BFD581676B247B11FAEFAB7275487413AE101 (Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416*, const RuntimeMethod*))Enumerator_Dispose_m4CE294246806CA00D6E66F53D74A31D53A934324_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_mA6E64A809B9A4445C48CB959F4BCA0F81562B03A_inline (Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416*, const RuntimeMethod*))Enumerator_get_Current_mF89061B27B4237E55D2FAA66133A1A5505799C4D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Guid,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m3D943D3749D1B38FD3A470AEE2568D11213F85BF (Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416*, const RuntimeMethod*))Enumerator_MoveNext_mD940DC6E45C702CD712A3AAA27659E88E4B85CB5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::Clear()
inline void Dictionary_2_Clear_mC1A039F33D6AD1109A9552FFF614E27ED05AB445 (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, const RuntimeMethod*))Dictionary_2_Clear_m5BB7F76414590352F287EA41F9AB910EE48E7956_gshared)(__this, method);
}
// System.Void Loak.Unity.LoakSessionManager::StartSoloSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_StartSoloSession_m681EA07211BE705B2ECDD92BB342EF2F6D79869B (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) ;
// System.String Loak.Unity.LoakRoomManagement::GenerateRoomCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoakRoomManagement_GenerateRoomCode_m9A0955E556355E104CC2C0BD5BA81BB800C0ADDC (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakRoomManagement::SetRoomCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_SetRoomCode_m59406A35640CF67F500CFAE5664E124456465A05 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, String_t* ___code0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakSessionManager::JoinSession(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_JoinSession_m895459BCFA0B91799008C0DDFB3EC6B8792F52B7 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, String_t* ___sessionIdentifier0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakRoomManagement::JoinAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_JoinAccepted_m00A4BCB80959E49E4CC0D3130C452047CF88ADD2 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakSessionManager::SendToHost(System.UInt32,System.Object[],Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_SendToHost_m5A862A6E62F2C68946CE33BBBE00070F7FD44D26 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, uint32_t ___tag0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs1, uint8_t ___tt2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Loak.Unity.LoakSessionManager::StartMultiplayerSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_StartMultiplayerSession_mA837C7658C31D9C63694CC5C6C5EBF26A17E429E (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakSessionManager::SendToAll(System.UInt32,System.Guid,System.Object[],Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_SendToAll_mE8F8D2359E9A01DF6B4683670B568ACB0BF93E4A (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, uint32_t ___tag0, Guid_t ___origin1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs2, uint8_t ___tt3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::get_Count()
inline int32_t Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445 (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*, const RuntimeMethod*))Dictionary_2_get_Count_mF6D5ED77BA9FBAAD59EF5BAF8999C13EAB376006_gshared)(__this, method);
}
// System.Void Loak.Unity.LoakSessionManager::SendToPeer(System.UInt32,Niantic.ARDK.Networking.IPeer,System.Object[],Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_SendToPeer_m13D0788DFF015CE2EA973F6419EA9596ADC6793D (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, uint32_t ___tag0, RuntimeObject* ___target1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs2, uint8_t ___tt3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Guid>::.ctor()
inline void List_1__ctor_m6459CF09B306447EAD4BE3AA9AFA0A834A231274 (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15*, const RuntimeMethod*))List_1__ctor_m6459CF09B306447EAD4BE3AA9AFA0A834A231274_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::GetEnumerator()
inline Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C Dictionary_2_GetEnumerator_mE2AB14A0B5A0123E0E21CB828AA20339D51A0EA3 (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C (*) (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mB49B0C517100C32E16F152131A91071EB3428CBB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,Loak.Unity.LoakRoomManagement/Player>::Dispose()
inline void Enumerator_Dispose_m788DD6A9A71FFEF6231D041B90ACA616B6062172 (Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C*, const RuntimeMethod*))Enumerator_Dispose_m7069AFB2C344B6E6CFC1046EC160E9537D6255DA_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,Loak.Unity.LoakRoomManagement/Player>::get_Current()
inline KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35 Enumerator_get_Current_m5ED2463AFC7EE03A9773956851811667A1F30BA6_inline (Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35 (*) (Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C*, const RuntimeMethod*))Enumerator_get_Current_mCA547978C08237FB95FE2E694CAA1EE3BC9CBBBB_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m487F6D5D00341DBFAA6CF2127BACFFE3B67A0429_inline (KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Guid>::Add(T)
inline void List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_inline (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* __this, Guid_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15*, Guid_t, const RuntimeMethod*))List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_gshared_inline)(__this, ___item0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::get_Value()
inline Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* KeyValuePair_2_get_Value_mFE70DDF2FA91865CBE3C5013297F1B6874D6B875_inline (KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35* __this, const RuntimeMethod* method)
{
	return ((  Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* (*) (KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,Loak.Unity.LoakRoomManagement/Player>::MoveNext()
inline bool Enumerator_MoveNext_mF382B27F4C37DE6EC8245019C1E5847F769D889F (Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C*, const RuntimeMethod*))Enumerator_MoveNext_m292DFC3775CE846E9E83364F64992769595376ED_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.Guid>::ToArray()
inline GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* List_1_ToArray_m0A1FF0AB691CD0243AAB6D4D5E9866CC5E5935AF (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* __this, const RuntimeMethod* method)
{
	return ((  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* (*) (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15*, const RuntimeMethod*))List_1_ToArray_m0A1FF0AB691CD0243AAB6D4D5E9866CC5E5935AF_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1398A7684BBFE794CD38D6C2D5558D861801B219 (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mADEF13A6F00847BA930B57377C0F34719842FE6A_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, Guid_t, const RuntimeMethod*))Dictionary_2_get_Item_m387DE0E7090B01FCF6F61CF76D8FADF7EC1DF151_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::Remove(TKey)
inline bool Dictionary_2_Remove_m3ACC07363CE8359A9083172D685660E4ADC4C002 (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::Remove(TKey)
inline bool Dictionary_2_Remove_m9250AD4440543EAF799D581494E13DA2CB597B4F (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* __this, Guid_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mF52F83A179ACE0E308B993508A68C35895ED5D8F_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA180309A777C8CBF81E0E6D32475343386BD5D6A (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, Guid_t ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, Guid_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_m33B42C2DBAD6AA659C75AE78EB373B8577F9710B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Loak.Unity.LoakRoomManagement/Player::.ctor(System.Guid,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m521FA2C6FDD1DC8CB8F939D9181F3D3D76E2C872 (Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* __this, Guid_t ___identifier0, String_t* ___username1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mDD268362D5FC4AA875D0B30248843584762ACCE6 (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* __this, Guid_t ___key0, Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*, Guid_t, Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474*, const RuntimeMethod*))Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TMP_Text>(System.Boolean)
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF3B6DB0E3540E6D731056FABDC9355991E86B460 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___includeInactive0, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>::.ctor()
inline void Dictionary_2__ctor_m746D063B295CFF9679A08F8B0DB8E956D6DB125B (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*, const RuntimeMethod*))Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, const RuntimeMethod*))Dictionary_2__ctor_m47DD6DE10DF49155FCF329CC0B0FC21C23EDA26A_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TMP_Text>(System.Boolean)
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m526F7A298FA1A1F881BF8D4F0E4AE2A7E3275278 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF44830CCE504347DFE1E61EC5F4E02A407D8122C_gshared)(__this, ___includeInactive0, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Image>(System.Boolean)
inline ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m193BF48016B0D18A550E2A60372534FC4E4A7720 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared)(__this, ___includeInactive0, method);
}
// T UnityEngine.Object::FindObjectOfType<Niantic.ARDK.Extensions.Meshing.ARMeshManager>(System.Boolean)
inline ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* Object_FindObjectOfType_TisARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A_mE34CD19B4BFFDDE0B8E855A37DA54EB0084B344E (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___includeInactive0, method);
}
// System.Void Niantic.ARDK.Extensions.Meshing.ARMeshManager::set_GenerateUnityMeshes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARMeshManager_set_GenerateUnityMeshes_m7E6719F60798AD022F0F9F08716FBB780359D839 (ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakScanner::StartScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakScanner_StartScan_mBD02D2E11A1955C3AA4A73DE679810281AC23802 (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Niantic.ARDK.Extensions.Meshing.ARMeshManager::get_MeshRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARMeshManager_get_MeshRoot_m89D5258EFCD80E8AB089469ACA1DD30EF3EA8307 (ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Loak.Unity.LoakScanner::EndScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoakScanner_EndScan_mA151C4E2FDB217E6CD105BB3C63B389649EB153F (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakScanner/<EndScan>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndScanU3Ed__18__ctor_m03220494CA2D3D8851ED4975A513A08F973D71CF (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void Loak.Unity.LoakSessionManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_Initialize_mD0D255867F920FD99FE7173D867582D325E5A1FF (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.Networking.MultipeerNetworkingFactory::Create(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipeerNetworkingFactory_Create_mE9B46C5208FD348199D7B5A090412D9C9795416A (Guid_t ___stageIdentifier0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64 (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1 (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47 (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47_gshared)(__this, ___object0, ___method1, method);
}
// Niantic.ARDK.AR.IARSession Niantic.ARDK.AR.ARSessionFactory::Create(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSessionFactory_Create_m24CC99F4E7C634039365DF1558EE2708C925A559 (Guid_t ___stageIdentifier0, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Networking.IARNetworking Niantic.ARDK.AR.Networking.ARNetworkingFactory::Create(Niantic.ARDK.AR.IARSession,Niantic.ARDK.Networking.IMultipeerNetworking)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARNetworkingFactory_Create_m3242C944C54252E30AAB26C7BC294B286D5D5FDB (RuntimeObject* ___session0, RuntimeObject* ___networking1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336 (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336_gshared)(__this, ___object0, ___method1, method);
}
// Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration Niantic.ARDK.AR.Configuration.ARWorldTrackingConfigurationFactory::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARWorldTrackingConfigurationFactory_Create_m3ACFE8B7DEE0D1C1F58DF1900C6B893175E5B8FF (const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Boolean Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::get_IsHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectedArgs_get_IsHost_mA2DF2037DBF198DE7B431749F764F04D3900E16E (ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline (PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Niantic.ARDK.Networking.IPeer>::Invoke(T0)
inline void UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228 (UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763* __this, RuntimeObject* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763*, RuntimeObject*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.AR.Networking.PeerState Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) ;
// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs::get_Peer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline (PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3 (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySerializer_Serialize_m72BE3A3553799FBC36EA7FA7D810CAEB74EB7886 (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Byte[] Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::CopyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PeerDataReceivedArgs_CopyData_mD5E32ECFC23052C9667E55A0EBB17FC4F1951A5B (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::Deserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryDeserializer_Deserialize_mC0CC959618835E8E7A422B13502267F998949449 (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* __this, const RuntimeMethod* method) ;
// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t PeerDataReceivedArgs_get_Tag_m40BCD818739E964C1B6D0BC363D44A77155E9962_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.UInt32,System.Guid,System.Object[]>::Invoke(T0,T1,T2)
inline void UnityEvent_3_Invoke_mEC1DF4F74F3C4F73F7B307FEC742D3F0738A3627 (UnityEvent_3_t1F9672EBEE1A8766C2B174829626913EB758A5DD* __this, uint32_t ___arg00, Guid_t ___arg11, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arg22, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t1F9672EBEE1A8766C2B174829626913EB758A5DD*, uint32_t, Guid_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))UnityEvent_3_Invoke_m6BC52785E72247FF6546FD44864214F95F40EF0C_gshared)(__this, ___arg00, ___arg11, ___arg22, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m4C3C0C48B0DC5EEFA287EB6AFE994C148EEEED4E (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, Guid_t ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, Guid_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_set_Item_m5C6C0F6A08D2742138B08FB9B91FA19B58F1F5D3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.GameObject>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6DF00FC5CE2FBB9A312E31C886649B1EDCFC3BBA (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* __this, Guid_t ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*, Guid_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**, const RuntimeMethod*))Dictionary_2_TryGetValue_mE1D4EB8E35047347D05CF24CE7482F447D77EB9D_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BackButton::BackScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton_BackScene_m76F497958CE31CD52ABF9E6FDCEC0868540E0EC0 (BackButton_tDD46B24681B87D968EA33D516F8A7568B81CC833* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void BackButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButton__ctor_m5FE4E3375B6AEBB9A1DEE95E8D7BDA753067EA7F (BackButton_tDD46B24681B87D968EA33D516F8A7568B81CC833* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Buttons::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_OnPointerDown_m078B4014E9C12B721F4183C45B1FAAEA1F87C78B (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Buttons_OnPointerDown_m078B4014E9C12B721F4183C45B1FAAEA1F87C78B_RuntimeMethod_var)));
	}
}
// System.Void Buttons::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_OnPointerUp_m0B3353FB2E99AE947CD62BE7F61AFF7A495594E2 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Buttons_OnPointerUp_m0B3353FB2E99AE947CD62BE7F61AFF7A495594E2_RuntimeMethod_var)));
	}
}
// System.Void Buttons::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_Start_mDAD22B1E24D7761E4DA1006CD7210B82EBAE161A (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Buttons::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_Update_m40B6956AC28222E875D6ACF29A0A5D22DEE54650 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Buttons::IWasClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_IWasClicked_mCFED121A36FD9643D46B95789FF54B2AE630A428 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5F9835A152F2BA019EBD6CEFB449507FEB9523);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Clicked!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9E5F9835A152F2BA019EBD6CEFB449507FEB9523, NULL);
		// }
		return;
	}
}
// System.Void Buttons::ChangeSceneGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_ChangeSceneGame_m23909D1FB34B02AAD6387E3DE85D0C0AD136CC07 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void Buttons::ChangeSceneMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_ChangeSceneMenu_mA15100D844B835D62E576F26F7EA6B5FDF67FF1B (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void Buttons::ChangeSceneEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_ChangeSceneEnd_mA1FE22BC37709ABDC9CF218A8C19A3B23A052953 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void Buttons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons__ctor_m3217EFBF53FE9D652EF123BDA4A06F98E196441D (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CompassManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassManager_Start_mE3F07E474013165A6421E2807EC98FB1BE3AA63F (CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeGame();
		CompassManager_InitializeGame_mEB62B88E82921B512FB6284660C81781BFE88CA2(__this, NULL);
		// _camera = ARSceneCamera.GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ARSceneCamera_5;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->____camera_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void CompassManager::InitializeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassManager_InitializeGame_mEB62B88E82921B512FB6284660C81781BFE88CA2 (CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A456B12AD9BD5E63FDCC0D09B7E408B87DC0443);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!SystemInfo.supportsAccelerometer || !SystemInfo.supportsGyroscope)
		bool L_0;
		L_0 = SystemInfo_get_supportsAccelerometer_mDD94E914406FBF282CCECEFF79F80A3E5ECC9559(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = SystemInfo_get_supportsGyroscope_m98477EC99D88396F076A93EF5C28A6129DC4E211(NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.Log("Accelerometer or Compass not supported on this device");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6A456B12AD9BD5E63FDCC0D09B7E408B87DC0443, NULL);
		// return;
		goto IL_0033;
	}

IL_0025:
	{
		// Input.compass.enabled = true;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_3;
		L_3 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_3);
		Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9(L_3, (bool)1, NULL);
		// return;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Int32 CompassManager::GetCurrentHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompassManager_GetCurrentHeading_mD7179BBC25F76B9D1C336B090DBF567365CDEC6E (CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int currentHeadingInt = (int)Input.compass.trueHeading;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_0;
		L_0 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C(L_0, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		// return currentHeadingInt;
		int32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void CompassManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassManager_Update_mA02A7597F3479A41C162C18C7C851FE4E5478C71 (CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38940A425CDB40C3E9E5BEEAF6624FABC8A5A6E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	{
		// float actualheading = Input.compass.trueHeading;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_0;
		L_0 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C(L_0, NULL);
		V_0 = L_1;
		// string actualheadingstr = actualheading.ToString("F1");
		String_t* L_2;
		L_2 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		V_1 = L_2;
		// initialHeadingText.text = "actual heading = " + actualheadingstr;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___initialHeadingText_4;
		String_t* L_4 = V_1;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral38940A425CDB40C3E9E5BEEAF6624FABC8A5A6E3, L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void CompassManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompassManager__ctor_mB9412D49558EFDEA43DA201CA29AD3C212FC7D80 (CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HitTextBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTextBehaviour_Start_m6E6436D826518ACB3597C3A4E14CB157EC39EA06 (HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* __this, const RuntimeMethod* method) 
{
	{
		// text.color = new Color(text.color.r, text.color.g, text.color.b, 0.0f);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___text_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___text_4;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.___r_0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___text_4;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.___g_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___text_4;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), L_3, L_6, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_10);
		// }
		return;
	}
}
// System.Void HitTextBehaviour::fadeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTextBehaviour_fadeout_m7C3D490E750F5F9D2FF2148385FEF65FDA9A84E3 (HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(FadeOutCoroutine());
		RuntimeObject* L_0;
		L_0 = HitTextBehaviour_FadeOutCoroutine_mBE0258BEC363590AB5F0DDD52C3B4D38A1F1EBCD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator HitTextBehaviour::FadeOutCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HitTextBehaviour_FadeOutCoroutine_mBE0258BEC363590AB5F0DDD52C3B4D38A1F1EBCD (HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* L_0 = (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324*)il2cpp_codegen_object_new(U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutCoroutineU3Ed__4__ctor_m05E0F39E59F2DE8314076BD5BA5A1285366CB11E(L_0, 0, NULL);
		U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void HitTextBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTextBehaviour_Update_m4BBA8F759E5646FC1B18328341D6B86B1CD15E3A (HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HitTextBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTextBehaviour__ctor_m3E6E0F3F825A7F4F60D43E1AB937F3F2367E9D5A (HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeDuration = 2.0f;
		__this->___fadeDuration_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HitTextBehaviour/<FadeOutCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoroutineU3Ed__4__ctor_m05E0F39E59F2DE8314076BD5BA5A1285366CB11E (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HitTextBehaviour/<FadeOutCoroutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoroutineU3Ed__4_System_IDisposable_Dispose_m388A607756A357B2C9CAEB8B81A746786939073D (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HitTextBehaviour/<FadeOutCoroutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutCoroutineU3Ed__4_MoveNext_m84275526D4E0DAA0C5466DCD1B3A987AA27D8593 (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0136;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Color startColor = new Color(text.color.r, text.color.g, text.color.b, 1.0f);
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3->___text_4;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.___r_0;
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = L_7->___text_4;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___g_1;
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___text_4;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), L_6, L_10, L_14, (1.0f), /*hidden argument*/NULL);
		__this->___U3CstartColorU3E5__1_3 = L_15;
		// float elapsed = 0.0f;
		__this->___U3CelapsedU3E5__2_4 = (0.0f);
		// Color endColor = new Color(text.color.r, text.color.g, text.color.b, 0.0f);
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = L_16->___text_4;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_17);
		float L_19 = L_18.___r_0;
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = L_20->___text_4;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_21);
		float L_23 = L_22.___g_1;
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_24 = __this->___U3CU3E4__this_2;
		NullCheck(L_24);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = L_24->___text_4;
		NullCheck(L_25);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_25);
		float L_27 = L_26.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), L_19, L_23, L_27, (0.0f), /*hidden argument*/NULL);
		__this->___U3CendColorU3E5__3_5 = L_28;
		goto IL_013e;
	}

IL_00ce:
	{
		// float t = Mathf.Clamp01(elapsed / fadeDuration);
		float L_29 = __this->___U3CelapsedU3E5__2_4;
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_30 = __this->___U3CU3E4__this_2;
		NullCheck(L_30);
		float L_31 = L_30->___fadeDuration_5;
		float L_32;
		L_32 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_29/L_31)), NULL);
		__this->___U3CtU3E5__4_6 = L_32;
		// text.color = Color.Lerp(startColor, endColor, t);
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_33 = __this->___U3CU3E4__this_2;
		NullCheck(L_33);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = L_33->___text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = __this->___U3CstartColorU3E5__1_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___U3CendColorU3E5__3_5;
		float L_37 = __this->___U3CtU3E5__4_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_35, L_36, L_37, NULL);
		NullCheck(L_34);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_38);
		// elapsed += Time.deltaTime;
		float L_39 = __this->___U3CelapsedU3E5__2_4;
		float L_40;
		L_40 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedU3E5__2_4 = ((float)il2cpp_codegen_add(L_39, L_40));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0136:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_013e:
	{
		// while (elapsed < fadeDuration)
		float L_41 = __this->___U3CelapsedU3E5__2_4;
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_42 = __this->___U3CU3E4__this_2;
		NullCheck(L_42);
		float L_43 = L_42->___fadeDuration_5;
		V_1 = (bool)((((float)L_41) < ((float)L_43))? 1 : 0);
		bool L_44 = V_1;
		if (L_44)
		{
			goto IL_00ce;
		}
	}
	{
		// text.color = endColor;
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_45 = __this->___U3CU3E4__this_2;
		NullCheck(L_45);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_46 = L_45->___text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = __this->___U3CendColorU3E5__3_5;
		NullCheck(L_46);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_46, L_47);
		// }
		return (bool)0;
	}
}
// System.Object HitTextBehaviour/<FadeOutCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutCoroutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7C484C55950596B37B3FFD6D6833935B841839D4 (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HitTextBehaviour/<FadeOutCoroutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m0D6351052F31F799ACCA69FA02795AEB95EF313B (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m0D6351052F31F799ACCA69FA02795AEB95EF313B_RuntimeMethod_var)));
	}
}
// System.Object HitTextBehaviour/<FadeOutCoroutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutCoroutineU3Ed__4_System_Collections_IEnumerator_get_Current_m4FD1B860AD0EF0E87FD9094567A03DB81E3F2314 (U3CFadeOutCoroutineU3Ed__4_tF155ABEF6C4FB51EA505D453587DB5A1D2C70324* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeshTagger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTagger_Start_m4EA717EFEADF0D78785678430B8E0FA85501905C (MeshTagger_t121159DC561D8038DB1F007D2E157A47D7A0CC52* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MeshTagger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTagger_Update_mA0FABA4AC3268DFCD3567217CA6994A59F4BE710 (MeshTagger_t121159DC561D8038DB1F007D2E157A47D7A0CC52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (Transform child in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_0010_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// child.gameObject.tag = "Mesh";
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
				NullCheck(L_8);
				GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_8, _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821, NULL);
			}

IL_002f_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void MeshTagger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshTagger__ctor_mD049736592D118F98405A409FDF0407EB4E9BA67 (MeshTagger_t121159DC561D8038DB1F007D2E157A47D7A0CC52* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NextButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextButton_Start_m36ACE3E6D3FCC8ABAAF98787BF20AA6025E315FA (NextButton_t2C45B35301B0C4805E1C10DFAAF0C3F458ADB720* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NextButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextButton_Update_mBA09BD1C806796E4ADD6C57E837610876D3D6CD7 (NextButton_t2C45B35301B0C4805E1C10DFAAF0C3F458ADB720* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NextButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextButton__ctor_mB172E60807762C2989F6B7E2F9B8351D0DF78D4F (NextButton_t2C45B35301B0C4805E1C10DFAAF0C3F458ADB720* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReplayButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayButton_Start_mFDE0CD5B66693EEC8FDFE837F1336763D3AC88D9 (ReplayButton_t96D503EAA80022688814C658167E3B86F9C2E41D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ReplayButton::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayButton_RestartGame_mAC2E794768E023B478C5F83CB433F9E4829CAF84 (ReplayButton_t96D503EAA80022688814C658167E3B86F9C2E41D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void ReplayButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayButton_Update_m62946064190319C0B0C3BFAEC50A40D844C8F6CC (ReplayButton_t96D503EAA80022688814C658167E3B86F9C2E41D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ReplayButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplayButton__ctor_m709B8BBC40288CC124E378F13F792E506E36154B (ReplayButton_t96D503EAA80022688814C658167E3B86F9C2E41D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreAccesor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAccesor_Start_mC24698E9C155465242457FDBDB47F04D68DB3FCA (ScoreAccesor_t09AFDF4EAA911822900F6E06764A7D5526928C4D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreAccesor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAccesor_Update_m6A317AA556EA90CDCA3BD4226D0E4BDA94A1D1DA (ScoreAccesor_t09AFDF4EAA911822900F6E06764A7D5526928C4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = ScoreSingleton.Instance.lastGameScore;
		ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* L_0 = ((ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_StaticFields*)il2cpp_codegen_static_fields_for(ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___lastGameScore_5;
		__this->___score_5 = L_1;
		// scoreText.text = score.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___scoreText_4;
		int32_t* L_3 = (&__this->___score_5);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void ScoreAccesor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAccesor__ctor_m78D30F1D359BCEB9593F0DAD6CD5E1A05E2D9568 (ScoreAccesor_t09AFDF4EAA911822900F6E06764A7D5526928C4D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_m7E00370AD0134DB3AEA647B9BA69055725AA83FE (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC_mC6AFE40A3353EBA2ADD432F4B1370574C8CE83EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D7A526F566683A2C99AD67349808457812AF62D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastdirectionIndex = 0;
		__this->___lastdirectionIndex_13 = 0;
		// cumulativeScore = 0;
		__this->___cumulativeScore_14 = 0;
		// ARCamera = GameObject.Find("ARSceneCamera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0D7A526F566683A2C99AD67349808457812AF62D, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___ARCamera_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ARCamera_4), (void*)L_1);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_8), (void*)L_2);
		// hitTextBehaviour = GetComponent<HitTextBehaviour>();
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_3;
		L_3 = Component_GetComponent_TisHitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC_mC6AFE40A3353EBA2ADD432F4B1370574C8CE83EE(__this, Component_GetComponent_TisHitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC_mC6AFE40A3353EBA2ADD432F4B1370574C8CE83EE_RuntimeMethod_var);
		__this->___hitTextBehaviour_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitTextBehaviour_15), (void*)L_3);
		// hitText = hitText.GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___hitText_6;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5;
		L_5 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_4, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___hitText_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitText_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void ScoreManager::NewSpear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_NewSpear_m5AF4EBE10CD4FAED3343EF6DE2E956895FA10FB7 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int randomDirection = Random.Range(0, 8);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 8, NULL);
		V_0 = L_0;
		// directionText.text = directionstr[randomDirection];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___directionText_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___directionstr_12;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_5);
		// lastdirectionIndex = randomDirection; //this wil keep track of current goal
		int32_t L_6 = V_0;
		__this->___lastdirectionIndex_13 = L_6;
		// }
		return;
	}
}
// System.Void ScoreManager::CalculateHit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_CalculateHit_m5E17D151A0F3534381967072B6A7BC8399AE0023 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, int32_t ___shotdirection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D332B36ED3D749630920EA48C050FE4DA13756D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9442C7989F7BA569512A180CBB9C63F28805AD7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Mathf.Abs(shotdirection - directionint[lastdirectionIndex]) <= 30)
		int32_t L_0 = ___shotdirection0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___directionint_11;
		int32_t L_2 = __this->___lastdirectionIndex_13;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(((int32_t)il2cpp_codegen_subtract(L_0, L_4)), NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)30)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0095;
		}
	}
	{
		// hitText.text = "HIT!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___hitText_6;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral9D332B36ED3D749630920EA48C050FE4DA13756D);
		// hitText.color = new Color(0.353f, 0.839f, 0.384f, 1.0f);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___hitText_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (0.352999985f), (0.838999987f), (0.384000003f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// hitTextBehaviour.fadeout();
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_10 = __this->___hitTextBehaviour_15;
		NullCheck(L_10);
		HitTextBehaviour_fadeout_m7C3D490E750F5F9D2FF2148385FEF65FDA9A84E3(L_10, NULL);
		// cumulativeScore += 1;
		int32_t L_11 = __this->___cumulativeScore_14;
		__this->___cumulativeScore_14 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// audioSource.clip = hit;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___audioSource_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->___hit_9;
		NullCheck(L_12);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_12, L_13, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___audioSource_8;
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
		goto IL_0116;
	}

IL_0095:
	{
		// ScoreSingleton.Instance.AddScore(cumulativeScore);
		ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* L_15 = ((ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_StaticFields*)il2cpp_codegen_static_fields_for(ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_16 = __this->___cumulativeScore_14;
		NullCheck(L_15);
		ScoreSingleton_AddScore_mCA6C2A615CD39FFC253E7BC75BBB7B53CEF3259A(L_15, L_16, NULL);
		// hitText.text = "Miss...";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___hitText_6;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, _stringLiteralC9442C7989F7BA569512A180CBB9C63F28805AD7);
		// hitText.color = new Color(0.839f, 0.353f, 0.353f, 1.0f);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = __this->___hitText_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), (0.838999987f), (0.352999985f), (0.352999985f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		// hitTextBehaviour.fadeout();
		HitTextBehaviour_tA40B4D47BC3D4147541B8F05E54F750E5F8504DC* L_20 = __this->___hitTextBehaviour_15;
		NullCheck(L_20);
		HitTextBehaviour_fadeout_m7C3D490E750F5F9D2FF2148385FEF65FDA9A84E3(L_20, NULL);
		// audioSource.clip = miss;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___audioSource_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_22 = __this->___miss_10;
		NullCheck(L_21);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_21, L_22, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___audioSource_8;
		NullCheck(L_23);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_23, NULL);
		// cumulativeScore = 0;
		__this->___cumulativeScore_14 = 0;
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void ScoreManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Update_m68EC29B04B4118B51E293C1C3077D87FF3FE7811 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = ARCamera.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___ARCamera_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// cumScoreText.text = cumulativeScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___cumScoreText_7;
		int32_t* L_5 = (&__this->___cumulativeScore_14);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_mE5C264C34A9CBBAB72DCF99CCCC9841AF8F9FEE6 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____19DC465D7F6D4CB213BB555C91585CA9BCE5919DE6CF433321767153FE8265E6_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CFD62DDFC0DC7E1C2B03C41E31003CCD32ABB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral161FBCF2832F6B9B09EFBDE41ED1DEA4E44FD8A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral367C784520DD366871AA98DB46837916381AF345);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB4C068CE2E399B821DFB40520B7F37AEB8457C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78DEBC08EC97631284B57E948D7183E8B7A39284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8593DB2A61302DE8F5ABB531DC0DBEC5C34C43E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88180CF406F8E1FE964A06A0B540BDFAB073849B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral967CEB06C24E0743D0F8F4EB9B8D012B394E4047);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] directionint = { 0, 45, 90, 135, 180, 225, 270, 315 }; //N, NE, E, SE, S, SW, W, NW
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____19DC465D7F6D4CB213BB555C91585CA9BCE5919DE6CF433321767153FE8265E6_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___directionint_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directionint_11), (void*)L_1);
		// private string[] directionstr = { "North", "North-East", "East", "South-East", "South", "South-West", "West", "North-West" }; //N, NE, E, SE, S, SW, W, NW
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral8593DB2A61302DE8F5ABB531DC0DBEC5C34C43E4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8593DB2A61302DE8F5ABB531DC0DBEC5C34C43E4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral06CFD62DDFC0DC7E1C2B03C41E31003CCD32ABB3);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral06CFD62DDFC0DC7E1C2B03C41E31003CCD32ABB3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral6EB4C068CE2E399B821DFB40520B7F37AEB8457C);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6EB4C068CE2E399B821DFB40520B7F37AEB8457C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral88180CF406F8E1FE964A06A0B540BDFAB073849B);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral88180CF406F8E1FE964A06A0B540BDFAB073849B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral161FBCF2832F6B9B09EFBDE41ED1DEA4E44FD8A0);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral161FBCF2832F6B9B09EFBDE41ED1DEA4E44FD8A0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral367C784520DD366871AA98DB46837916381AF345);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral367C784520DD366871AA98DB46837916381AF345);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral967CEB06C24E0743D0F8F4EB9B8D012B394E4047);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral967CEB06C24E0743D0F8F4EB9B8D012B394E4047);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral78DEBC08EC97631284B57E948D7183E8B7A39284);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral78DEBC08EC97631284B57E948D7183E8B7A39284);
		__this->___directionstr_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directionstr_12), (void*)L_11);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreSingleton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSingleton_Awake_m18B1A0E0F8ABE8837FD2AC084CDE538A23D71DF6 (ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Instance == null)
		ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* L_0 = ((ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_StaticFields*)il2cpp_codegen_static_fields_for(ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Instance = this;
		((ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_StaticFields*)il2cpp_codegen_static_fields_for(ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_StaticFields*)il2cpp_codegen_static_fields_for(ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject); //this will make sure the object is not destroyed when a new scene is loaded
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_3, NULL);
		goto IL_0034;
	}

IL_0026:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ScoreSingleton::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSingleton_AddScore_mCA6C2A615CD39FFC253E7BC75BBB7B53CEF3259A (ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// lastGameScore = value;
		int32_t L_0 = ___value0;
		__this->___lastGameScore_5 = L_0;
		// }
		return;
	}
}
// System.Void ScoreSingleton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSingleton_Update_m3A3C0391200E34DDAD3827E9CBCC5DF5301C29E7 (ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreSingleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreSingleton__ctor_m7836A46320F884A55AEC63504AEAA3CE7E86AB4F (ScoreSingleton_t792B845EB663B55499CDCD4B0993C4BD640B9CBF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreTextBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTextBehaviour_Start_m165EA40BFDFAAEDE31735F3EA2629528B6EF59FC (ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreTextBehaviour::CreateScoreText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTextBehaviour_CreateScoreText_mCC70571A7BD1AEE4AA077757E55D1D8895A401CB (ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* __this, int32_t ___angleshot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FEC2DB37F967EF725B7E8ED4E7B3A0134059D9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A7AE1E041886438F39665D7B7B89B8220792EE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (angleshot != null)
		V_0 = (bool)1;
		// GameObject scoreText = Instantiate(_scoreTextPrefab.gameObject, _scoreTextUIPanel.transform);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->____scoreTextPrefab_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____scoreTextUIPanel_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_1, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_1 = L_4;
		// scoreText.GetComponent<TextMeshProUGUI>().text = "Spear shot to: " + angleshot + "?";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6;
		L_6 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_5, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___angleshot0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral54A7AE1E041886438F39665D7B7B89B8220792EE, L_7, _stringLiteral4FEC2DB37F967EF725B7E8ED4E7B3A0134059D9A, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void ScoreTextBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTextBehaviour_Update_mF96C66B850491E0B8D58623599B2EA03F26FD75F (ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreTextBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreTextBehaviour__ctor_m72D238E4F7D5D09CA8D047F7753225CA99840E83 (ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> _scoreTexts = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____scoreTexts_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scoreTexts_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 SpearController::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SpearController_get_Position_mBAC6AC3E16B20931AB927F4BD96B002F9E386275 (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SpearController::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_set_Position_mA0CE096536766F9D9764731D7B643DAFCE224415 (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Single SpearController::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpearController_get_Score_mAF21B18AD36472A3AAE1365B838A2E400C4371D6 (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, const RuntimeMethod* method) 
{
	{
		// public float Score { get; set; }
		float L_0 = __this->___U3CScoreU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SpearController::set_Score(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_set_Score_mCC516DE52D9048982A37B40D8D1CB7E74FFF374C (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Score { get; set; }
		float L_0 = ___value0;
		__this->___U3CScoreU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void SpearController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_Start_m4E3D97FF65365E5A654377828CE03688D791D54B (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_6), (void*)L_0);
		// bcSpear = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_1;
		L_1 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___bcSpear_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bcSpear_7), (void*)L_1);
		// bcSpearTip = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2;
		L_2 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___bcSpearTip_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bcSpearTip_8), (void*)L_2);
		// bcSpear.enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_3 = __this->___bcSpear_7;
		NullCheck(L_3);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_3, (bool)0, NULL);
		// bcSpearTip.enabled = false;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___bcSpearTip_8;
		NullCheck(L_4);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SpearController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_Update_mAA5E9504B041F3332E7BD2D12F21BAD74DCE123F (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SpearController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_OnTriggerEnter_m812F32573A2E119AC2CF08207C1A037EAF07B86D (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3638AC7950A71A82C59C07CE85133C6A8269515C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD69A24C7BBC466505FD98D644D1165897EDFB076);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_2 = NULL;
	{
		// if (other.gameObject.tag == "Mesh")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0096;
		}
	}
	{
		// Debug.Log("Hit Mesh");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD69A24C7BBC466505FD98D644D1165897EDFB076, NULL);
		// rb.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_6;
		NullCheck(L_5);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_5, (bool)1, NULL);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_10), (void*)L_6);
		// int randomIndex = UnityEngine.Random.Range(0, audioClips.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_7 = __this->___audioClips_9;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		// AudioClip randomClip = audioClips[randomIndex];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_9 = __this->___audioClips_9;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// audioSource.clip = randomClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = __this->___audioSource_10;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = V_2;
		NullCheck(L_13);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_13, L_14, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = __this->___audioSource_10;
		NullCheck(L_15);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_15, NULL);
		// Debug.Log("Sound played");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3638AC7950A71A82C59C07CE85133C6A8269515C, NULL);
		// bcSpear.enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_16 = __this->___bcSpear_7;
		NullCheck(L_16);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_16, (bool)0, NULL);
		// bcSpearTip.enabled = false;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_17 = __this->___bcSpearTip_8;
		NullCheck(L_17);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_17, (bool)0, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void SpearController::PropelForward(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_PropelForward_mF4740C53E68AA9CBDE2803EA9DDB3448A90A7CF0 (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, float ___speed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C511D2DA5E5CDD57CB15B3E68697D759B5F4391);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// Vector3 direction = (transform.forward + (transform.up / 2)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_3, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
		V_2 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_0 = L_6;
		// if (speed > 25)
		float L_7 = ___speed0;
		V_3 = (bool)((((float)L_7) > ((float)(25.0f)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// speed = 25;
		___speed0 = (25.0f);
	}

IL_0044:
	{
		// Vector3 force = direction * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = ___speed0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		V_1 = L_11;
		// rb.AddForce(force, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		NullCheck(L_12);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_12, L_13, 1, NULL);
		// Debug.Log("Shot Actual speed: " + speed);
		String_t* L_14;
		L_14 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___speed0), NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8C511D2DA5E5CDD57CB15B3E68697D759B5F4391, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// }
		return;
	}
}
// System.Void SpearController::ShootObject(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController_ShootObject_mA8DC78B8ACDF8F9CBF5AD505AC6DB456C665FCBD (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, float ___impuls0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B5881C16CE5F14FBF1A8F45D547F53320E2343F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bcSpear.enabled = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0 = __this->___bcSpear_7;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, (bool)1, NULL);
		// bcSpearTip.enabled = true;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1 = __this->___bcSpearTip_8;
		NullCheck(L_1);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_1, (bool)1, NULL);
		// PropelForward(impuls);
		float L_2 = ___impuls0;
		SpearController_PropelForward_mF4740C53E68AA9CBDE2803EA9DDB3448A90A7CF0(__this, L_2, NULL);
		// Debug.Log("impuls: " + impuls);
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___impuls0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2B5881C16CE5F14FBF1A8F45D547F53320E2343F, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void SpearController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearController__ctor_m4F5173F3E8B9F882DEC0AD8C8449F27FC3C4FE04 (SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpearManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_Start_m301332A1BBF36B3B53DE58134A0983B677DCE319 (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04_mE1E626661F1EA3FA595C0B4F525AFBCD0FCDEDCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_mE5FDA7070B67615DF36177D7349B893F6E3ECE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99_m8E13AF03B2672C7946A56E7EB3E3ABCC819A43AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _compassManagerScript = CompassManager.GetComponent<CompassManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CompassManager_5;
		NullCheck(L_0);
		CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* L_1;
		L_1 = GameObject_GetComponent_TisCompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04_mE1E626661F1EA3FA595C0B4F525AFBCD0FCDEDCD(L_0, GameObject_GetComponent_TisCompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04_mE1E626661F1EA3FA595C0B4F525AFBCD0FCDEDCD_RuntimeMethod_var);
		__this->____compassManagerScript_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____compassManagerScript_8), (void*)L_1);
		// _scoreTextBehaviour = ScreenManager.GetComponent<ScoreTextBehaviour>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___ScreenManager_6;
		NullCheck(L_2);
		ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* L_3;
		L_3 = GameObject_GetComponent_TisScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99_m8E13AF03B2672C7946A56E7EB3E3ABCC819A43AD(L_2, GameObject_GetComponent_TisScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99_m8E13AF03B2672C7946A56E7EB3E3ABCC819A43AD_RuntimeMethod_var);
		__this->____scoreTextBehaviour_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scoreTextBehaviour_9), (void*)L_3);
		// _scoreManager = GameManager.GetComponent<ScoreManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___GameManager_7;
		NullCheck(L_4);
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_5;
		L_5 = GameObject_GetComponent_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_mE5FDA7070B67615DF36177D7349B893F6E3ECE39(L_4, GameObject_GetComponent_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_mE5FDA7070B67615DF36177D7349B893F6E3ECE39_RuntimeMethod_var);
		__this->____scoreManager_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scoreManager_10), (void*)L_5);
		// LoadSpear(0, new Vector3(0, 0, 0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpearManager_LoadSpear_m317E722264647629D6EDE081ED42367AFA52A3DE(__this, 0, L_6, NULL);
		// lastSwipeTime = Time.time;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSwipeTime_17 = L_7;
		// }
		return;
	}
}
// System.Void SpearManager::LoadSpear(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_LoadSpear_m317E722264647629D6EDE081ED42367AFA52A3DE (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C66A66D0F84902F8C5AC2559D3485EB559BA72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33EE5F654143DB227FC4E3BEF61D303531999B3);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (index < 0 || index >= spearPrefabs.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___index0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___spearPrefabs_4;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("Invalid spear index: " + index);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___index0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral56C66A66D0F84902F8C5AC2559D3485EB559BA72, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// return;
		goto IL_0081;
	}

IL_0034:
	{
		// if (loadedSpears.Count != 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___loadedSpears_11;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.Log("spear already loaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD33EE5F654143DB227FC4E3BEF61D303531999B3, NULL);
		// return;
		goto IL_0081;
	}

IL_0054:
	{
		// GameObject spearObject = Instantiate(spearPrefabs[index], position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___spearPrefabs_4;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_12, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_15;
		// loadedSpears.Add(spearObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = __this->___loadedSpears_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_16);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_16, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _scoreManager.NewSpear();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_18 = __this->____scoreManager_10;
		NullCheck(L_18);
		ScoreManager_NewSpear_m5AF4EBE10CD4FAED3343EF6DE2E956895FA10FB7(L_18, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void SpearManager::ShootSpear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_ShootSpear_m3AAA18D39DA4CEB36DFA8654534A665037F42595 (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, float ___impuls0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288_m7E546DCDD03D9F5C440F5357E72D2329124BFA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F07FDB329D54541CF6BEA00118C3A3FA9AF3D9D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (loadedSpears.Count == 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___loadedSpears_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_006e;
	}

IL_0016:
	{
		// if (loadedSpears.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___loadedSpears_11;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// GameObject spear = loadedSpears[0];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___loadedSpears_11;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_2 = L_7;
		// loadedSpears.Remove(spear);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___loadedSpears_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_8, L_9, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// spear.GetComponent<SpearController>().ShootObject(impuls);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		SpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288* L_12;
		L_12 = GameObject_GetComponent_TisSpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288_m7E546DCDD03D9F5C440F5357E72D2329124BFA9A(L_11, GameObject_GetComponent_TisSpearController_t6C1A70C7D29568DD69BD816A5C6D84279E73A288_m7E546DCDD03D9F5C440F5357E72D2329124BFA9A_RuntimeMethod_var);
		float L_13 = ___impuls0;
		NullCheck(L_12);
		SpearController_ShootObject_mA8DC78B8ACDF8F9CBF5AD505AC6DB456C665FCBD(L_12, L_13, NULL);
		// shotSpears.Add(spear);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___shotSpears_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
		NullCheck(L_14);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		goto IL_006e;
	}

IL_0060:
	{
		// Debug.Log("No spear loaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5F07FDB329D54541CF6BEA00118C3A3FA9AF3D9D, NULL);
		// return;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void SpearManager::SpearScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_SpearScore_m6338681C32BC4027720ABF19862EACFE12A225FA (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int angle = _compassManagerScript.GetCurrentHeading();
		CompassManager_t403EB3C669E7FAA60623A3E87A7B6A46B142ED04* L_0 = __this->____compassManagerScript_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = CompassManager_GetCurrentHeading_mD7179BBC25F76B9D1C336B090DBF567365CDEC6E(L_0, NULL);
		V_0 = L_1;
		// _scoreManager.CalculateHit(angle);
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_2 = __this->____scoreManager_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		ScoreManager_CalculateHit_m5E17D151A0F3534381967072B6A7BC8399AE0023(L_2, L_3, NULL);
		// _scoreTextBehaviour.CreateScoreText(angle);
		ScoreTextBehaviour_t2A2FB54D0A88943D412FE61577E196D772E9AC99* L_4 = __this->____scoreTextBehaviour_9;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ScoreTextBehaviour_CreateScoreText_mCC70571A7BD1AEE4AA077757E55D1D8895A401CB(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void SpearManager::SpearDestroyer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_SpearDestroyer_mB7E4E78BCDF84040507689A0C357E131B5095170 (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (shotSpears.Count > 25)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___shotSpears_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)25)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// GameObject oldestSpear = shotSpears[0];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___shotSpears_12;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_1 = L_4;
		// Destroy(oldestSpear);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// shotSpears.RemoveAt(0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___shotSpears_12;
		NullCheck(L_6);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_6, 0, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void SpearManager::MoveSpearAlong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_MoveSpearAlong_m800E39585D552E16A3FB123A9E94FB47BE5A2DA4 (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB9CD2E11747EC882244656F25262F8FA81D56C8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_5;
	memset((&V_5), 0, sizeof(V_5));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// if (ARcamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___ARcamera_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_014c;
		}
	}
	{
		// if (loadedSpears.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___loadedSpears_11;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0149;
		}
	}
	{
		// foreach (GameObject spear in loadedSpears)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___loadedSpears_11;
		NullCheck(L_6);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_7;
		L_7 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_6, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_003a_1:
			{
				// foreach (GameObject spear in loadedSpears)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_8;
				// Vector3 trackedPos = Camera.main.transform.position;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
				L_9 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
				NullCheck(L_10);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
				V_4 = L_11;
				// trackedPos.y -= 0.2f; //instert lerp later
				float* L_12 = (&(&V_4)->___y_3);
				float* L_13 = L_12;
				float L_14 = *((float*)L_13);
				*((float*)L_13) = (float)((float)il2cpp_codegen_subtract(L_14, (0.200000003f)));
				// spear.transform.position = trackedPos;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
				NullCheck(L_15);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_4;
				NullCheck(L_16);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_17, NULL);
			}

IL_0073_1:
			{
				// foreach (GameObject spear in loadedSpears)
				bool L_18;
				L_18 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// foreach (GameObject spear in loadedSpears)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___loadedSpears_11;
		NullCheck(L_19);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_20;
		L_20 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_19, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_5 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0139:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_5), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_012b_1;
			}

IL_00a0_1:
			{
				// foreach (GameObject spear in loadedSpears)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_5), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_6 = L_21;
				// Vector3 currentRotation = spear.transform.rotation.eulerAngles;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_6;
				NullCheck(L_22);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
				L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
				NullCheck(L_23);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
				L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
				V_12 = L_24;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_12), NULL);
				V_7 = L_25;
				// Vector3 cameraRotation = ARcamera.transform.rotation.eulerAngles;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___ARcamera_13;
				NullCheck(L_26);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
				L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
				NullCheck(L_27);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
				L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
				V_12 = L_28;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
				L_29 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_12), NULL);
				V_8 = L_29;
				// Vector3 targetRotation = new Vector3(currentRotation.x, cameraRotation.y, currentRotation.z);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_7;
				float L_31 = L_30.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_8;
				float L_33 = L_32.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_7;
				float L_35 = L_34.___z_4;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), L_31, L_33, L_35, NULL);
				// Quaternion targetQuaternion = Quaternion.Euler(targetRotation);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_9;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
				L_37 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_36, NULL);
				V_10 = L_37;
				// float rotationSpeed = 0.1f; // Adjust speed as needed
				V_11 = (0.100000001f);
				// spear.transform.rotation = Quaternion.Lerp(spear.transform.rotation, targetQuaternion, rotationSpeed);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_6;
				NullCheck(L_38);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
				L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_6;
				NullCheck(L_40);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
				L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
				NullCheck(L_41);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
				L_42 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_41, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43 = V_10;
				float L_44 = V_11;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
				L_45 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_42, L_43, L_44, NULL);
				NullCheck(L_39);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_39, L_45, NULL);
			}

IL_012b_1:
			{
				// foreach (GameObject spear in loadedSpears)
				bool L_46;
				L_46 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_5), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_00a0_1;
				}
			}
			{
				goto IL_0148;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0148:
	{
	}

IL_0149:
	{
		goto IL_0159;
	}

IL_014c:
	{
		// Debug.Log("AR camera not found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAB9CD2E11747EC882244656F25262F8FA81D56C8, NULL);
	}

IL_0159:
	{
		// }
		return;
	}
}
// System.Void SpearManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager_Update_m3AAB8F9DAF5CB8A8903A337641DE816E644816DF (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C2B6B10EE5CD5FE943937FE1570F2ED3FD6718B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral611268EDF9FD52FBE5D1B55241557D7D2BC4558F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A526BE0B38083B23AE8E2A7D449D75408DDE510);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5B8A31DA57AA99332BFC1DD882603611334F7A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	float V_9 = 0.0f;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// MoveSpearAlong();
		SpearManager_MoveSpearAlong_m800E39585D552E16A3FB123A9E94FB47BE5A2DA4(__this, NULL);
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// isSwiping = true;
		__this->___isSwiping_14 = (bool)1;
		// swipeStartTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___swipeStartTime_15 = L_4;
		// swipeStartPos = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5;
		L_5 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		__this->___swipeStartPos_16 = L_6;
		goto IL_0169;
	}

IL_0055:
	{
		// else if (isSwiping && Input.GetTouch(0).phase == TouchPhase.Ended)
		bool L_7 = __this->___isSwiping_14;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_8;
		L_8 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_8;
		int32_t L_9;
		L_9 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)3))? 1 : 0);
		goto IL_0071;
	}

IL_0070:
	{
		G_B8_0 = 0;
	}

IL_0071:
	{
		V_2 = (bool)G_B8_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0169;
		}
	}
	{
		// lastSwipeTime = Time.time;
		float L_11;
		L_11 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSwipeTime_17 = L_11;
		// float timeInterval = Time.time - swipeStartTime;
		float L_12;
		L_12 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_13 = __this->___swipeStartTime_15;
		V_3 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// Vector2 endPos = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_14;
		L_14 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		V_4 = L_15;
		// Vector2 swipeVector = endPos - swipeStartPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___swipeStartPos_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_16, L_17, NULL);
		V_5 = L_18;
		// if (endPos.y > swipeStartPos.y)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_4;
		float L_20 = L_19.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___swipeStartPos_16);
		float L_22 = L_21->___y_1;
		V_6 = (bool)((((float)L_20) > ((float)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0154;
		}
	}
	{
		// float velocity = swipeVector.magnitude / timeInterval;
		float L_24;
		L_24 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		float L_25 = V_3;
		V_7 = ((float)(L_24/L_25));
		// Debug.Log("velocity: " + velocity);
		String_t* L_26;
		L_26 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_7), NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral611268EDF9FD52FBE5D1B55241557D7D2BC4558F, L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_27, NULL);
		// if (velocity > 900f)
		float L_28 = V_7;
		V_8 = (bool)((((float)L_28) > ((float)(900.0f)))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_0144;
		}
	}
	{
		// float impuls = velocity * 0.01f;
		float L_30 = V_7;
		V_9 = ((float)il2cpp_codegen_multiply(L_30, (0.00999999978f)));
		// SpearScore();
		SpearManager_SpearScore_m6338681C32BC4027720ABF19862EACFE12A225FA(__this, NULL);
		// ShootSpear(impuls);
		float L_31 = V_9;
		SpearManager_ShootSpear_m3AAA18D39DA4CEB36DFA8654534A665037F42595(__this, L_31, NULL);
		// LoadSpear(0, new Vector3(0, 0, 0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		SpearManager_LoadSpear_m317E722264647629D6EDE081ED42367AFA52A3DE(__this, 0, L_32, NULL);
		// Debug.Log("shot spear");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0C2B6B10EE5CD5FE943937FE1570F2ED3FD6718B, NULL);
		goto IL_0151;
	}

IL_0144:
	{
		// Debug.Log("not enough velocity");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6A526BE0B38083B23AE8E2A7D449D75408DDE510, NULL);
	}

IL_0151:
	{
		goto IL_0161;
	}

IL_0154:
	{
		// else { Debug.Log("Swipe was not up"); }
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9F5B8A31DA57AA99332BFC1DD882603611334F7A, NULL);
	}

IL_0161:
	{
		// isSwiping = false;
		__this->___isSwiping_14 = (bool)0;
	}

IL_0169:
	{
		// SpearDestroyer();
		SpearManager_SpearDestroyer_mB7E4E78BCDF84040507689A0C357E131B5095170(__this, NULL);
		// }
		return;
	}
}
// System.Void SpearManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpearManager__ctor_m7E6C4061D7CF9EDAD5EE39F539F60838F70B3B6D (SpearManager_tA5BF1D115238A79AA58B24C6C20C9551C4331367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> loadedSpears = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___loadedSpears_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loadedSpears_11), (void*)L_0);
		// public List<GameObject> shotSpears = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___shotSpears_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shotSpears_12), (void*)L_1);
		// private bool isSwiping = false;
		__this->___isSwiping_14 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_Start_m0186CEC1A412944CA2468485E8FEB0AAE2587531 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StartButton::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_NextScene_mDB2DA14A9719B7604B1FDA41DAA7E697DB1D9345 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_2), NULL);
		V_0 = L_1;
		// int nextSceneIndex = currentSceneIndex + 1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// SceneManager.LoadScene(nextSceneIndex);
		int32_t L_3 = V_1;
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_3, NULL);
		// }
		return;
	}
}
// System.Void StartButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_Update_mE2ADF40812F63A61BFDBC232B9AD2D7936F57654 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StartButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton__ctor_m8454B8AF76546ABE9126D56D36A2AC0DDCA673B3 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextMoveAndFade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMoveAndFade_Start_mE5A681E9259BD50A6F3CC0295D169E01DD2ED890 (TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___m_RectTransform_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RectTransform_6), (void*)L_0);
		// StartCoroutine(MoveAndFade());
		RuntimeObject* L_1;
		L_1 = TextMoveAndFade_MoveAndFade_m61FD69C0CB6EEDE2496A46513524541950B4B5FC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TextMoveAndFade::MoveAndFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMoveAndFade_MoveAndFade_m61FD69C0CB6EEDE2496A46513524541950B4B5FC (TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* L_0 = (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5*)il2cpp_codegen_object_new(U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveAndFadeU3Ed__6__ctor_m3466B00A262F70A0A348C4DCF6FD7FE5C797C5EC(L_0, 0, NULL);
		U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TextMoveAndFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMoveAndFade_Update_mC4D275F37DBBC2277F84D38442628FC90B4D4C65 (TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextMoveAndFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMoveAndFade__ctor_m4C7D169F89BAC0A41C56DC271E102F0E1AFAD599 (TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _moveSpeed = 1f;
		__this->____moveSpeed_4 = (1.0f);
		// [SerializeField] private float _fadeDuration = 3f;
		__this->____fadeDuration_5 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextMoveAndFade/<MoveAndFade>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveAndFadeU3Ed__6__ctor_m3466B00A262F70A0A348C4DCF6FD7FE5C797C5EC (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TextMoveAndFade/<MoveAndFade>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveAndFadeU3Ed__6_System_IDisposable_Dispose_m5ECAEFFEA2FA1D63965C5C12285CE5D257E6AF3E (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TextMoveAndFade/<MoveAndFade>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveAndFadeU3Ed__6_MoveNext_m7E461F0126E37542885133BF19EF68C724661A54 (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00d7;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// TextMeshProUGUI text = GetComponent<TextMeshProUGUI>();
		TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4;
		L_4 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_3, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___U3CtextU3E5__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3E5__1_3), (void*)L_4);
		// Color color = text.color;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___U3CtextU3E5__1_3;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___U3CcolorU3E5__2_4 = L_6;
		// float startTime = Time.time;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__3_5 = L_7;
		goto IL_00df;
	}

IL_0055:
	{
		// m_RectTransform.anchoredPosition += Vector2.up;
		TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8->___m_RectTransform_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
		// float t = Time.time - startTime;
		float L_14;
		L_14 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_15 = __this->___U3CstartTimeU3E5__3_5;
		__this->___U3CtU3E5__4_6 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// color.a = Mathf.Lerp(1, 0, t /  _fadeDuration);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&__this->___U3CcolorU3E5__2_4);
		float L_17 = __this->___U3CtU3E5__4_6;
		TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* L_18 = __this->___U3CU3E4__this_2;
		NullCheck(L_18);
		float L_19 = L_18->____fadeDuration_5;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((1.0f), (0.0f), ((float)(L_17/L_19)), NULL);
		L_16->___a_3 = L_20;
		// text.color = color;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___U3CtextU3E5__1_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___U3CcolorU3E5__2_4;
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d7:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00df:
	{
		// while (color.a > 0)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23 = (&__this->___U3CcolorU3E5__2_4);
		float L_24 = L_23->___a_3;
		V_1 = (bool)((((float)L_24) > ((float)(0.0f)))? 1 : 0);
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_0055;
		}
	}
	{
		// Destroy(gameObject);
		TextMoveAndFade_tE791E48D1D43B8F7584EDE5D522FD77B2CD7442E* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_27, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TextMoveAndFade/<MoveAndFade>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveAndFadeU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D96779875ABE8A9E52C3B75D5C4D60B35028D05 (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TextMoveAndFade/<MoveAndFade>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveAndFadeU3Ed__6_System_Collections_IEnumerator_Reset_m70B1E427FDFA6B83F13F795D1286D2F66BF0E09E (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveAndFadeU3Ed__6_System_Collections_IEnumerator_Reset_m70B1E427FDFA6B83F13F795D1286D2F66BF0E09E_RuntimeMethod_var)));
	}
}
// System.Object TextMoveAndFade/<MoveAndFade>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveAndFadeU3Ed__6_System_Collections_IEnumerator_get_Current_mF2DB5782E58C584225EB6F20864F56E90B721DC8 (U3CMoveAndFadeU3Ed__6_t9D2D478A0CC5B1D8EF416A8D2CA361DE588AD8A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VehicleManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_Start_m0EB97ADBFF74D2B656A6AA05CFD68ACE0EDB888F (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) 
{
	{
		// OnGameStart();
		VehicleManager_OnGameStart_mDD7464C8EDB3318E065E0608ACA1DDC6CC10744A(__this, NULL);
		// }
		return;
	}
}
// System.Void VehicleManager::OnGameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_OnGameStart_mDD7464C8EDB3318E065E0608ACA1DDC6CC10744A (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// ActiveVehicles.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___ActiveVehicles_5;
		NullCheck(L_0);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_0, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// GameObject newVehicle = Instantiate(Vehicle, Vector3.zero, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Vehicle_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_4;
		// ActiveVehicles.Add(newVehicle);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___ActiveVehicles_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VehicleManager::VehiclePositioner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_VehiclePositioner_m89E07CA5FABDC63E8139C39B6A191B39C9DA08CD (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB9CD2E11747EC882244656F25262F8FA81D56C8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (ARcamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___ARcamera_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		// if (ActiveVehicles.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___ActiveVehicles_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		// foreach (GameObject vehicle in ActiveVehicles)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___ActiveVehicles_5;
		NullCheck(L_6);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_7;
		L_7 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_6, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006d_1;
			}

IL_0034_1:
			{
				// foreach (GameObject vehicle in ActiveVehicles)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_8;
				// Vector3 trackedPos = Camera.main.transform.position;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
				L_9 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
				NullCheck(L_10);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
				V_4 = L_11;
				// trackedPos.y -= 0.2f; //instert lerp later
				float* L_12 = (&(&V_4)->___y_3);
				float* L_13 = L_12;
				float L_14 = *((float*)L_13);
				*((float*)L_13) = (float)((float)il2cpp_codegen_subtract(L_14, (0.200000003f)));
				// vehicle.transform.position = trackedPos;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
				NullCheck(L_15);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_4;
				NullCheck(L_16);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_17, NULL);
			}

IL_006d_1:
			{
				// foreach (GameObject vehicle in ActiveVehicles)
				bool L_18;
				L_18 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
	}

IL_0088:
	{
		goto IL_0098;
	}

IL_008b:
	{
		// Debug.Log("AR camera not found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAB9CD2E11747EC882244656F25262F8FA81D56C8, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void VehicleManager::VehicleRotationer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_VehicleRotationer_m6CF156CC3C17356CD2D9E2B948583384BA87DDE5 (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB9CD2E11747EC882244656F25262F8FA81D56C8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (ARcamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___ARcamera_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00e5;
		}
	}
	{
		// if (ActiveVehicles.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___ActiveVehicles_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00e2;
		}
	}
	{
		// foreach (GameObject vehicle in ActiveVehicles)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___ActiveVehicles_5;
		NullCheck(L_6);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_7;
		L_7 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_6, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c4_1;
			}

IL_003d_1:
			{
				// foreach (GameObject vehicle in ActiveVehicles)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_8;
				// Vector3 currentRotation = vehicle.transform.rotation.eulerAngles;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_3;
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
				NullCheck(L_10);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
				L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
				V_9 = L_11;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_9), NULL);
				V_4 = L_12;
				// Vector3 cameraRotation = ARcamera.transform.rotation.eulerAngles;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___ARcamera_6;
				NullCheck(L_13);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
				NullCheck(L_14);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
				L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
				V_9 = L_15;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_9), NULL);
				V_5 = L_16;
				// Vector3 targetRotation = new Vector3(currentRotation.x, cameraRotation.y, currentRotation.z);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_4;
				float L_18 = L_17.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
				float L_20 = L_19.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_4;
				float L_22 = L_21.___z_4;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), L_18, L_20, L_22, NULL);
				// Quaternion targetQuaternion = Quaternion.Euler(targetRotation);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_6;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
				L_24 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_23, NULL);
				V_7 = L_24;
				// float rotationSpeed = 0.1f; // Adjust speed as needed
				V_8 = (0.100000001f);
				// vehicle.transform.rotation = Quaternion.Lerp(vehicle.transform.rotation, targetQuaternion, rotationSpeed);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_3;
				NullCheck(L_25);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
				L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_3;
				NullCheck(L_27);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
				L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
				NullCheck(L_28);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
				L_29 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_28, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_7;
				float L_31 = V_8;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
				L_32 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_29, L_30, L_31, NULL);
				NullCheck(L_26);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_26, L_32, NULL);
			}

IL_00c4_1:
			{
				// foreach (GameObject vehicle in ActiveVehicles)
				bool L_33;
				L_33 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_00e1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e1:
	{
	}

IL_00e2:
	{
		goto IL_00f2;
	}

IL_00e5:
	{
		// Debug.Log("AR camera not found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAB9CD2E11747EC882244656F25262F8FA81D56C8, NULL);
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void VehicleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager_Update_m3224FA7936A205A04BB8BF1734D16C03E94322E7 (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) 
{
	{
		// VehiclePositioner();
		VehicleManager_VehiclePositioner_m89E07CA5FABDC63E8139C39B6A191B39C9DA08CD(__this, NULL);
		// VehicleRotationer();
		VehicleManager_VehicleRotationer_m6CF156CC3C17356CD2D9E2B948583384BA87DDE5(__this, NULL);
		// }
		return;
	}
}
// System.Void VehicleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleManager__ctor_m73F18645B4936EDD345AADE5390BF889B3941A72 (VehicleManager_t799EBB15E46BC64665711B7641508FCDC7B4C3C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> ActiveVehicles = new List<GameObject>(); //list of spawned vehicles that need rotation and location updates
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___ActiveVehicles_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActiveVehicles_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoakTapPlace::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakTapPlace_Awake_m0504C8F544CA06AF7FFCE9782B088FA9EDEB7A40 (LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LoakTapPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakTapPlace_StartPlacement_m1C1BFD4992AE6744AEA0725DB5F210EB0936DF71 (LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___cam_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_9), (void*)L_0);
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// if (objectToPlace.scene.name != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___objectToPlace_5;
		NullCheck(L_1);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_1, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_1), NULL);
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// objectToPlace.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___objectToPlace_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_003b:
	{
		// if (!allowMultiple)
		bool L_6 = __this->___allowMultiple_7;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// singleObject = Instantiate(objectToPlace, objectParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___objectToPlace_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___objectParent_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		__this->___singleObject_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleObject_10), (void*)L_10);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void LoakTapPlace::EndPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakTapPlace_EndPlacement_mD6F55A9428DC9346CEED0DC929F0FF9911B919E4 (LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LoakTapPlace::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakTapPlace_Update_m2E26EE9F5DBBE11A03F06729899CFC7D5EC97198 (LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m3F906D54B515400E1B965A03E9B0FE6B630615ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (PlatformAgnosticInput.touchCount <= 0)
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlatformAgnosticInput_get_touchCount_m7B5705756A3948A905D86BA45AE1D8D557AD7FA3(NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_00ff;
	}

IL_0015:
	{
		// Touch touch = PlatformAgnosticInput.GetTouch(0);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tB0003440F676D5712F8A78BBE7BA335FC593809D_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = PlatformAgnosticInput_GetTouch_m67C8FA8D9C111F706AF6AEE6F18EC88841B84E3F(0, NULL);
		V_0 = L_2;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		V_3 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return;
		goto IL_00ff;
	}

IL_002f:
	{
		// RaycastHit[] hits = Physics.RaycastAll(cam.ScreenPointToRay(touch.position), Mathf.Infinity, 1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_7, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_9;
		L_9 = Physics_RaycastAll_m4055619E0F7EFA04620EAA0517F8393C4EBCFE87(L_8, (std::numeric_limits<float>::infinity()), 1, NULL);
		V_1 = L_9;
		// if (hits.Length <= 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_10 = V_1;
		NullCheck(L_10);
		V_4 = (bool)((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// return;
		goto IL_00ff;
	}

IL_0062:
	{
		// if (allowMultiple)
		bool L_12 = __this->___allowMultiple_7;
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00bd;
		}
	}
	{
		// singleObject = Instantiate(objectToPlace, hits[hits.Length / 2].point, Quaternion.identity, objectParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___objectToPlace_5;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_15 = V_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16 = V_1;
		NullCheck(L_16);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/2))))), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___objectParent_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_14, L_17, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		__this->___singleObject_10 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleObject_10), (void*)L_20);
		// singleObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___singleObject_10;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// OnObjectPlaced.Invoke(singleObject);
		UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2* L_22 = __this->___OnObjectPlaced_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___singleObject_10;
		NullCheck(L_22);
		UnityEvent_1_Invoke_m3F906D54B515400E1B965A03E9B0FE6B630615ED(L_22, L_23, UnityEvent_1_Invoke_m3F906D54B515400E1B965A03E9B0FE6B630615ED_RuntimeMethod_var);
		goto IL_00ff;
	}

IL_00bd:
	{
		// singleObject.transform.position = hits[hits.Length / 2].point;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___singleObject_10;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_26 = V_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_27 = V_1;
		NullCheck(L_27);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)(((RuntimeArray*)L_27)->max_length))/2))))), NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_28, NULL);
		// singleObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___singleObject_10;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)1, NULL);
		// OnObjectPlaced.Invoke(singleObject);
		UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2* L_30 = __this->___OnObjectPlaced_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___singleObject_10;
		NullCheck(L_30);
		UnityEvent_1_Invoke_m3F906D54B515400E1B965A03E9B0FE6B630615ED(L_30, L_31, UnityEvent_1_Invoke_m3F906D54B515400E1B965A03E9B0FE6B630615ED_RuntimeMethod_var);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void LoakTapPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakTapPlace__ctor_m10ED37B081C4E82192C975027295F49F507A19DC (LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* __this, const RuntimeMethod* method) 
{
	{
		// public bool allowMultiple = true;
		__this->___allowMultiple_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Niantic.ARDK.AR.Anchors.IARPlaneAnchor> FloorPlaneFinder::get_PlaneAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B* FloorPlaneFinder_get_PlaneAnchors_m0CBF41D01AADE33D961E8C09590F6783E6231682 (FloorPlaneFinder_t7F00FAA3B9825F13BBAFF2B69616EEC6A90FC7EA* __this, const RuntimeMethod* method) 
{
	{
		// public List<IARPlaneAnchor> PlaneAnchors { get; } = new List<IARPlaneAnchor>();
		List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B* L_0 = __this->___U3CPlaneAnchorsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void FloorPlaneFinder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorPlaneFinder_Start_mDD081AF796959647423AC667EC4407C21B752E20 (FloorPlaneFinder_t7F00FAA3B9825F13BBAFF2B69616EEC6A90FC7EA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FloorPlaneFinder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorPlaneFinder_Update_m9E4770B97ABF5F9832CF4E3E4DD9828CBED2F848 (FloorPlaneFinder_t7F00FAA3B9825F13BBAFF2B69616EEC6A90FC7EA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FloorPlaneFinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorPlaneFinder__ctor_m6A334C0BA2DE29CC7AE98D0596EF9E84C1DEA553 (FloorPlaneFinder_t7F00FAA3B9825F13BBAFF2B69616EEC6A90FC7EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m93B163E0623D670D697E5F2E4FA8734EFED62351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<IARPlaneAnchor> PlaneAnchors { get; } = new List<IARPlaneAnchor>();
		List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B* L_0 = (List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B*)il2cpp_codegen_object_new(List_1_t342BAB7744D8BB22AA03BFF8938CF124AEB3119B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m93B163E0623D670D697E5F2E4FA8734EFED62351(L_0, List_1__ctor_m93B163E0623D670D697E5F2E4FA8734EFED62351_RuntimeMethod_var);
		__this->___U3CPlaneAnchorsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlaneAnchorsU3Ek__BackingField_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameLogic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLogic_Start_mE2A2CB0C0B92835DC4D70F2E46DC65C7E2DE95C6 (GameLogic_tECBEC8501055C6739738F91B8986E2589806C9E1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameLogic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLogic_Update_m5EDB203D37886081E1636025C7BC1D29F055C3BB (GameLogic_tECBEC8501055C6739738F91B8986E2589806C9E1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameLogic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLogic__ctor_mFBDC426491084E3C9A92A61B189DEEE291E13E1D (GameLogic_tECBEC8501055C6739738F91B8986E2589806C9E1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LeaderboardScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScore__ctor_m5A3B2EEC10DF565BF1445B66160A88AAC8DA4261 (LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Loak.Unity.LeaderboardModel::CompareTo(Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardModel_CompareTo_m03CA727F74C8706307A0B5DF49792603798C36A4 (LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* __this, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___other0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return score.CompareTo(other.score);
		int64_t* L_0 = (&__this->___score_0);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_1 = ___other0;
		NullCheck(L_1);
		int64_t L_2 = L_1->___score_0;
		int32_t L_3;
		L_3 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Loak.Unity.LeaderboardModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardModel__ctor_mB5E475535663A7348CBD9C8D4D5D0CD49C31A368 (LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.Leaderboard::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_Awake_m5E19F0607BC03BF58047C137585569CDE5466B77 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644_StaticFields*)il2cpp_codegen_static_fields_for(Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644_StaticFields*)il2cpp_codegen_static_fields_for(Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>> Loak.Unity.Leaderboard::GetRefreshedLeaderboard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6* Leaderboard_GetRefreshedLeaderboard_mCEB6D13CA68123BCA5D0E23E93A1C9C4DBCA9968 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___gameId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m05E05EFFDFE1F3682B3A1CCABBA67ECB92B9E27C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_m4D006BBAB8F458A8171386E467D431CE663CFDF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m2CECE2164CA1202EBBB1C85A10BC9382571E14B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* V_0 = NULL;
	{
		U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* L_0 = (U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB*)il2cpp_codegen_object_new(U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRefreshedLeaderboardU3Ed__5__ctor_m432EE6FE4ACA4F7E185841B389DFF4B141BAE5D4(L_0, NULL);
		V_0 = L_0;
		U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m05E05EFFDFE1F3682B3A1CCABBA67ECB92B9E27C(AsyncTaskMethodBuilder_1_Create_m05E05EFFDFE1F3682B3A1CCABBA67ECB92B9E27C_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* L_4 = V_0;
		String_t* L_5 = ___gameId0;
		NullCheck(L_4);
		L_4->___gameId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___gameId_2), (void*)L_5);
		U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_m4D006BBAB8F458A8171386E467D431CE663CFDF2(L_8, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB_m4D006BBAB8F458A8171386E467D431CE663CFDF2_RuntimeMethod_var);
		U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* L_10 = (&L_9->___U3CU3Et__builder_1);
		Task_1_tA480D679B24167F9ABEF4DA64F86CE4D97A95CC6* L_11;
		L_11 = AsyncTaskMethodBuilder_1_get_Task_m2CECE2164CA1202EBBB1C85A10BC9382571E14B5(L_10, AsyncTaskMethodBuilder_1_get_Task_m2CECE2164CA1202EBBB1C85A10BC9382571E14B5_RuntimeMethod_var);
		return L_11;
	}
}
// System.Boolean Loak.Unity.Leaderboard::CheckIfTimestampExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_CheckIfTimestampExists_m5A97317444E72EE6C9B7E8922A3284681E77F33C (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___gameId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAEAAE2A9C8DA9BD7BA7FF7B0029EE2063A80A8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF55CDEAACAAD854EF3EE0EED3DE57509EC528099_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!LastRefreshTimestamps.ContainsKey(gameId))
		Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* L_0 = __this->___LastRefreshTimestamps_6;
		String_t* L_1 = ___gameId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF55CDEAACAAD854EF3EE0EED3DE57509EC528099(L_0, L_1, Dictionary_2_ContainsKey_mF55CDEAACAAD854EF3EE0EED3DE57509EC528099_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// LastRefreshTimestamps.Add(gameId, DateTime.UtcNow);
		Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* L_4 = __this->___LastRefreshTimestamps_6;
		String_t* L_5 = ___gameId0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mAEAAE2A9C8DA9BD7BA7FF7B0029EE2063A80A8D6(L_4, L_5, L_6, Dictionary_2_Add_mAEAAE2A9C8DA9BD7BA7FF7B0029EE2063A80A8D6_RuntimeMethod_var);
		// return false;
		V_1 = (bool)0;
		goto IL_002f;
	}

IL_002b:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean Loak.Unity.Leaderboard::IsTimestampPassedCooldown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_IsTimestampPassedCooldown_mFC6FD43E76722FC739424926ED6FA441DACDD303 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___gameId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38CDC28333865A2F4583FDC0F6A76A63935BAAAB);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// TimeSpan timeSinceLastRefresh = DateTime.UtcNow - LastRefreshTimestamps[gameId];
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* L_1 = __this->___LastRefreshTimestamps_6;
		String_t* L_2 = ___gameId0;
		NullCheck(L_1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086(L_1, L_2, Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086_RuntimeMethod_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_3, NULL);
		V_0 = L_4;
		// Debug.Log("Total Seconds: " + timeSinceLastRefresh.TotalSeconds);
		double L_5;
		L_5 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		V_1 = L_5;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral38CDC28333865A2F4583FDC0F6A76A63935BAAAB, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// if (timeSinceLastRefresh.TotalSeconds >= coolDownTimer)
		double L_8;
		L_8 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		float L_9 = __this->___coolDownTimer_7;
		V_2 = (bool)((((int32_t)((!(((double)L_8) >= ((double)((double)L_9))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0057;
	}

IL_0053:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void Loak.Unity.Leaderboard::SetTimestamp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTimestamp_mC1C6A8257F52403B8C88F127663E8B036FF9E5B2 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___gameId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5CFEE9AF9CDBDF27577D09244CB3E046BAACB1DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(!CheckIfTimestampExists(gameId))
		String_t* L_0 = ___gameId0;
		bool L_1;
		L_1 = Leaderboard_CheckIfTimestampExists_m5A97317444E72EE6C9B7E8922A3284681E77F33C(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_0024;
	}

IL_0012:
	{
		// LastRefreshTimestamps[gameId] = DateTime.UtcNow;
		Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* L_3 = __this->___LastRefreshTimestamps_6;
		String_t* L_4 = ___gameId0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		NullCheck(L_3);
		Dictionary_2_set_Item_m5CFEE9AF9CDBDF27577D09244CB3E046BAACB1DD(L_3, L_4, L_5, Dictionary_2_set_Item_m5CFEE9AF9CDBDF27577D09244CB3E046BAACB1DD_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.Leaderboard::AddLeaderboard(System.String,System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_AddLeaderboard_m9D6BC10D86587746C1190A69CE8B702255031690 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___worldID0, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___leaderBoard1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!LeaderboardTable.ContainsKey(worldID))
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_0 = __this->___LeaderboardTable_5;
		String_t* L_1 = ___worldID0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D(L_0, L_1, Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// LeaderboardTable.Add(worldID, leaderBoard);
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_4 = __this->___LeaderboardTable_5;
		String_t* L_5 = ___worldID0;
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_6 = ___leaderBoard1;
		NullCheck(L_4);
		Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E(L_4, L_5, L_6, Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E_RuntimeMethod_var);
		goto IL_0036;
	}

IL_0026:
	{
		// LeaderboardTable[worldID] = leaderBoard;
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_7 = __this->___LeaderboardTable_5;
		String_t* L_8 = ___worldID0;
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_9 = ___leaderBoard1;
		NullCheck(L_7);
		Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB(L_7, L_8, L_9, Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB_RuntimeMethod_var);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.Leaderboard::AddLeaderboard(System.String,Loak.Unity.LeaderboardScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_AddLeaderboard_mD284AE19BC4DD415DEE2BD49F7B01F54E32FE222 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___gameId0, LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346* ___scores1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* V_0 = NULL;
	LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* V_1 = NULL;
	LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346* V_2 = NULL;
	int32_t V_3 = 0;
	LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* V_4 = NULL;
	bool V_5 = false;
	{
		// var leaderBoard = new List<LeaderboardModel>();
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_0 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)il2cpp_codegen_object_new(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5(L_0, List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (LeaderboardScore score in scores)
		LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346* L_1 = ___scores1;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0042;
	}

IL_000e:
	{
		// foreach (LeaderboardScore score in scores)
		LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		// model = new LeaderboardModel();
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_6 = (LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9*)il2cpp_codegen_object_new(LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		LeaderboardModel__ctor_mB5E475535663A7348CBD9C8D4D5D0CD49C31A368(L_6, NULL);
		V_1 = L_6;
		// model.username = score.username;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_7 = V_1;
		LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* L_8 = V_4;
		NullCheck(L_8);
		String_t* L_9 = L_8->___username_0;
		NullCheck(L_7);
		L_7->___username_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___username_1), (void*)L_9);
		// model.score = score.score;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_10 = V_1;
		LeaderboardScore_tBB54CC202D950180BF464C40D1A87CE8EACC9A41* L_11 = V_4;
		NullCheck(L_11);
		int32_t L_12 = L_11->___score_1;
		NullCheck(L_10);
		L_10->___score_0 = ((int64_t)L_12);
		// leaderBoard.Add(model);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_13 = V_0;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_inline(L_13, L_14, List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_RuntimeMethod_var);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0042:
	{
		// foreach (LeaderboardScore score in scores)
		int32_t L_16 = V_3;
		LeaderboardScoreU5BU5D_tBDD7343E9D027B719B2B720B541106CC55707346* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (!LeaderboardTable.ContainsKey(gameId))
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_18 = __this->___LeaderboardTable_5;
		String_t* L_19 = ___gameId0;
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D(L_18, L_19, Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		// LeaderboardTable.Add(gameId, leaderBoard);
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_22 = __this->___LeaderboardTable_5;
		String_t* L_23 = ___gameId0;
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_24 = V_0;
		NullCheck(L_22);
		Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E(L_22, L_23, L_24, Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E_RuntimeMethod_var);
		goto IL_007f;
	}

IL_006f:
	{
		// LeaderboardTable[gameId] = leaderBoard;
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_25 = __this->___LeaderboardTable_5;
		String_t* L_26 = ___gameId0;
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_27 = V_0;
		NullCheck(L_25);
		Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB(L_25, L_26, L_27, Dictionary_2_set_Item_m59010BFA073F31EC5063F580D8BDD0D8AEA27AAB_RuntimeMethod_var);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Boolean Loak.Unity.Leaderboard::LeaderboardLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_LeaderboardLoaded_mCBD771E898162373FFBB692E287795BA79CC16A2 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___worldID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool LeaderboardLoaded(string worldID) => LeaderboardTable.ContainsKey(worldID);
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_0 = __this->___LeaderboardTable_5;
		String_t* L_1 = ___worldID0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D(L_0, L_1, Dictionary_2_ContainsKey_m2C110371D61C44ABA9E000836DAA7AC76948565D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel> Loak.Unity.Leaderboard::GetLeaderBoard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* Leaderboard_GetLeaderBoard_m8993641510EF278D5F5C591FA2B3E309A7E0D0DB (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___worldID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* V_0 = NULL;
	bool V_1 = false;
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* V_2 = NULL;
	bool V_3 = false;
	{
		// if (!LeaderboardTable.TryGetValue(worldID, out leaderboard))
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_0 = __this->___LeaderboardTable_5;
		String_t* L_1 = ___worldID0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return new List<LeaderboardModel>();
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_4 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)il2cpp_codegen_object_new(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5(L_4, List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		V_2 = L_4;
		goto IL_0033;
	}

IL_001f:
	{
		// if(leaderboard == null)
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_5 = V_0;
		V_3 = (bool)((((RuntimeObject*)(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// return new List<LeaderboardModel>();
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_7 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)il2cpp_codegen_object_new(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5(L_7, List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0033;
	}

IL_002f:
	{
		// return leaderboard;
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_8 = V_0;
		V_2 = L_8;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_9 = V_2;
		return L_9;
	}
}
// System.Void Loak.Unity.Leaderboard::UpdateLocalLeaderboard(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_UpdateLocalLeaderboard_mA78644B82D085E77AB1555B6B28E57CC682C2625 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___worldID0, int64_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22AC41F53B6E883C2F75959D31F4C423AA24DCFE);
		s_Il2CppMethodInitialized = true;
	}
	LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* V_0 = NULL;
	{
		// LeaderboardModel leaderboardData = new LeaderboardModel()
		// {
		//     score = value,
		//     username = "Test User 1"
		// };
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_0 = (LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9*)il2cpp_codegen_object_new(LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LeaderboardModel__ctor_mB5E475535663A7348CBD9C8D4D5D0CD49C31A368(L_0, NULL);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_1 = L_0;
		int64_t L_2 = ___value1;
		NullCheck(L_1);
		L_1->___score_0 = L_2;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_3 = L_1;
		NullCheck(L_3);
		L_3->___username_1 = _stringLiteral22AC41F53B6E883C2F75959D31F4C423AA24DCFE;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___username_1), (void*)_stringLiteral22AC41F53B6E883C2F75959D31F4C423AA24DCFE);
		V_0 = L_3;
		// AddToLeaderboardTable(worldID, leaderboardData);
		String_t* L_4 = ___worldID0;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_5 = V_0;
		Leaderboard_AddToLeaderboardTable_mFE663852CF40D09CEE882D6B9FDBE0BFE9774937(__this, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.Leaderboard::AddToLeaderboardTable(System.String,Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_AddToLeaderboardTable_mFE663852CF40D09CEE882D6B9FDBE0BFE9774937 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, String_t* ___worldID0, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___leaderboardData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mFC6635059A80A83B79FA201BF75A8579BC04F301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m95ACCD628689E008D836F9935BDB115F9FA71247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CAddToLeaderboardTableU3Eb__0_mC5332870E47C922E677FB0104F57FB6C9FFB4E47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* V_0 = NULL;
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_0 = (U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_mBD916D2C5F2C57E2BC586F1F590820109D7E1274(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_1 = V_0;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_2 = ___leaderboardData1;
		NullCheck(L_1);
		L_1->___leaderboardData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___leaderboardData_0), (void*)L_2);
		// if (LeaderboardTable.TryGetValue(worldID, out board) && board != null)
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_3 = __this->___LeaderboardTable_5;
		String_t* L_4 = ___worldID0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_m28B309CCB3D192037EB14506B98296370FD1FFFC_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_6 = V_1;
		G_B3_0 = ((!(((RuntimeObject*)(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_2 = (bool)G_B3_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00b6;
		}
	}
	{
		// if (board.Count > 0)
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_inline(L_8, List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00a4;
		}
	}
	{
		// var found = board.Find(x => x.username == leaderboardData.username);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_11 = V_1;
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_12 = V_0;
		Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9* L_13 = (Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9*)il2cpp_codegen_object_new(Predicate_1_tB3D855A5C842FA22B77E156BE6FD91A79B3ECAA9_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Predicate_1__ctor_m22528C472AF802CBED7FCFC77A98CC002F82A110(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CAddToLeaderboardTableU3Eb__0_mC5332870E47C922E677FB0104F57FB6C9FFB4E47_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_14;
		L_14 = List_1_Find_mFC6635059A80A83B79FA201BF75A8579BC04F301(L_11, L_13, List_1_Find_mFC6635059A80A83B79FA201BF75A8579BC04F301_RuntimeMethod_var);
		V_4 = L_14;
		// if (found != null)
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_15 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		// if (found.score < leaderboardData.score)
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_17 = V_4;
		NullCheck(L_17);
		int64_t L_18 = L_17->___score_0;
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_19 = V_0;
		NullCheck(L_19);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_20 = L_19->___leaderboardData_0;
		NullCheck(L_20);
		int64_t L_21 = L_20->___score_0;
		V_6 = (bool)((((int64_t)L_18) < ((int64_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_008e;
		}
	}
	{
		// board.Remove(found);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_23 = V_1;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_24 = V_4;
		NullCheck(L_23);
		bool L_25;
		L_25 = List_1_Remove_m95ACCD628689E008D836F9935BDB115F9FA71247(L_23, L_24, List_1_Remove_m95ACCD628689E008D836F9935BDB115F9FA71247_RuntimeMethod_var);
		// FitItemAndSort(board, leaderboardData);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_26 = V_1;
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_27 = V_0;
		NullCheck(L_27);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_28 = L_27->___leaderboardData_0;
		Leaderboard_FitItemAndSort_m82EAF108F280F24C8F71D72388A7ECC6ED82A083(__this, L_26, L_28, NULL);
	}

IL_008e:
	{
		goto IL_00a1;
	}

IL_0091:
	{
		// FitItemAndSort(board, leaderboardData);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_29 = V_1;
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_30 = V_0;
		NullCheck(L_30);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_31 = L_30->___leaderboardData_0;
		Leaderboard_FitItemAndSort_m82EAF108F280F24C8F71D72388A7ECC6ED82A083(__this, L_29, L_31, NULL);
	}

IL_00a1:
	{
		goto IL_00b3;
	}

IL_00a4:
	{
		// board.Add(leaderboardData);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_32 = V_1;
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_33 = V_0;
		NullCheck(L_33);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_34 = L_33->___leaderboardData_0;
		NullCheck(L_32);
		List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_inline(L_32, L_34, List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_RuntimeMethod_var);
	}

IL_00b3:
	{
		goto IL_00d7;
	}

IL_00b6:
	{
		// LeaderboardTable.Add(worldID, new List<LeaderboardModel>() { leaderboardData });
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_35 = __this->___LeaderboardTable_5;
		String_t* L_36 = ___worldID0;
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_37 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)il2cpp_codegen_object_new(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5(L_37, List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_38 = L_37;
		U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* L_39 = V_0;
		NullCheck(L_39);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_40 = L_39->___leaderboardData_0;
		NullCheck(L_38);
		List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_inline(L_38, L_40, List_1_Add_m98DC5AC7B69A9EE72C030B97BDA246B540900120_RuntimeMethod_var);
		NullCheck(L_35);
		Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E(L_35, L_36, L_38, Dictionary_2_Add_m5D49182F3DB01C4D7B0E7BC82983B0996ADA3F3E_RuntimeMethod_var);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.Leaderboard::FitItemAndSort(System.Collections.Generic.List`1<Loak.Unity.LeaderboardModel>,Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_FitItemAndSort_m82EAF108F280F24C8F71D72388A7ECC6ED82A083 (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* ___models0, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___leaderboardData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_BinarySearch_m9148D62CDABCCD6B989553F09DD34B79498C5599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m74B6E014DF9E338F36D91F3DDAF7D8FEB12257D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m57FA6E4A4462D73F14D872CDD6BB07F05A2AB2A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m0EFADA47629D71A3FCFB78EBFA3930745E6F8C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFitItemAndSortU3Eb__15_0_m9B7B506BA6727A517EF11D7C6D6B5ED88FA09E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* G_B6_0 = NULL;
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* G_B6_1 = NULL;
	Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* G_B5_0 = NULL;
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* G_B5_1 = NULL;
	{
		// int index = models.BinarySearch(leaderboardData);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_0 = ___models0;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_1 = ___leaderboardData1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_BinarySearch_m9148D62CDABCCD6B989553F09DD34B79498C5599(L_0, L_1, List_1_BinarySearch_m9148D62CDABCCD6B989553F09DD34B79498C5599_RuntimeMethod_var);
		V_0 = L_2;
		// if (index < 0)
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// index = ~index;
		int32_t L_5 = V_0;
		V_0 = ((~L_5));
	}

IL_0016:
	{
		// models.Insert(index, leaderboardData);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_6 = ___models0;
		int32_t L_7 = V_0;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_8 = ___leaderboardData1;
		NullCheck(L_6);
		List_1_Insert_m74B6E014DF9E338F36D91F3DDAF7D8FEB12257D2(L_6, L_7, L_8, List_1_Insert_m74B6E014DF9E338F36D91F3DDAF7D8FEB12257D2_RuntimeMethod_var);
		// if (models.Count > 10)
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_9 = ___models0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_inline(L_9, List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_10) > ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		// models.RemoveAt(models.Count - 1);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_12 = ___models0;
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_13 = ___models0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_inline(L_13, List_1_get_Count_mEF4BA41AE12721F96DD877993CB045914CE452DD_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_RemoveAt_m57FA6E4A4462D73F14D872CDD6BB07F05A2AB2A4(L_12, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), List_1_RemoveAt_m57FA6E4A4462D73F14D872CDD6BB07F05A2AB2A4_RuntimeMethod_var);
	}

IL_003e:
	{
		// models.Sort((a, b) => b.CompareTo(a));
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_15 = ___models0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var);
		Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* L_16 = ((U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* L_17 = L_16;
		G_B5_0 = L_17;
		G_B5_1 = L_15;
		if (L_17)
		{
			G_B6_0 = L_17;
			G_B6_1 = L_15;
			goto IL_005e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var);
		U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810* L_18 = ((U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* L_19 = (Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4*)il2cpp_codegen_object_new(Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Comparison_1__ctor_m35987F1698A084EDCC8A4B2636999586D5A2F0A1(L_19, L_18, (intptr_t)((void*)U3CU3Ec_U3CFitItemAndSortU3Eb__15_0_m9B7B506BA6727A517EF11D7C6D6B5ED88FA09E11_RuntimeMethod_var), NULL);
		Comparison_1_tF876BA698612A3DE5981A7BCAD5001BBA4672AD4* L_20 = L_19;
		((U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_20);
		G_B6_0 = L_20;
		G_B6_1 = G_B5_1;
	}

IL_005e:
	{
		NullCheck(G_B6_1);
		List_1_Sort_m0EFADA47629D71A3FCFB78EBFA3930745E6F8C73(G_B6_1, G_B6_0, List_1_Sort_m0EFADA47629D71A3FCFB78EBFA3930745E6F8C73_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Loak.Unity.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_m51D537B090C766B73FF838D2962292786D4C01FA (Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0E9BDCA1040A86271F55419D3E497224C25CCEBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m72E151AB2EC171A1240D7D98AE225F1033B6D08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, List<LeaderboardModel>> LeaderboardTable = new Dictionary<string, List<LeaderboardModel>>();
		Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A* L_0 = (Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A*)il2cpp_codegen_object_new(Dictionary_2_tFAACC32DD93755B287BD9C2DAC997597EEBC3F6A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m0E9BDCA1040A86271F55419D3E497224C25CCEBF(L_0, Dictionary_2__ctor_m0E9BDCA1040A86271F55419D3E497224C25CCEBF_RuntimeMethod_var);
		__this->___LeaderboardTable_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LeaderboardTable_5), (void*)L_0);
		// private Dictionary<string, DateTime> LastRefreshTimestamps = new Dictionary<string, DateTime>();
		Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* L_1 = (Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1*)il2cpp_codegen_object_new(Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m72E151AB2EC171A1240D7D98AE225F1033B6D08F(L_1, Dictionary_2__ctor_m72E151AB2EC171A1240D7D98AE225F1033B6D08F_RuntimeMethod_var);
		__this->___LastRefreshTimestamps_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LastRefreshTimestamps_6), (void*)L_1);
		// public float coolDownTimer = 300f; // In seconds
		__this->___coolDownTimer_7 = (300.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRefreshedLeaderboardU3Ed__5__ctor_m432EE6FE4ACA4F7E185841B389DFF4B141BAE5D4 (U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRefreshedLeaderboardU3Ed__5_MoveNext_m14E27376E9DE80861B99F7425098780EF0B54DC2 (U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m66A77D28E4FAB199391BF703CB4CA75013FEACA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			// if (!CheckIfTimestampExists(gameId))
			Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* L_1 = __this->___U3CU3E4__this_3;
			String_t* L_2 = __this->___gameId_2;
			NullCheck(L_1);
			bool L_3;
			L_3 = Leaderboard_CheckIfTimestampExists_m5A97317444E72EE6C9B7E8922A3284681E77F33C(L_1, L_2, NULL);
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0029_1;
			}
		}
		{
			// return new List<LeaderboardModel>();
			List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_5 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)il2cpp_codegen_object_new(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5(L_5, List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
			V_1 = L_5;
			goto IL_00a6;
		}

IL_0029_1:
		{
			// TimeSpan timeSinceLastRefresh = DateTime.UtcNow - LastRefreshTimestamps[gameId];
			il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
			L_6 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
			Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* L_7 = __this->___U3CU3E4__this_3;
			NullCheck(L_7);
			Dictionary_2_t4284EC66A7E7B40B840CC6592B61243D8123B9F1* L_8 = L_7->___LastRefreshTimestamps_6;
			String_t* L_9 = __this->___gameId_2;
			NullCheck(L_8);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
			L_10 = Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086(L_8, L_9, Dictionary_2_get_Item_mE528131BE7116C0F8340B1320D4064252BFC9086_RuntimeMethod_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11;
			L_11 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_6, L_10, NULL);
			__this->___U3CtimeSinceLastRefreshU3E5__1_4 = L_11;
			// List<LeaderboardModel> retrievedLeaderboards = new List<LeaderboardModel>();
			List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_12 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)il2cpp_codegen_object_new(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5(L_12, List_1__ctor_m3E92D8B0A7B050721C5283EE31B2D1CC68667BB5_RuntimeMethod_var);
			__this->___U3CretrievedLeaderboardsU3E5__2_5 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CretrievedLeaderboardsU3E5__2_5), (void*)L_12);
			// if (timeSinceLastRefresh.TotalSeconds >= coolDownTimer)
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_13 = (&__this->___U3CtimeSinceLastRefreshU3E5__1_4);
			double L_14;
			L_14 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8(L_13, NULL);
			Leaderboard_t66C377DE0D422F5E28A0774B975E0AB62432B644* L_15 = __this->___U3CU3E4__this_3;
			NullCheck(L_15);
			float L_16 = L_15->___coolDownTimer_7;
			V_3 = (bool)((((int32_t)((!(((double)L_14) >= ((double)((double)L_16))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_17 = V_3;
			if (!L_17)
			{
				goto IL_007c_1;
			}
		}
		{
		}

IL_007c_1:
		{
			// return retrievedLeaderboards;
			List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_18 = __this->___U3CretrievedLeaderboardsU3E5__2_5;
			V_1 = L_18;
			goto IL_00a6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0085;
		}
		throw e;
	}

CATCH_0085:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CretrievedLeaderboardsU3E5__2_5 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CretrievedLeaderboardsU3E5__2_5), (void*)(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)NULL);
		AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m74FF08191011AAE2E1C17946808B20185D3F6D0C(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m74FF08191011AAE2E1C17946808B20185D3F6D0C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	}// end catch (depth: 1)

IL_00a6:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CretrievedLeaderboardsU3E5__2_5 = (List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CretrievedLeaderboardsU3E5__2_5), (void*)(List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8*)NULL);
		AsyncTaskMethodBuilder_1_t4083A18732AC53D0C05353DBFA823E43B53E963A* L_21 = (&__this->___U3CU3Et__builder_1);
		List_1_tEC5AE3A0C47840DE0152028FC981532FD95430E8* L_22 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m66A77D28E4FAB199391BF703CB4CA75013FEACA7(L_21, L_22, AsyncTaskMethodBuilder_1_SetResult_m66A77D28E4FAB199391BF703CB4CA75013FEACA7_RuntimeMethod_var);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void Loak.Unity.Leaderboard/<GetRefreshedLeaderboard>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRefreshedLeaderboardU3Ed__5_SetStateMachine_m734E85466973349CEC3B3FC25E6FBA8E49FCE2D6 (U3CGetRefreshedLeaderboardU3Ed__5_t0D9BF0B924F1D4A806286652D80388BD194654DB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.Leaderboard/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mBD916D2C5F2C57E2BC586F1F590820109D7E1274 (U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Loak.Unity.Leaderboard/<>c__DisplayClass14_0::<AddToLeaderboardTable>b__0(Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CAddToLeaderboardTableU3Eb__0_mC5332870E47C922E677FB0104F57FB6C9FFB4E47 (U3CU3Ec__DisplayClass14_0_t63597BC274CC0B252E48557E5C3BBBB3EC97903F* __this, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___x0, const RuntimeMethod* method) 
{
	{
		// var found = board.Find(x => x.username == leaderboardData.username);
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___username_1;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_2 = __this->___leaderboardData_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___username_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.Leaderboard/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3972C80986FA187CC172BAC054AE8CEF7A4EC11A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810* L_0 = (U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810*)il2cpp_codegen_object_new(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE5D9207FBACEB31EB32B673877A89ECDD24B31C1(L_0, NULL);
		((U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Loak.Unity.Leaderboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE5D9207FBACEB31EB32B673877A89ECDD24B31C1 (U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Loak.Unity.Leaderboard/<>c::<FitItemAndSort>b__15_0(Loak.Unity.LeaderboardModel,Loak.Unity.LeaderboardModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CFitItemAndSortU3Eb__15_0_m9B7B506BA6727A517EF11D7C6D6B5ED88FA09E11 (U3CU3Ec_tA9F4FA03945DB5EDC0EBFEC9877BE083B61F8810* __this, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___a0, LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* ___b1, const RuntimeMethod* method) 
{
	{
		// models.Sort((a, b) => b.CompareTo(a));
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_0 = ___b1;
		LeaderboardModel_tEC4B45FF1A3945231A733247D1360FDC61E64BD9* L_1 = ___a0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = LeaderboardModel_CompareTo_m03CA727F74C8706307A0B5DF49792603798C36A4(L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LeaderboardListItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_Awake_m12B32D0225AEDE08C388F4A098FEEB307F265E60 (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC6814EE492C8F7C184ACA80844A78C14957452E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// backgroundImage = GetComponentInChildren<Image>(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC6814EE492C8F7C184ACA80844A78C14957452E8(__this, (bool)1, Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC6814EE492C8F7C184ACA80844A78C14957452E8_RuntimeMethod_var);
		__this->___backgroundImage_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundImage_8), (void*)L_0);
		// textElements = GetComponentsInChildren<TMP_Text>(true);
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_1;
		L_1 = Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1(__this, (bool)1, Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1_RuntimeMethod_var);
		__this->___textElements_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textElements_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void Loak.Unity.LeaderboardListItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_Start_mC0855BDCD05A79DD698801DBD79E728248E2C62B (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, const RuntimeMethod* method) 
{
	TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* V_0 = NULL;
	int32_t V_1 = 0;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_2 = NULL;
	{
		// backgroundImage.sprite = unhighlightedBackground;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___backgroundImage_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___unhighlightedBackground_7;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// foreach (TMP_Text text in textElements)
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_2 = __this->___textElements_9;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0036;
	}

IL_001f:
	{
		// foreach (TMP_Text text in textElements)
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// text.color = unhighlightedTextColor;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___unhighlightedTextColor_6;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0036:
	{
		// foreach (TMP_Text text in textElements)
		int32_t L_10 = V_1;
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LeaderboardListItem::SetRank(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_SetRank_m85C96A8680D5D508185D04E74FB841B059E58A69 (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, int32_t ___rank0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textElements[0].text = "#" + rank;
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_0 = __this->___textElements_9;
		NullCheck(L_0);
		int32_t L_1 = 0;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___rank0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void Loak.Unity.LeaderboardListItem::SetUIText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_SetUIText_m4BF908D2CBEE7988F49782C1DDAB84B86F28FF3B (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, String_t* ___username0, String_t* ___score1, const RuntimeMethod* method) 
{
	{
		// textElements[1].text = username;
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_0 = __this->___textElements_9;
		NullCheck(L_0);
		int32_t L_1 = 1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		String_t* L_3 = ___username0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_3);
		// textElements[2].text = score;
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_4 = __this->___textElements_9;
		NullCheck(L_4);
		int32_t L_5 = 2;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7 = ___score1;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void Loak.Unity.LeaderboardListItem::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem_Highlight_m76D10D829C0AB5B9D255E19DD3D4F8BA3E47DFF7 (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, bool ___val0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* V_1 = NULL;
	int32_t V_2 = 0;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_3 = NULL;
	TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* V_4 = NULL;
	int32_t V_5 = 0;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_6 = NULL;
	{
		// if (val)
		bool L_0 = ___val0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// backgroundImage.sprite = highlightedBackground;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___backgroundImage_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___highlightedBackground_5;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// foreach (TMP_Text text in textElements)
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_4 = __this->___textElements_9;
		V_1 = L_4;
		V_2 = 0;
		goto IL_003c;
	}

IL_0025:
	{
		// foreach (TMP_Text text in textElements)
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// text.color = highlightedTextColor;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_9 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___highlightedTextColor_4;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003c:
	{
		// foreach (TMP_Text text in textElements)
		int32_t L_12 = V_2;
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_008c;
	}

IL_0045:
	{
		// backgroundImage.sprite = unhighlightedBackground;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___backgroundImage_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = __this->___unhighlightedBackground_7;
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_15, NULL);
		// foreach (TMP_Text text in textElements)
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_16 = __this->___textElements_9;
		V_4 = L_16;
		V_5 = 0;
		goto IL_0083;
	}

IL_0066:
	{
		// foreach (TMP_Text text in textElements)
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_17 = V_4;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		// text.color = unhighlightedTextColor;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = V_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___unhighlightedTextColor_6;
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0083:
	{
		// foreach (TMP_Text text in textElements)
		int32_t L_24 = V_5;
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LeaderboardListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardListItem__ctor_m8D1A0C565FD6D69ACDB74FC0417512E310751B19 (LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Color highlightedTextColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___highlightedTextColor_4 = L_0;
		// [SerializeField] private Color unhighlightedTextColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___unhighlightedTextColor_6 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LoakLeaderboard::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_Awake_m814AC0E0652B17284B982FBC6318C1A3425D5B23 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_StaticFields*)il2cpp_codegen_static_fields_for(LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_StaticFields*)il2cpp_codegen_static_fields_for(LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_Start_m8471619335FC140CFB8575A18696239BB94553E6 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m380B95E83EEBFD6A183AD7D33F2A7A3BDD2AF6F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m672F779EAC3F4A6D3202E4969CA65368E1119D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m83A381698F8B5E4A2460451D53E979DE4D859464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m3E502C6D03B94C1F413E0C27BD3D0DE54C0B44A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// canvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___canvas_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_10), (void*)L_0);
		// friendsTab = new Tab(transform.GetChild(1).GetChild(2).GetChild(0).gameObject, null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_6 = (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6*)il2cpp_codegen_object_new(Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Tab__ctor_m9D5F188FC45D340C7C4AD7FE5B926AF30C1FDE38(L_6, L_5, (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*)NULL, NULL);
		__this->___friendsTab_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___friendsTab_14), (void*)L_6);
		// globalTab = new Tab(transform.GetChild(1).GetChild(2).GetChild(1).gameObject, null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 1, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 2, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, 1, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_12 = (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6*)il2cpp_codegen_object_new(Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Tab__ctor_m9D5F188FC45D340C7C4AD7FE5B926AF30C1FDE38(L_12, L_11, (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*)NULL, NULL);
		__this->___globalTab_15 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___globalTab_15), (void*)L_12);
		// loadingView = transform.GetChild(1).GetChild(4).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, 1, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_14, 4, NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		__this->___loadingView_11 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loadingView_11), (void*)L_16);
		// switch (leaderboardConfiguration)
		int32_t L_17 = __this->___leaderboardConfiguration_5;
		V_2 = L_17;
		int32_t L_18 = V_2;
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0090;
		}
	}
	{
		goto IL_008a;
	}

IL_008a:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_00e2;
	}

IL_0090:
	{
		// friendsTab.SetActive(true);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_21 = __this->___friendsTab_14;
		NullCheck(L_21);
		Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811(L_21, (bool)1, NULL);
		// globalTab.SetActive(false);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_22 = __this->___globalTab_15;
		NullCheck(L_22);
		Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811(L_22, (bool)0, NULL);
		// ActivateTab(friendsTab);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_23 = __this->___friendsTab_14;
		LoakLeaderboard_ActivateTab_mD4ABDC923E6179D3929CBEA4D163ACF64341D2B3(__this, L_23, NULL);
		// break;
		goto IL_010b;
	}

IL_00b9:
	{
		// friendsTab.SetActive(false);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_24 = __this->___friendsTab_14;
		NullCheck(L_24);
		Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811(L_24, (bool)0, NULL);
		// globalTab.SetActive(true);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_25 = __this->___globalTab_15;
		NullCheck(L_25);
		Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811(L_25, (bool)1, NULL);
		// ActivateTab(globalTab);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_26 = __this->___globalTab_15;
		LoakLeaderboard_ActivateTab_mD4ABDC923E6179D3929CBEA4D163ACF64341D2B3(__this, L_26, NULL);
		// break;
		goto IL_010b;
	}

IL_00e2:
	{
		// friendsTab.SetActive(true);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_27 = __this->___friendsTab_14;
		NullCheck(L_27);
		Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811(L_27, (bool)1, NULL);
		// globalTab.SetActive(true);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_28 = __this->___globalTab_15;
		NullCheck(L_28);
		Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811(L_28, (bool)1, NULL);
		// ActivateTab(friendsTab);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_29 = __this->___friendsTab_14;
		LoakLeaderboard_ActivateTab_mD4ABDC923E6179D3929CBEA4D163ACF64341D2B3(__this, L_29, NULL);
		// break;
		goto IL_010b;
	}

IL_010b:
	{
		// listItemPrefab = GetComponentInChildren<LeaderboardListItem>(true);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_30;
		L_30 = Component_GetComponentInChildren_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m380B95E83EEBFD6A183AD7D33F2A7A3BDD2AF6F3(__this, (bool)1, Component_GetComponentInChildren_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m380B95E83EEBFD6A183AD7D33F2A7A3BDD2AF6F3_RuntimeMethod_var);
		__this->___listItemPrefab_8 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listItemPrefab_8), (void*)L_30);
		// list = listItemPrefab.transform.parent.parent.parent.gameObject;
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_31 = __this->___listItemPrefab_8;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_32, NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_33, NULL);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_34, NULL);
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		__this->___list_12 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_12), (void*)L_36);
		// listItemPrefab.gameObject.SetActive(true);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_37 = __this->___listItemPrefab_8;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// if (listItems.Count == 0)
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_39 = __this->___listItems_9;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m83A381698F8B5E4A2460451D53E979DE4D859464_inline(L_39, List_1_get_Count_m83A381698F8B5E4A2460451D53E979DE4D859464_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_3;
		if (!L_41)
		{
			goto IL_0173;
		}
	}
	{
		// listItems.Add(listItemPrefab);
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_42 = __this->___listItems_9;
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_43 = __this->___listItemPrefab_8;
		NullCheck(L_42);
		List_1_Add_m672F779EAC3F4A6D3202E4969CA65368E1119D87_inline(L_42, L_43, List_1_Add_m672F779EAC3F4A6D3202E4969CA65368E1119D87_RuntimeMethod_var);
	}

IL_0173:
	{
		// var parent = listItemPrefab.transform.parent;
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_44 = __this->___listItemPrefab_8;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_45, NULL);
		V_0 = L_46;
		// for (int i = listItems.Count; i < numberOfEntries; i++)
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_47 = __this->___listItems_9;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_m83A381698F8B5E4A2460451D53E979DE4D859464_inline(L_47, List_1_get_Count_m83A381698F8B5E4A2460451D53E979DE4D859464_RuntimeMethod_var);
		V_4 = L_48;
		goto IL_01ca;
	}

IL_0193:
	{
		// listItems.Add(Instantiate(listItemPrefab, parent));
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_49 = __this->___listItems_9;
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_50 = __this->___listItemPrefab_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_52;
		L_52 = Object_Instantiate_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m3E502C6D03B94C1F413E0C27BD3D0DE54C0B44A6(L_50, L_51, Object_Instantiate_TisLeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94_m3E502C6D03B94C1F413E0C27BD3D0DE54C0B44A6_RuntimeMethod_var);
		NullCheck(L_49);
		List_1_Add_m672F779EAC3F4A6D3202E4969CA65368E1119D87_inline(L_49, L_52, List_1_Add_m672F779EAC3F4A6D3202E4969CA65368E1119D87_RuntimeMethod_var);
		// listItems[i].SetRank(i + 1);
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_53 = __this->___listItems_9;
		int32_t L_54 = V_4;
		NullCheck(L_53);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_55;
		L_55 = List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F(L_53, L_54, List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F_RuntimeMethod_var);
		int32_t L_56 = V_4;
		NullCheck(L_55);
		LeaderboardListItem_SetRank_m85C96A8680D5D508185D04E74FB841B059E58A69(L_55, ((int32_t)il2cpp_codegen_add(L_56, 1)), NULL);
		// for (int i = listItems.Count; i < numberOfEntries; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_01ca:
	{
		// for (int i = listItems.Count; i < numberOfEntries; i++)
		int32_t L_58 = V_4;
		int32_t L_59 = __this->___numberOfEntries_6;
		V_5 = (bool)((((int32_t)L_58) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_0193;
		}
	}
	{
		// listItemPrefab.gameObject.SetActive(false);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_61 = __this->___listItemPrefab_8;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// loadingView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___loadingView_11;
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)1, NULL);
		// list.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = __this->___list_12;
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::SetFriendEntries(System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_SetFriendEntries_mB262E4D6CCB70AC254833C150EF58AF0B3D8B8F0 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// friendsTab.Update(entries);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_0 = __this->___friendsTab_14;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_1 = ___entries0;
		NullCheck(L_0);
		Tab_Update_mE12BBA1E0DD3AE721F1879F974995F790606E33B(L_0, L_1, NULL);
		// if (activeTab == friendsTab)
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_2 = __this->___activeTab_13;
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_3 = __this->___friendsTab_14;
		V_0 = (bool)((((RuntimeObject*)(Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6*)L_2) == ((RuntimeObject*)(Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6*)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		// SetUIItems(entries);
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_5 = ___entries0;
		LoakLeaderboard_SetUIItems_m85BCB3B3FE4E0745FA1C97F04CE33FCFBA58CAF0(__this, L_5, NULL);
		// if (loadingView.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___loadingView_11;
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// loadingView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___loadingView_11;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// list.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___list_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
	}

IL_0054:
	{
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::SetGlobalEntries(System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_SetGlobalEntries_mC6231A83A4680EFEFDAEE1C5B3512FAE0CFC98B5 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// globalTab.Update(entries);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_0 = __this->___globalTab_15;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_1 = ___entries0;
		NullCheck(L_0);
		Tab_Update_mE12BBA1E0DD3AE721F1879F974995F790606E33B(L_0, L_1, NULL);
		// if (activeTab == globalTab)
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_2 = __this->___activeTab_13;
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_3 = __this->___globalTab_15;
		V_0 = (bool)((((RuntimeObject*)(Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6*)L_2) == ((RuntimeObject*)(Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6*)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		// SetUIItems(entries);
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_5 = ___entries0;
		LoakLeaderboard_SetUIItems_m85BCB3B3FE4E0745FA1C97F04CE33FCFBA58CAF0(__this, L_5, NULL);
		// if (loadingView.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___loadingView_11;
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_6, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// loadingView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___loadingView_11;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// list.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___list_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
	}

IL_0054:
	{
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_Show_m6A2F7258679B95F07E79B075526185B7BC864CCE (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, const RuntimeMethod* method) 
{
	{
		// canvas.enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_10;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_Hide_mEA6B69BB0B3C08D9D12B018EACD8763E74170377 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, const RuntimeMethod* method) 
{
	{
		// canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_10;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::ActivateTab(Loak.Unity.Tab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_ActivateTab_mD4ABDC923E6179D3929CBEA4D163ACF64341D2B3 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* ___tab0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// tab.ToggleSelected(true);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_0 = ___tab0;
		NullCheck(L_0);
		Tab_ToggleSelected_m8487A880E7E9EDF893B725AF321F9CFAD49D1E47(L_0, (bool)1, NULL);
		// SetUIItems(tab.entries);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_1 = ___tab0;
		NullCheck(L_1);
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_2 = L_1->___entries_3;
		LoakLeaderboard_SetUIItems_m85BCB3B3FE4E0745FA1C97F04CE33FCFBA58CAF0(__this, L_2, NULL);
		// if (activeTab != null)
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_3 = __this->___activeTab_13;
		V_0 = (bool)((!(((RuntimeObject*)(Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// activeTab.ToggleSelected(false);
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_5 = __this->___activeTab_13;
		NullCheck(L_5);
		Tab_ToggleSelected_m8487A880E7E9EDF893B725AF321F9CFAD49D1E47(L_5, (bool)0, NULL);
	}

IL_0030:
	{
		// activeTab = tab;
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_6 = ___tab0;
		__this->___activeTab_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeTab_13), (void*)L_6);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::SetUIItems(System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard_SetUIItems_m85BCB3B3FE4E0745FA1C97F04CE33FCFBA58CAF0 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_mC4E8FE0173A21B9C52364D51BF23FAB7992D3420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA55079A4152292F3E130607A94A656656D5F2826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetUIItemsU3Eb__20_0_mF4A46751C562A1A3D49E2FB918FE46709F75AAA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* G_B6_0 = NULL;
	List_1_tC2636C0705B471731FBAD53759369EBE554ED803* G_B6_1 = NULL;
	Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* G_B5_0 = NULL;
	List_1_tC2636C0705B471731FBAD53759369EBE554ED803* G_B5_1 = NULL;
	LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* G_B12_0 = NULL;
	LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* G_B13_1 = NULL;
	{
		// if (entries == null || entries.Count == 0)
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_0 = ___entries0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_1 = ___entries0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mA55079A4152292F3E130607A94A656656D5F2826_inline(L_1, List_1_get_Count_mA55079A4152292F3E130607A94A656656D5F2826_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// listItems.ForEach((item) => {item.gameObject.SetActive(false);});
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_4 = __this->___listItems_9;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var);
		Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* L_5 = ((U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1;
		Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* L_6 = L_5;
		G_B5_0 = L_6;
		G_B5_1 = L_4;
		if (L_6)
		{
			G_B6_0 = L_6;
			G_B6_1 = L_4;
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var);
		U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA* L_7 = ((U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* L_8 = (Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20*)il2cpp_codegen_object_new(Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m4B2F7C8CCA4ACB1CCA8A79F2BD7C77F5DEF57A74(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CSetUIItemsU3Eb__20_0_mF4A46751C562A1A3D49E2FB918FE46709F75AAA0_RuntimeMethod_var), NULL);
		Action_1_tFEBDF0739AF3C891F47D953704F4C7DA8B9E0E20* L_9 = L_8;
		((U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1), (void*)L_9);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_003a:
	{
		NullCheck(G_B6_1);
		List_1_ForEach_mC4E8FE0173A21B9C52364D51BF23FAB7992D3420(G_B6_1, G_B6_0, List_1_ForEach_mC4E8FE0173A21B9C52364D51BF23FAB7992D3420_RuntimeMethod_var);
		// return;
		goto IL_00f5;
	}

IL_0045:
	{
		// for (int i = 0; i < numberOfEntries; i++)
		V_2 = 0;
		goto IL_00e3;
	}

IL_004c:
	{
		// if (i >= entries.Count)
		int32_t L_10 = V_2;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_11 = ___entries0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mA55079A4152292F3E130607A94A656656D5F2826_inline(L_11, List_1_get_Count_mA55079A4152292F3E130607A94A656656D5F2826_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		// listItems[i].gameObject.SetActive(false);
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_14 = __this->___listItems_9;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_16;
		L_16 = List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F(L_14, L_15, List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F_RuntimeMethod_var);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// continue;
		goto IL_00df;
	}

IL_0078:
	{
		// item = listItems[i];
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_18 = __this->___listItems_9;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_20;
		L_20 = List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F(L_18, L_19, List_1_get_Item_m7BDB600A28AA1963571FF28AE6244E9A89A3856F_RuntimeMethod_var);
		V_0 = L_20;
		// item.SetUIText(entries[i].Item1, entries[i].Item2.ToString());
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_21 = V_0;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_22 = ___entries0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 L_24;
		L_24 = List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867(L_22, L_23, List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867_RuntimeMethod_var);
		String_t* L_25 = L_24.___Item1_0;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_26 = ___entries0;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 L_28;
		L_28 = List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867(L_26, L_27, List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867_RuntimeMethod_var);
		V_4 = L_28;
		int64_t* L_29 = (&(&V_4)->___Item2_1);
		String_t* L_30;
		L_30 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B(L_29, NULL);
		NullCheck(L_21);
		LeaderboardListItem_SetUIText_m4BF908D2CBEE7988F49782C1DDAB84B86F28FF3B(L_21, L_25, L_30, NULL);
		// item.Highlight(entries[i].Item1 == highlightedName ? true : false);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_31 = V_0;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_32 = ___entries0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 L_34;
		L_34 = List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867(L_32, L_33, List_1_get_Item_m75DFC1636181B2058AFE2C2F680C81A160081867_RuntimeMethod_var);
		String_t* L_35 = L_34.___Item1_0;
		String_t* L_36 = __this->___highlightedName_7;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, L_36, NULL);
		G_B11_0 = L_31;
		if (L_37)
		{
			G_B12_0 = L_31;
			goto IL_00ca;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
	}

IL_00cb:
	{
		NullCheck(G_B13_1);
		LeaderboardListItem_Highlight_m76D10D829C0AB5B9D255E19DD3D4F8BA3E47DFF7(G_B13_1, (bool)G_B13_0, NULL);
		// item.gameObject.SetActive(true);
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_38 = V_0;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
	}

IL_00df:
	{
		// for (int i = 0; i < numberOfEntries; i++)
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00e3:
	{
		// for (int i = 0; i < numberOfEntries; i++)
		int32_t L_41 = V_2;
		int32_t L_42 = __this->___numberOfEntries_6;
		V_5 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_004c;
		}
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakLeaderboard__ctor_m48A898FB96758D4508325E9B36103D78443966D6 (LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1D6D71C35238498256C676729EDEDF89086E0BCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC2636C0705B471731FBAD53759369EBE554ED803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B2C5496A46B099F4A0A24ECEA0AB96752299264);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private LeaderboardConfiguration leaderboardConfiguration = LeaderboardConfiguration.Both;
		__this->___leaderboardConfiguration_5 = 2;
		// public int numberOfEntries = 10;
		__this->___numberOfEntries_6 = ((int32_t)10);
		// public string highlightedName = "You";
		__this->___highlightedName_7 = _stringLiteral1B2C5496A46B099F4A0A24ECEA0AB96752299264;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highlightedName_7), (void*)_stringLiteral1B2C5496A46B099F4A0A24ECEA0AB96752299264);
		// private List<LeaderboardListItem> listItems = new List<LeaderboardListItem>();
		List_1_tC2636C0705B471731FBAD53759369EBE554ED803* L_0 = (List_1_tC2636C0705B471731FBAD53759369EBE554ED803*)il2cpp_codegen_object_new(List_1_tC2636C0705B471731FBAD53759369EBE554ED803_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1D6D71C35238498256C676729EDEDF89086E0BCE(L_0, List_1__ctor_m1D6D71C35238498256C676729EDEDF89086E0BCE_RuntimeMethod_var);
		__this->___listItems_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listItems_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LoakLeaderboard/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m20A84AB323DFECE1CEC6CC48E280F750EAB2AF81 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA* L_0 = (U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA*)il2cpp_codegen_object_new(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD55DF35E888B9127F81E6E8613B3457511D29EA6(L_0, NULL);
		((U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD55DF35E888B9127F81E6E8613B3457511D29EA6 (U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Loak.Unity.LoakLeaderboard/<>c::<SetUIItems>b__20_0(Loak.Unity.LeaderboardListItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSetUIItemsU3Eb__20_0_mF4A46751C562A1A3D49E2FB918FE46709F75AAA0 (U3CU3Ec_tC140F31668E94DBCCB92CC9ED09A08EC0C281BBA* __this, LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* ___item0, const RuntimeMethod* method) 
{
	{
		// listItems.ForEach((item) => {item.gameObject.SetActive(false);});
		LeaderboardListItem_t0B557F014EDCD877AD0C893F55407B2C415C1C94* L_0 = ___item0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// listItems.ForEach((item) => {item.gameObject.SetActive(false);});
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.Tab::.ctor(UnityEngine.GameObject,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab__ctor_m9D5F188FC45D340C7C4AD7FE5B926AF30C1FDE38 (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiObject0, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m3622500CD6CB2927F86946BB1862C25488764282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m80C4EA0C0BD8D786EB9F92D720F6A2067FC958AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747* V_0 = NULL;
	{
		// public Tab(GameObject uiObject, List<(string, long)> entries)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747* L_0 = (U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mC1A9392C21708EC4D161DC178058E13E835CED1D(L_0, NULL);
		V_0 = L_0;
		// this.uiObject = uiObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___uiObject0;
		__this->___uiObject_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uiObject_0), (void*)L_1);
		// this.button = uiObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___uiObject0;
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3;
		L_3 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_2, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___button_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___button_1), (void*)L_3);
		// this.bullet = uiObject.GetComponentInChildren<Image>(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___uiObject0;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m3622500CD6CB2927F86946BB1862C25488764282(L_4, (bool)1, GameObject_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m3622500CD6CB2927F86946BB1862C25488764282_RuntimeMethod_var);
		__this->___bullet_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bullet_2), (void*)L_5);
		// this.entries = entries;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_6 = ___entries1;
		__this->___entries_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entries_3), (void*)L_6);
		// var tab = this;
		U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747* L_7 = V_0;
		NullCheck(L_7);
		L_7->___tab_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___tab_0), (void*)__this);
		// button.onClick.AddListener(() => {LoakLeaderboard.Instance.ActivateTab(tab);});
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___button_1;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747* L_10 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m80C4EA0C0BD8D786EB9F92D720F6A2067FC958AE_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.Tab::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab_SetActive_mB50AB16BBB68F06560ADAD5ABBD3AC722BE18811 (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// uiObject.SetActive(val);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___uiObject_0;
		bool L_1 = ___val0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.Tab::Update(System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab_Update_mE12BBA1E0DD3AE721F1879F974995F790606E33B (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ___entries0, const RuntimeMethod* method) 
{
	{
		// this.entries = entries;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_0 = ___entries0;
		__this->___entries_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entries_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void Loak.Unity.Tab::ToggleSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab_ToggleSelected_m8487A880E7E9EDF893B725AF321F9CFAD49D1E47 (Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// bullet.enabled = val;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___bullet_2;
		bool L_1 = ___val0;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// button.interactable = !val;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___button_1;
		bool L_3 = ___val0;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.Tab/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC1A9392C21708EC4D161DC178058E13E835CED1D (U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Loak.Unity.Tab/<>c__DisplayClass4_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m80C4EA0C0BD8D786EB9F92D720F6A2067FC958AE (U3CU3Ec__DisplayClass4_0_t63ECA664F7F47B600E4348DA00EE5B59311A6747* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.AddListener(() => {LoakLeaderboard.Instance.ActivateTab(tab);});
		LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC* L_0 = ((LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_StaticFields*)il2cpp_codegen_static_fields_for(LoakLeaderboard_tC1810234A0129B19BD3EDF638EB2E1E86FBD2EFC_il2cpp_TypeInfo_var))->___Instance_4;
		Tab_t0BD9C10059AD001CAF926A9AFEFD3D00C0D778D6* L_1 = __this->___tab_0;
		NullCheck(L_0);
		LoakLeaderboard_ActivateTab_mD4ABDC923E6179D3929CBEA4D163ACF64341D2B3(L_0, L_1, NULL);
		// button.onClick.AddListener(() => {LoakLeaderboard.Instance.ActivateTab(tab);});
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Loak.Unity.LoakRoomManagement::get_roomCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoakRoomManagement_get_roomCode_m61BF335ED90705C4FF572C865D77D99A01545046 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// public string roomCode { get; private set; } = null; // Unique code for matching players to a room.
		String_t* L_0 = __this->___U3CroomCodeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::set_roomCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_set_roomCode_m7FA5225328B0E347D605DC592E6DCC0F38793A46 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string roomCode { get; private set; } = null; // Unique code for matching players to a room.
		String_t* L_0 = ___value0;
		__this->___U3CroomCodeU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CroomCodeU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player> Loak.Unity.LoakRoomManagement::get_connectedPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<Guid, Player> connectedPlayers { get; private set; } = new Dictionary<Guid, Player>(); // Collection of all players currently in the room.
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_0 = __this->___U3CconnectedPlayersU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::set_connectedPlayers(System.Collections.Generic.Dictionary`2<System.Guid,Loak.Unity.LoakRoomManagement/Player>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_set_connectedPlayers_m041A90FC0FA93E38A4824C4FF56E57D013DFD3E2 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<Guid, Player> connectedPlayers { get; private set; } = new Dictionary<Guid, Player>(); // Collection of all players currently in the room.
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_0 = ___value0;
		__this->___U3CconnectedPlayersU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconnectedPlayersU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_Awake_m3A0E609424DDD41D048A149197245CF1BFB59B67 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B_StaticFields*)il2cpp_codegen_static_fields_for(LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B_StaticFields*)il2cpp_codegen_static_fields_for(LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_Start_mE2F24A660E85E5B1DD42B5E37889CE7C31F0C0AB (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m13A9042E39DE81F9357ABE1A0C23742537007361_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mEC761BB226AE1816EBB639162DD7664BB57B69F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// seshMan = LoakSessionManager.Instance;
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_0 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		__this->___seshMan_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___seshMan_22), (void*)L_0);
		// canvas = GetComponentInChildren<Canvas>(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5(__this, (bool)1, Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5_RuntimeMethod_var);
		__this->___canvas_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_10), (void*)L_1);
		// modeSelectView = canvas.transform.GetChild(0).gameObject;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_10;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		__this->___modeSelectView_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modeSelectView_11), (void*)L_5);
		// multiplayerView = canvas.transform.GetChild(1).gameObject;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = __this->___canvas_10;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 1, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		__this->___multiplayerView_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multiplayerView_12), (void*)L_9);
		// joinView = canvas.transform.GetChild(2).gameObject;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = __this->___canvas_10;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_11, 2, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		__this->___joinView_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joinView_13), (void*)L_13);
		// joinInput = joinView.GetComponentInChildren<TMP_InputField>(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___joinView_13;
		NullCheck(L_14);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_15;
		L_15 = GameObject_GetComponentInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mEC761BB226AE1816EBB639162DD7664BB57B69F1(L_14, (bool)1, GameObject_GetComponentInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mEC761BB226AE1816EBB639162DD7664BB57B69F1_RuntimeMethod_var);
		__this->___joinInput_14 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joinInput_14), (void*)L_15);
		// lobbyView = canvas.transform.GetChild(3).gameObject;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_10;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_17, 3, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		__this->___lobbyView_15 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lobbyView_15), (void*)L_19);
		// lobbyCode = lobbyView.transform.GetChild(3).GetComponentsInChildren<TMP_Text>(true)[1];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___lobbyView_15;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_21, 3, NULL);
		NullCheck(L_22);
		TMP_TextU5BU5D_t12384CBAF397196B9A7886087BDC8C19D800C24F* L_23;
		L_23 = Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1(L_22, (bool)1, Component_GetComponentsInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF952CAD5EC1E7F6AFBA9FBC92C7A88EA2519D3B1_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24 = 1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		__this->___lobbyCode_16 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lobbyCode_16), (void*)L_25);
		// lobbyListParent = lobbyView.transform.GetChild(3).GetChild(2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___lobbyView_15;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, 3, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_28, 2, NULL);
		__this->___lobbyListParent_17 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lobbyListParent_17), (void*)L_29);
		// lobbyListPrefab = lobbyListParent.GetChild(1).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___lobbyListParent_17;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, 1, NULL);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		__this->___lobbyListPrefab_18 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lobbyListPrefab_18), (void*)L_32);
		// lobbyPlayButton = lobbyView.GetComponentInChildren<Button>(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___lobbyView_15;
		NullCheck(L_33);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_34;
		L_34 = GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m13A9042E39DE81F9357ABE1A0C23742537007361(L_33, (bool)1, GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m13A9042E39DE81F9357ABE1A0C23742537007361_RuntimeMethod_var);
		__this->___lobbyPlayButton_20 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lobbyPlayButton_20), (void*)L_34);
		// localizeView = canvas.transform.GetChild(4).gameObject;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_35 = __this->___canvas_10;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_36, 4, NULL);
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		__this->___localizeView_21 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizeView_21), (void*)L_38);
		// }
		return;
	}
}
// System.String Loak.Unity.LoakRoomManagement::GenerateRoomCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoakRoomManagement_GenerateRoomCode_m9A0955E556355E104CC2C0BD5BA81BB800C0ADDC (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6D054A0FFBB0A73F649A23C61B32D8B1F3D9BEE);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		// var random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		// var result = new StringBuilder(6);
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_1, 6, NULL);
		V_1 = L_1;
		// for (int i = 0; i < 6; i++)
		V_2 = 0;
		goto IL_0039;
	}

IL_0012:
	{
		// result.Append(chars[random.Next(chars.Length)]);
		StringBuilder_t* L_2 = V_1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = V_0;
		NullCheck(_stringLiteralD6D054A0FFBB0A73F649A23C61B32D8B1F3D9BEE);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD6D054A0FFBB0A73F649A23C61B32D8B1F3D9BEE, NULL);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_3, L_4);
		NullCheck(_stringLiteralD6D054A0FFBB0A73F649A23C61B32D8B1F3D9BEE);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralD6D054A0FFBB0A73F649A23C61B32D8B1F3D9BEE, L_5, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_2, L_6, NULL);
		// for (int i = 0; i < 6; i++)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_9 = V_2;
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)6))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0012;
		}
	}
	{
		// return result.ToString();
		StringBuilder_t* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		V_4 = L_12;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		String_t* L_13 = V_4;
		return L_13;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::SetRoomCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_SetRoomCode_m59406A35640CF67F500CFAE5664E124456465A05 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, String_t* ___code0, const RuntimeMethod* method) 
{
	{
		// roomCode = code.ToUpper();
		String_t* L_0 = ___code0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_0, NULL);
		LoakRoomManagement_set_roomCode_m7FA5225328B0E347D605DC592E6DCC0F38793A46_inline(__this, L_1, NULL);
		// lobbyCode.text = roomCode;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___lobbyCode_16;
		String_t* L_3;
		L_3 = LoakRoomManagement_get_roomCode_m61BF335ED90705C4FF572C865D77D99A01545046_inline(__this, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_Back_mD31BDD9E2E696B0BEB1A3995FE1B185D51194AAB (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m2997632D39CC284C898519AEBBCE5EB62B37185F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mC1A039F33D6AD1109A9552FFF614E27ED05AB445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m90DE235285047FDC7EC7167DAADFB93E428AB227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m688BFD581676B247B11FAEFAB7275487413AE101_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3D943D3749D1B38FD3A470AEE2568D11213F85BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA6E64A809B9A4445C48CB959F4BCA0F81562B03A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m572AAE9850586E7DD8E018C1AF5F59D19B842109_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	bool V_5 = false;
	Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	{
		// if (multiplayerView.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___multiplayerView_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// multiplayerView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___multiplayerView_12;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// modeSelectView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___modeSelectView_11;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		goto IL_019b;
	}

IL_0031:
	{
		// else if (joinView.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___joinView_13;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// joinView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___joinView_13;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// multiplayerView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___multiplayerView_12;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		goto IL_019b;
	}

IL_0061:
	{
		// else if (lobbyView.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___lobbyView_15;
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00f9;
		}
	}
	{
		// lobbyView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___lobbyView_15;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// seshMan.LeaveSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_14 = __this->___seshMan_22;
		NullCheck(L_14);
		LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494(L_14, NULL);
		// connectedPlayers.Clear();
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_15;
		L_15 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		NullCheck(L_15);
		Dictionary_2_Clear_m2997632D39CC284C898519AEBBCE5EB62B37185F(L_15, Dictionary_2_Clear_m2997632D39CC284C898519AEBBCE5EB62B37185F_RuntimeMethod_var);
		// foreach (var item in lobbyListItems.Values)
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_16 = __this->___lobbyListItems_19;
		NullCheck(L_16);
		ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74* L_17;
		L_17 = Dictionary_2_get_Values_m90DE235285047FDC7EC7167DAADFB93E428AB227(L_16, Dictionary_2_get_Values_m90DE235285047FDC7EC7167DAADFB93E428AB227_RuntimeMethod_var);
		NullCheck(L_17);
		Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416 L_18;
		L_18 = ValueCollection_GetEnumerator_m572AAE9850586E7DD8E018C1AF5F59D19B842109(L_17, ValueCollection_GetEnumerator_m572AAE9850586E7DD8E018C1AF5F59D19B842109_RuntimeMethod_var);
		V_3 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m688BFD581676B247B11FAEFAB7275487413AE101((&V_3), Enumerator_Dispose_m688BFD581676B247B11FAEFAB7275487413AE101_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c0_1;
			}

IL_00ad_1:
			{
				// foreach (var item in lobbyListItems.Values)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Enumerator_get_Current_mA6E64A809B9A4445C48CB959F4BCA0F81562B03A_inline((&V_3), Enumerator_get_Current_mA6E64A809B9A4445C48CB959F4BCA0F81562B03A_RuntimeMethod_var);
				V_4 = L_19;
				// Destroy(item);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
			}

IL_00c0_1:
			{
				// foreach (var item in lobbyListItems.Values)
				bool L_21;
				L_21 = Enumerator_MoveNext_m3D943D3749D1B38FD3A470AEE2568D11213F85BF((&V_3), Enumerator_MoveNext_m3D943D3749D1B38FD3A470AEE2568D11213F85BF_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_00ad_1;
				}
			}
			{
				goto IL_00da;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00da:
	{
		// lobbyListItems.Clear();
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_22 = __this->___lobbyListItems_19;
		NullCheck(L_22);
		Dictionary_2_Clear_mC1A039F33D6AD1109A9552FFF614E27ED05AB445(L_22, Dictionary_2_Clear_mC1A039F33D6AD1109A9552FFF614E27ED05AB445_RuntimeMethod_var);
		// multiplayerView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___multiplayerView_12;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		goto IL_019b;
	}

IL_00f9:
	{
		// else if (localizeView.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___localizeView_21;
		NullCheck(L_24);
		bool L_25;
		L_25 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_24, NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_019b;
		}
	}
	{
		// localizeView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___localizeView_21;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// seshMan.LeaveSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_28 = __this->___seshMan_22;
		NullCheck(L_28);
		LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494(L_28, NULL);
		// connectedPlayers.Clear();
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_29;
		L_29 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		NullCheck(L_29);
		Dictionary_2_Clear_m2997632D39CC284C898519AEBBCE5EB62B37185F(L_29, Dictionary_2_Clear_m2997632D39CC284C898519AEBBCE5EB62B37185F_RuntimeMethod_var);
		// foreach (var item in lobbyListItems.Values)
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_30 = __this->___lobbyListItems_19;
		NullCheck(L_30);
		ValueCollection_tA20F3A762B63C6D93088649F975F6AC65A93FB74* L_31;
		L_31 = Dictionary_2_get_Values_m90DE235285047FDC7EC7167DAADFB93E428AB227(L_30, Dictionary_2_get_Values_m90DE235285047FDC7EC7167DAADFB93E428AB227_RuntimeMethod_var);
		NullCheck(L_31);
		Enumerator_t06DD604AF1C980C02FD1A289C9C7EE86C7ABC416 L_32;
		L_32 = ValueCollection_GetEnumerator_m572AAE9850586E7DD8E018C1AF5F59D19B842109(L_31, ValueCollection_GetEnumerator_m572AAE9850586E7DD8E018C1AF5F59D19B842109_RuntimeMethod_var);
		V_6 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0166:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m688BFD581676B247B11FAEFAB7275487413AE101((&V_6), Enumerator_Dispose_m688BFD581676B247B11FAEFAB7275487413AE101_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_015b_1;
			}

IL_0148_1:
			{
				// foreach (var item in lobbyListItems.Values)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Enumerator_get_Current_mA6E64A809B9A4445C48CB959F4BCA0F81562B03A_inline((&V_6), Enumerator_get_Current_mA6E64A809B9A4445C48CB959F4BCA0F81562B03A_RuntimeMethod_var);
				V_7 = L_33;
				// Destroy(item);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_7;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_34, NULL);
			}

IL_015b_1:
			{
				// foreach (var item in lobbyListItems.Values)
				bool L_35;
				L_35 = Enumerator_MoveNext_m3D943D3749D1B38FD3A470AEE2568D11213F85BF((&V_6), Enumerator_MoveNext_m3D943D3749D1B38FD3A470AEE2568D11213F85BF_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_0148_1;
				}
			}
			{
				goto IL_0175;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0175:
	{
		// lobbyListItems.Clear();
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_36 = __this->___lobbyListItems_19;
		NullCheck(L_36);
		Dictionary_2_Clear_mC1A039F33D6AD1109A9552FFF614E27ED05AB445(L_36, Dictionary_2_Clear_mC1A039F33D6AD1109A9552FFF614E27ED05AB445_RuntimeMethod_var);
		// multiplayerView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___multiplayerView_12;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		// seshMan.StartSoloSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_38 = __this->___seshMan_22;
		NullCheck(L_38);
		LoakSessionManager_StartSoloSession_m681EA07211BE705B2ECDD92BB342EF2F6D79869B(L_38, NULL);
	}

IL_019b:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::PlayWithFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_PlayWithFriends_m585E47AED2A1AF6E5461CA210A83A3827AC85347 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// modeSelectView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___modeSelectView_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// multiplayerView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___multiplayerView_12;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::PlaySolo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_PlaySolo_m64FC2842C933851280700AD5573CD11F23B67147 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// seshMan.StartSoloSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_0 = __this->___seshMan_22;
		NullCheck(L_0);
		LoakSessionManager_StartSoloSession_m681EA07211BE705B2ECDD92BB342EF2F6D79869B(L_0, NULL);
		// canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->___canvas_10;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::CreateRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_CreateRoom_mE722A77450BC7B1B08B538001A6B825E9600B47E (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// SetRoomCode(GenerateRoomCode());
		String_t* L_0;
		L_0 = LoakRoomManagement_GenerateRoomCode_m9A0955E556355E104CC2C0BD5BA81BB800C0ADDC(__this, NULL);
		LoakRoomManagement_SetRoomCode_m59406A35640CF67F500CFAE5664E124456465A05(__this, L_0, NULL);
		// creating = true;
		__this->___creating_23 = (bool)1;
		// seshMan.JoinSession(roomPrefix + roomCode);
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_1 = __this->___seshMan_22;
		String_t* L_2 = __this->___roomPrefix_5;
		String_t* L_3;
		L_3 = LoakRoomManagement_get_roomCode_m61BF335ED90705C4FF572C865D77D99A01545046_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_3, NULL);
		NullCheck(L_1);
		LoakSessionManager_JoinSession_m895459BCFA0B91799008C0DDFB3EC6B8792F52B7(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::JoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_JoinRoom_m35457E919550E7833F85CC165A81AEC20B0BBAE9 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// multiplayerView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___multiplayerView_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// joinInput.text = "";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = __this->___joinInput_14;
		NullCheck(L_1);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// joinView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___joinView_13;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::SubmitCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_SubmitCode_m688FB3EEAC32F7239C10A7F8F90B651A3D3E1EDC (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (joinInput.text == null || joinInput.text == "")
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___joinInput_14;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___joinInput_14;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 1;
	}

IL_0026:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_0073;
	}

IL_002c:
	{
		// SetRoomCode(joinInput.text);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___joinInput_14;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_6, NULL);
		LoakRoomManagement_SetRoomCode_m59406A35640CF67F500CFAE5664E124456465A05(__this, L_7, NULL);
		// joinInput.text = "";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8 = __this->___joinInput_14;
		NullCheck(L_8);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// creating = false;
		__this->___creating_23 = (bool)0;
		// seshMan.JoinSession(roomPrefix + roomCode);
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_9 = __this->___seshMan_22;
		String_t* L_10 = __this->___roomPrefix_5;
		String_t* L_11;
		L_11 = LoakRoomManagement_get_roomCode_m61BF335ED90705C4FF572C865D77D99A01545046_inline(__this, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_11, NULL);
		NullCheck(L_9);
		LoakSessionManager_JoinSession_m895459BCFA0B91799008C0DDFB3EC6B8792F52B7(L_9, L_12, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::OnRoomJoined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_OnRoomJoined_mAB30EE780A9CC85BF2EF912C7A8BAEBD1CAB009C (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (creating && !seshMan.IsHost)
		bool L_0 = __this->___creating_23;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_1 = __this->___seshMan_22;
		NullCheck(L_1);
		bool L_2 = L_1->___IsHost_12;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// seshMan.LeaveSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_4 = __this->___seshMan_22;
		NullCheck(L_4);
		LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494(L_4, NULL);
		// roomCode = null;
		LoakRoomManagement_set_roomCode_m7FA5225328B0E347D605DC592E6DCC0F38793A46_inline(__this, (String_t*)NULL, NULL);
		// return;
		goto IL_007c;
	}

IL_0035:
	{
		// else if (!creating && seshMan.IsHost)
		bool L_5 = __this->___creating_23;
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_6 = __this->___seshMan_22;
		NullCheck(L_6);
		bool L_7 = L_6->___IsHost_12;
		G_B8_0 = ((int32_t)(L_7));
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
	}

IL_004b:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// seshMan.LeaveSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_9 = __this->___seshMan_22;
		NullCheck(L_9);
		LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494(L_9, NULL);
		// roomCode = null;
		LoakRoomManagement_set_roomCode_m7FA5225328B0E347D605DC592E6DCC0F38793A46_inline(__this, (String_t*)NULL, NULL);
		// return;
		goto IL_007c;
	}

IL_0066:
	{
		// if (seshMan.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_10 = __this->___seshMan_22;
		NullCheck(L_10);
		bool L_11 = L_10->___IsHost_12;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		// JoinAccepted();
		LoakRoomManagement_JoinAccepted_m00A4BCB80959E49E4CC0D3130C452047CF88ADD2(__this, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::JoinAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_JoinAccepted_m00A4BCB80959E49E4CC0D3130C452047CF88ADD2 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2135C6A93AE8571C504AFB58DDF03497BAAAF9F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// seshMan.SendToHost(0, new object[] {username});
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_0 = __this->___seshMan_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = __this->___username_7;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		LoakSessionManager_SendToHost_m5A862A6E62F2C68946CE33BBBE00070F7FD44D26(L_0, 0, L_2, 1, NULL);
		// multiplayerView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___multiplayerView_12;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// joinView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___joinView_13;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// lobbyView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___lobbyView_15;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// lobbyPlayButton.interactable = seshMan.IsHost;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___lobbyPlayButton_20;
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_8 = __this->___seshMan_22;
		NullCheck(L_8);
		bool L_9 = L_8->___IsHost_12;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, L_9, NULL);
		// if (!seshMan.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_10 = __this->___seshMan_22;
		NullCheck(L_10);
		bool L_11 = L_10->___IsHost_12;
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		// lobbyPlayButton.GetComponentInChildren<TMP_Text>().text = "Waiting for Host...";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___lobbyPlayButton_20;
		NullCheck(L_13);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_14;
		L_14 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA(L_13, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA5C534600978A673C682FADEE1BBFE1B535981AA_RuntimeMethod_var);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, _stringLiteralE2135C6A93AE8571C504AFB58DDF03497BAAAF9F);
	}

IL_0084:
	{
		// lobbyCode.text = roomCode;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15 = __this->___lobbyCode_16;
		String_t* L_16;
		L_16 = LoakRoomManagement_get_roomCode_m61BF335ED90705C4FF572C865D77D99A01545046_inline(__this, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_16);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::StartRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_StartRoom_mE5A167D58DBE12B0357B9696E68D89432EC48BC3 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// seshMan.StartMultiplayerSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_0 = __this->___seshMan_22;
		NullCheck(L_0);
		LoakSessionManager_StartMultiplayerSession_mA837C7658C31D9C63694CC5C6C5EBF26A17E429E(L_0, NULL);
		// seshMan.SendToAll(3, seshMan.me.Identifier, null);
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_1 = __this->___seshMan_22;
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_2 = __this->___seshMan_22;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___me_13;
		NullCheck(L_3);
		Guid_t L_4;
		L_4 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_1);
		LoakSessionManager_SendToAll_mE8F8D2359E9A01DF6B4683670B568ACB0BF93E4A(L_1, 3, L_4, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, 1, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::OnRoomStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_OnRoomStarted_m951F736E31281359E8EBA55E4B3A8141ABBFF4B1 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// lobbyView.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lobbyView_15;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// localizeView.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___localizeView_21;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::OnRoomLocalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_OnRoomLocalized_m88EC219F7E0B3334C304BE2B3FFA87C7BA6D0FFE (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_10;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::OnPlayerJoined(Niantic.ARDK.Networking.IPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_OnPlayerJoined_mF5B0F61BE28092D38E3B9F52720FE3311DBDC6AE (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, RuntimeObject* ___peer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE2AB14A0B5A0123E0E21CB828AA20339D51A0EA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m788DD6A9A71FFEF6231D041B90ACA616B6062172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF382B27F4C37DE6EC8245019C1E5847F769D889F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5ED2463AFC7EE03A9773956851811667A1F30BA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m487F6D5D00341DBFAA6CF2127BACFFE3B67A0429_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mFE70DDF2FA91865CBE3C5013297F1B6874D6B875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m0A1FF0AB691CD0243AAB6D4D5E9866CC5E5935AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6459CF09B306447EAD4BE3AA9AFA0A834A231274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (!seshMan.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_0 = __this->___seshMan_22;
		NullCheck(L_0);
		bool L_1 = L_0->___IsHost_12;
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_0101;
	}

IL_0018:
	{
		// bool accepted = true;
		V_0 = (bool)1;
		// if (connectedPlayers.Count >= roomCap)
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_3;
		L_3 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445(L_3, Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445_RuntimeMethod_var);
		int32_t L_5 = __this->___roomCap_6;
		V_4 = (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// accepted = false;
		V_0 = (bool)0;
	}

IL_0038:
	{
		// if (seshMan.sessionBegan)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_7 = __this->___seshMan_22;
		NullCheck(L_7);
		bool L_8 = L_7->___sessionBegan_14;
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// accepted = false;
		V_0 = (bool)0;
	}

IL_004b:
	{
		// seshMan.SendToPeer(2, peer, new object[] {accepted});
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_10 = __this->___seshMan_22;
		RuntimeObject* L_11 = ___peer0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		bool L_14 = V_0;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_10);
		LoakSessionManager_SendToPeer_m13D0788DFF015CE2EA973F6419EA9596ADC6793D(L_10, 2, L_11, L_13, 1, NULL);
		// if (!accepted)
		bool L_17 = V_0;
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		// return;
		goto IL_0101;
	}

IL_0078:
	{
		// List<Guid> idList = new List<Guid>();
		List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* L_19 = (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15*)il2cpp_codegen_object_new(List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_m6459CF09B306447EAD4BE3AA9AFA0A834A231274(L_19, List_1__ctor_m6459CF09B306447EAD4BE3AA9AFA0A834A231274_RuntimeMethod_var);
		V_1 = L_19;
		// List<string> nameList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_20, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_20;
		// foreach (KeyValuePair<Guid, Player> pair in connectedPlayers)
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_21;
		L_21 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		NullCheck(L_21);
		Enumerator_t361FA7466CF0D8AE2B66A485CCFF858A3132520C L_22;
		L_22 = Dictionary_2_GetEnumerator_mE2AB14A0B5A0123E0E21CB828AA20339D51A0EA3(L_21, Dictionary_2_GetEnumerator_mE2AB14A0B5A0123E0E21CB828AA20339D51A0EA3_RuntimeMethod_var);
		V_7 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m788DD6A9A71FFEF6231D041B90ACA616B6062172((&V_7), Enumerator_Dispose_m788DD6A9A71FFEF6231D041B90ACA616B6062172_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c0_1;
			}

IL_0094_1:
			{
				// foreach (KeyValuePair<Guid, Player> pair in connectedPlayers)
				KeyValuePair_2_t4B1910F079DA7963CD9813C871E4AE1EAFEF3C35 L_23;
				L_23 = Enumerator_get_Current_m5ED2463AFC7EE03A9773956851811667A1F30BA6_inline((&V_7), Enumerator_get_Current_m5ED2463AFC7EE03A9773956851811667A1F30BA6_RuntimeMethod_var);
				V_8 = L_23;
				// idList.Add(pair.Key);
				List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* L_24 = V_1;
				Guid_t L_25;
				L_25 = KeyValuePair_2_get_Key_m487F6D5D00341DBFAA6CF2127BACFFE3B67A0429_inline((&V_8), KeyValuePair_2_get_Key_m487F6D5D00341DBFAA6CF2127BACFFE3B67A0429_RuntimeMethod_var);
				NullCheck(L_24);
				List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_inline(L_24, L_25, List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_RuntimeMethod_var);
				// nameList.Add(pair.Value.username);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_2;
				Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* L_27;
				L_27 = KeyValuePair_2_get_Value_mFE70DDF2FA91865CBE3C5013297F1B6874D6B875_inline((&V_8), KeyValuePair_2_get_Value_mFE70DDF2FA91865CBE3C5013297F1B6874D6B875_RuntimeMethod_var);
				NullCheck(L_27);
				String_t* L_28 = L_27->___username_1;
				NullCheck(L_26);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_26, L_28, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_00c0_1:
			{
				// foreach (KeyValuePair<Guid, Player> pair in connectedPlayers)
				bool L_29;
				L_29 = Enumerator_MoveNext_mF382B27F4C37DE6EC8245019C1E5847F769D889F((&V_7), Enumerator_MoveNext_mF382B27F4C37DE6EC8245019C1E5847F769D889F_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0094_1;
				}
			}
			{
				goto IL_00da;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00da:
	{
		// seshMan.SendToPeer(1, peer, new object[] {idList.ToArray(), nameList.ToArray()});
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_30 = __this->___seshMan_22;
		RuntimeObject* L_31 = ___peer0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* L_34 = V_1;
		NullCheck(L_34);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_35;
		L_35 = List_1_ToArray_m0A1FF0AB691CD0243AAB6D4D5E9866CC5E5935AF(L_34, List_1_ToArray_m0A1FF0AB691CD0243AAB6D4D5E9866CC5E5935AF_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_33;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = V_2;
		NullCheck(L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38;
		L_38 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_37, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_38);
		NullCheck(L_30);
		LoakSessionManager_SendToPeer_m13D0788DFF015CE2EA973F6419EA9596ADC6793D(L_30, 1, L_31, L_36, 1, NULL);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::OnPlayerLeft(Niantic.ARDK.Networking.IPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_OnPlayerLeft_m39C1B6A478EFA46F01BACCD99D91C91B7FFC883E (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, RuntimeObject* ___peer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1398A7684BBFE794CD38D6C2D5558D861801B219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3ACC07363CE8359A9083172D685660E4ADC4C002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9250AD4440543EAF799D581494E13DA2CB597B4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!connectedPlayers.ContainsKey(peer.Identifier))
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_0;
		L_0 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		RuntimeObject* L_1 = ___peer0;
		NullCheck(L_1);
		Guid_t L_2;
		L_2 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1398A7684BBFE794CD38D6C2D5558D861801B219(L_0, L_2, Dictionary_2_ContainsKey_m1398A7684BBFE794CD38D6C2D5558D861801B219_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_0056;
	}

IL_001b:
	{
		// Destroy(lobbyListItems[peer.Identifier]);
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_5 = __this->___lobbyListItems_19;
		RuntimeObject* L_6 = ___peer0;
		NullCheck(L_6);
		Guid_t L_7;
		L_7 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E(L_5, L_7, Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// lobbyListItems.Remove(peer.Identifier);
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_9 = __this->___lobbyListItems_19;
		RuntimeObject* L_10 = ___peer0;
		NullCheck(L_10);
		Guid_t L_11;
		L_11 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_Remove_m3ACC07363CE8359A9083172D685660E4ADC4C002(L_9, L_11, Dictionary_2_Remove_m3ACC07363CE8359A9083172D685660E4ADC4C002_RuntimeMethod_var);
		// connectedPlayers.Remove(peer.Identifier);
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_13;
		L_13 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		RuntimeObject* L_14 = ___peer0;
		NullCheck(L_14);
		Guid_t L_15;
		L_15 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_m9250AD4440543EAF799D581494E13DA2CB597B4F(L_13, L_15, Dictionary_2_Remove_m9250AD4440543EAF799D581494E13DA2CB597B4F_RuntimeMethod_var);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::OnDataRecieved(System.UInt32,System.Guid,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement_OnDataRecieved_mCBDF84223664A9056A4DE3BFCFC92665B6BE9835 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, uint32_t ___tag0, Guid_t ___sender1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF3B6DB0E3540E6D731056FABDC9355991E86B460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA180309A777C8CBF81E0E6D32475343386BD5D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDD268362D5FC4AA875D0B30248843584762ACCE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEBFE93D5D8C9CA5E4E015695E10136300141661);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	bool V_4 = false;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	{
		// switch (tag)
		uint32_t L_0 = ___tag0;
		V_6 = L_0;
		uint32_t L_1 = V_6;
		V_5 = L_1;
		uint32_t L_2 = V_5;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_0102;
			}
			case 2:
			{
				goto IL_01f6;
			}
			case 3:
			{
				goto IL_022b;
			}
		}
	}
	{
		goto IL_024d;
	}

IL_0024:
	{
		// var username = (string)data[0];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___data2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// var newEntry = Instantiate(lobbyListPrefab, lobbyListParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___lobbyListPrefab_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___lobbyListParent_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_1 = L_8;
		// lobbyListItems.Add(sender, newEntry);
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_9 = __this->___lobbyListItems_19;
		Guid_t L_10 = ___sender1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_9);
		Dictionary_2_Add_mA180309A777C8CBF81E0E6D32475343386BD5D6A(L_9, L_10, L_11, Dictionary_2_Add_mA180309A777C8CBF81E0E6D32475343386BD5D6A_RuntimeMethod_var);
		// connectedPlayers[sender] = new Player(sender, username);
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_12;
		L_12 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		Guid_t L_13 = ___sender1;
		Guid_t L_14 = ___sender1;
		String_t* L_15 = V_0;
		Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* L_16 = (Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474*)il2cpp_codegen_object_new(Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Player__ctor_m521FA2C6FDD1DC8CB8F939D9181F3D3D76E2C872(L_16, L_14, L_15, NULL);
		NullCheck(L_12);
		Dictionary_2_set_Item_mDD268362D5FC4AA875D0B30248843584762ACCE6(L_12, L_13, L_16, Dictionary_2_set_Item_mDD268362D5FC4AA875D0B30248843584762ACCE6_RuntimeMethod_var);
		// if (username == null || username == "")
		String_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = ((int32_t)(L_19));
		goto IL_0072;
	}

IL_0071:
	{
		G_B5_0 = 1;
	}

IL_0072:
	{
		V_7 = (bool)G_B5_0;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0093;
		}
	}
	{
		// username = $"Player {connectedPlayers.Count}";
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_21;
		L_21 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445(L_21, Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445_RuntimeMethod_var);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEEBFE93D5D8C9CA5E4E015695E10136300141661, L_24, NULL);
		V_0 = L_25;
	}

IL_0093:
	{
		// newEntry.transform.GetChild(1).GetComponentInChildren<TMP_Text>(true).text = username.Substring(0, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_1;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, 1, NULL);
		NullCheck(L_28);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_29;
		L_29 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF3B6DB0E3540E6D731056FABDC9355991E86B460(L_28, (bool)1, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF3B6DB0E3540E6D731056FABDC9355991E86B460_RuntimeMethod_var);
		String_t* L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_30, 0, 1, NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_29, L_31);
		// newEntry.transform.GetChild(2).GetComponent<TMP_Text>().text = username;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_1;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_33, 2, NULL);
		NullCheck(L_34);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_35;
		L_35 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_34, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		String_t* L_36 = V_0;
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_35, L_36);
		// newEntry.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_1;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		// if (seshMan.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_38 = __this->___seshMan_22;
		NullCheck(L_38);
		bool L_39 = L_38->___IsHost_12;
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_00fd;
		}
	}
	{
		// seshMan.SendToAll(0, sender, new object[] {username});
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_41 = __this->___seshMan_22;
		Guid_t L_42 = ___sender1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_43;
		String_t* L_45 = V_0;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_45);
		NullCheck(L_41);
		LoakSessionManager_SendToAll_mE8F8D2359E9A01DF6B4683670B568ACB0BF93E4A(L_41, 0, L_42, L_44, 1, NULL);
	}

IL_00fd:
	{
		// break;
		goto IL_024d;
	}

IL_0102:
	{
		// var idList = (Guid[])data[0];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = ___data2;
		NullCheck(L_46);
		int32_t L_47 = 0;
		RuntimeObject* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_2 = ((GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)Castclass((RuntimeObject*)L_48, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42_il2cpp_TypeInfo_var));
		// var nameList = (string[])data[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = ___data2;
		NullCheck(L_49);
		int32_t L_50 = 1;
		RuntimeObject* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_3 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_51, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		// for (int i = 0; i < idList.Length; i++)
		V_9 = 0;
		goto IL_01e4;
	}

IL_011c:
	{
		// username = nameList[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_3;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_0 = L_55;
		// newEntry = Instantiate(lobbyListPrefab, lobbyListParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___lobbyListPrefab_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___lobbyListParent_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_56, L_57, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_1 = L_58;
		// lobbyListItems.Add(idList[i], newEntry);
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_59 = __this->___lobbyListItems_19;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_60 = V_2;
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Guid_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = V_1;
		NullCheck(L_59);
		Dictionary_2_Add_mA180309A777C8CBF81E0E6D32475343386BD5D6A(L_59, L_63, L_64, Dictionary_2_Add_mA180309A777C8CBF81E0E6D32475343386BD5D6A_RuntimeMethod_var);
		// connectedPlayers[idList[i]] = new Player(idList[i], username);
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_65;
		L_65 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_66 = V_2;
		int32_t L_67 = V_9;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Guid_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_70 = V_2;
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Guid_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		String_t* L_74 = V_0;
		Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* L_75 = (Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474*)il2cpp_codegen_object_new(Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Player__ctor_m521FA2C6FDD1DC8CB8F939D9181F3D3D76E2C872(L_75, L_73, L_74, NULL);
		NullCheck(L_65);
		Dictionary_2_set_Item_mDD268362D5FC4AA875D0B30248843584762ACCE6(L_65, L_69, L_75, Dictionary_2_set_Item_mDD268362D5FC4AA875D0B30248843584762ACCE6_RuntimeMethod_var);
		// if (username == null || username == "")
		String_t* L_76 = V_0;
		if (!L_76)
		{
			goto IL_017b;
		}
	}
	{
		String_t* L_77 = V_0;
		bool L_78;
		L_78 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_77, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B14_0 = ((int32_t)(L_78));
		goto IL_017c;
	}

IL_017b:
	{
		G_B14_0 = 1;
	}

IL_017c:
	{
		V_10 = (bool)G_B14_0;
		bool L_79 = V_10;
		if (!L_79)
		{
			goto IL_019d;
		}
	}
	{
		// username = $"Player {connectedPlayers.Count}";
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_80;
		L_80 = LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline(__this, NULL);
		NullCheck(L_80);
		int32_t L_81;
		L_81 = Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445(L_80, Dictionary_2_get_Count_mDCB1425528B4E6FE6AA498695628906279596445_RuntimeMethod_var);
		int32_t L_82 = L_81;
		RuntimeObject* L_83 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_82);
		String_t* L_84;
		L_84 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEEBFE93D5D8C9CA5E4E015695E10136300141661, L_83, NULL);
		V_0 = L_84;
	}

IL_019d:
	{
		// newEntry.transform.GetChild(1).GetComponentInChildren<TMP_Text>(true).text = username.Substring(0, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = V_1;
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_85, NULL);
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_86, 1, NULL);
		NullCheck(L_87);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_88;
		L_88 = Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF3B6DB0E3540E6D731056FABDC9355991E86B460(L_87, (bool)1, Component_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mF3B6DB0E3540E6D731056FABDC9355991E86B460_RuntimeMethod_var);
		String_t* L_89 = V_0;
		NullCheck(L_89);
		String_t* L_90;
		L_90 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_89, 0, 1, NULL);
		NullCheck(L_88);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_88, L_90);
		// newEntry.transform.GetChild(2).GetComponent<TMP_Text>().text = username;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_1;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		NullCheck(L_92);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_92, 2, NULL);
		NullCheck(L_93);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_94;
		L_94 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_93, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		String_t* L_95 = V_0;
		NullCheck(L_94);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_94, L_95);
		// newEntry.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = V_1;
		NullCheck(L_96);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_96, (bool)1, NULL);
		// for (int i = 0; i < idList.Length; i++)
		int32_t L_97 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_01e4:
	{
		// for (int i = 0; i < idList.Length; i++)
		int32_t L_98 = V_9;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_99 = V_2;
		NullCheck(L_99);
		V_11 = (bool)((((int32_t)L_98) < ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))))? 1 : 0);
		bool L_100 = V_11;
		if (L_100)
		{
			goto IL_011c;
		}
	}
	{
		// break;
		goto IL_024d;
	}

IL_01f6:
	{
		// bool canJoin = (bool)data[0];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_101 = ___data2;
		NullCheck(L_101);
		int32_t L_102 = 0;
		RuntimeObject* L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_4 = ((*(bool*)((bool*)(bool*)UnBox(L_103, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		// if (canJoin)
		bool L_104 = V_4;
		V_12 = L_104;
		bool L_105 = V_12;
		if (!L_105)
		{
			goto IL_0213;
		}
	}
	{
		// JoinAccepted();
		LoakRoomManagement_JoinAccepted_m00A4BCB80959E49E4CC0D3130C452047CF88ADD2(__this, NULL);
		goto IL_0229;
	}

IL_0213:
	{
		// seshMan.LeaveSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_106 = __this->___seshMan_22;
		NullCheck(L_106);
		LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494(L_106, NULL);
		// roomCode = null;
		LoakRoomManagement_set_roomCode_m7FA5225328B0E347D605DC592E6DCC0F38793A46_inline(__this, (String_t*)NULL, NULL);
	}

IL_0229:
	{
		// break;
		goto IL_024d;
	}

IL_022b:
	{
		// if (!seshMan.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_107 = __this->___seshMan_22;
		NullCheck(L_107);
		bool L_108 = L_107->___IsHost_12;
		V_13 = (bool)((((int32_t)L_108) == ((int32_t)0))? 1 : 0);
		bool L_109 = V_13;
		if (!L_109)
		{
			goto IL_024b;
		}
	}
	{
		// seshMan.StartMultiplayerSession();
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_110 = __this->___seshMan_22;
		NullCheck(L_110);
		LoakSessionManager_StartMultiplayerSession_mA837C7658C31D9C63694CC5C6C5EBF26A17E429E(L_110, NULL);
	}

IL_024b:
	{
		// break;
		goto IL_024d;
	}

IL_024d:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakRoomManagement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakRoomManagement__ctor_m68B80E84995D15C63CDB8CBFDFC91C1F3D35E615 (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m746D063B295CFF9679A08F8B0DB8E956D6DB125B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA660C1E6FDE7EEDB2D7B9FF0A459353D652B8B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string roomPrefix = "LoakTemplate";
		__this->___roomPrefix_5 = _stringLiteralCA660C1E6FDE7EEDB2D7B9FF0A459353D652B8B3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomPrefix_5), (void*)_stringLiteralCA660C1E6FDE7EEDB2D7B9FF0A459353D652B8B3);
		// public int roomCap = 5;
		__this->___roomCap_6 = 5;
		// [HideInInspector] public string username = null; // Username of the local player.
		__this->___username_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___username_7), (void*)(String_t*)NULL);
		// public string roomCode { get; private set; } = null; // Unique code for matching players to a room.
		__this->___U3CroomCodeU3Ek__BackingField_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CroomCodeU3Ek__BackingField_8), (void*)(String_t*)NULL);
		// public Dictionary<Guid, Player> connectedPlayers { get; private set; } = new Dictionary<Guid, Player>(); // Collection of all players currently in the room.
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_0 = (Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698*)il2cpp_codegen_object_new(Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m746D063B295CFF9679A08F8B0DB8E956D6DB125B(L_0, Dictionary_2__ctor_m746D063B295CFF9679A08F8B0DB8E956D6DB125B_RuntimeMethod_var);
		__this->___U3CconnectedPlayersU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CconnectedPlayersU3Ek__BackingField_9), (void*)L_0);
		// private Dictionary<Guid, GameObject> lobbyListItems = new Dictionary<Guid, GameObject>();
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_1 = (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*)il2cpp_codegen_object_new(Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B(L_1, Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B_RuntimeMethod_var);
		__this->___lobbyListItems_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lobbyListItems_19), (void*)L_1);
		// private bool creating = false;
		__this->___creating_23 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LoakRoomManagement/Player::.ctor(System.Guid,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m521FA2C6FDD1DC8CB8F939D9181F3D3D76E2C872 (Player_tBF2B98F22DA433B5D10AC1E5F8DABF4F7C44F474* __this, Guid_t ___identifier0, String_t* ___username1, const RuntimeMethod* method) 
{
	{
		// public Player(Guid identifier, string username)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.identifier = identifier;
		Guid_t L_0 = ___identifier0;
		__this->___identifier_0 = L_0;
		// this.username = username;
		String_t* L_1 = ___username1;
		__this->___username_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___username_1), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LoakScanner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakScanner_Awake_mEEEAC4F6C4E8376E4021E3BEA99150E08B6584A9 (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676_StaticFields*)il2cpp_codegen_static_fields_for(LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676_StaticFields*)il2cpp_codegen_static_fields_for(LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakScanner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakScanner_Start_mFC06E4AC3E3397F55AE5D1A5450DFD21FCE76354 (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m526F7A298FA1A1F881BF8D4F0E4AE2A7E3275278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m193BF48016B0D18A550E2A60372534FC4E4A7720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A_mE34CD19B4BFFDDE0B8E855A37DA54EB0084B344E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C35CD048F8F12BC4A0831048A26F7592D9C6FD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// scanCanvas = transform.GetComponentInChildren<Canvas>(true).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5(L_0, (bool)1, Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mCFB2A899DBF5FCC648749C2A967EA55F5E595AA5_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		__this->___scanCanvas_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scanCanvas_9), (void*)L_2);
		// scanText = scanCanvas.GetComponentInChildren<TMP_Text>(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___scanCanvas_9;
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4;
		L_4 = GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m526F7A298FA1A1F881BF8D4F0E4AE2A7E3275278(L_3, (bool)1, GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m526F7A298FA1A1F881BF8D4F0E4AE2A7E3275278_RuntimeMethod_var);
		__this->___scanText_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scanText_10), (void*)L_4);
		// fillBar = scanCanvas.GetComponentsInChildren<Image>(true)[1];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___scanCanvas_9;
		NullCheck(L_5);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_6;
		L_6 = GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m193BF48016B0D18A550E2A60372534FC4E4A7720(L_5, (bool)1, GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m193BF48016B0D18A550E2A60372534FC4E4A7720_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___fillBar_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fillBar_11), (void*)L_8);
		// meshMan = FindObjectOfType<ARMeshManager>(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* L_9;
		L_9 = Object_FindObjectOfType_TisARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A_mE34CD19B4BFFDDE0B8E855A37DA54EB0084B344E((bool)1, Object_FindObjectOfType_TisARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A_mE34CD19B4BFFDDE0B8E855A37DA54EB0084B344E_RuntimeMethod_var);
		__this->___meshMan_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshMan_12), (void*)L_9);
		// if (meshMan == null)
		ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* L_10 = __this->___meshMan_12;
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_11;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		// Debug.LogError("Loak Scanner requires an ARMeshManager in the scene. Please add one or remove the Loak Scanner.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE5C35CD048F8F12BC4A0831048A26F7592D9C6FD, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		goto IL_008e;
	}

IL_0070:
	{
		// meshMan.GenerateUnityMeshes = true;
		ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* L_13 = __this->___meshMan_12;
		NullCheck(L_13);
		ARMeshManager_set_GenerateUnityMeshes_m7E6719F60798AD022F0F9F08716FBB780359D839(L_13, (bool)1, NULL);
		// if (autoStart)
		bool L_14 = __this->___autoStart_6;
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_008e;
		}
	}
	{
		// StartScan();
		LoakScanner_StartScan_mBD02D2E11A1955C3AA4A73DE679810281AC23802(__this, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakScanner::StartScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakScanner_StartScan_mBD02D2E11A1955C3AA4A73DE679810281AC23802 (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) 
{
	{
		// fillBar.fillAmount = 0f;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___fillBar_11;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, (0.0f), NULL);
		// scanText.text = scanningString;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___scanText_10;
		String_t* L_2 = __this->___scanningString_13;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_2);
		// scanCanvas.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___scanCanvas_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// scanning = true;
		__this->___scanning_16 = (bool)1;
		// OnScanStart.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___OnScanStart_7;
		NullCheck(L_4);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakScanner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakScanner_Update_mED7048C17AA58BEE8F3304BD72669073B243ACF5 (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!scanning)
		bool L_0 = __this->___scanning_16;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0083;
	}

IL_0010:
	{
		// scanProgress = Mathf.Min((float)meshMan.MeshRoot.transform.childCount / scanThreshold, 1f);
		ARMeshManager_t53862FC3BA591357DD02A177582505348EE0A93A* L_2 = __this->___meshMan_12;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = ARMeshManager_get_MeshRoot_m89D5258EFCD80E8AB089469ACA1DD30EF3EA8307(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_4, NULL);
		int32_t L_6 = __this->___scanThreshold_5;
		float L_7;
		L_7 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(((float)L_5)/((float)L_6))), (1.0f), NULL);
		__this->___scanProgress_15 = L_7;
		// fillBar.fillAmount = Mathf.Max(scanProgress, fillBar.fillAmount);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___fillBar_11;
		float L_9 = __this->___scanProgress_15;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___fillBar_11;
		NullCheck(L_10);
		float L_11;
		L_11 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788(L_10, NULL);
		float L_12;
		L_12 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_9, L_11, NULL);
		NullCheck(L_8);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_8, L_12, NULL);
		// if (scanProgress >= 1f)
		float L_13 = __this->___scanProgress_15;
		V_1 = (bool)((((int32_t)((!(((float)L_13) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// StartCoroutine(EndScan());
		RuntimeObject* L_15;
		L_15 = LoakScanner_EndScan_mA151C4E2FDB217E6CD105BB3C63B389649EB153F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakScanner::ForceEndScan(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakScanner_ForceEndScan_m24AF4E6198652DED96F19C707A3B9BEA27753C6D (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, bool ___immediate0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (immediate)
		bool L_0 = ___immediate0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// scanning = false;
		__this->___scanning_16 = (bool)0;
		// scanCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___scanCanvas_9;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// OnScanEnd.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___OnScanEnd_8;
		NullCheck(L_3);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_3, NULL);
		goto IL_0039;
	}

IL_002a:
	{
		// StartCoroutine(EndScan());
		RuntimeObject* L_4;
		L_4 = LoakScanner_EndScan_mA151C4E2FDB217E6CD105BB3C63B389649EB153F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Loak.Unity.LoakScanner::EndScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoakScanner_EndScan_mA151C4E2FDB217E6CD105BB3C63B389649EB153F (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* L_0 = (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7*)il2cpp_codegen_object_new(U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEndScanU3Ed__18__ctor_m03220494CA2D3D8851ED4975A513A08F973D71CF(L_0, 0, NULL);
		U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Loak.Unity.LoakScanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakScanner__ctor_m036ADFF86558F1A35CB18EB89FB0591DA54AC359 (LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387F894C2A68334378B4AEF513520EDF7E7477F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABC49B6267B8B2AF5A0C9BFA2FB0213BB749383);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int scanThreshold = 20;
		__this->___scanThreshold_5 = ((int32_t)20);
		// [SerializeField] private bool autoStart = true;
		__this->___autoStart_6 = (bool)1;
		// public UnityEvent OnScanStart = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnScanStart_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnScanStart_7), (void*)L_0);
		// public UnityEvent OnScanEnd = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___OnScanEnd_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnScanEnd_8), (void*)L_1);
		// private string scanningString = "Building mesh...";
		__this->___scanningString_13 = _stringLiteralFABC49B6267B8B2AF5A0C9BFA2FB0213BB749383;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scanningString_13), (void*)_stringLiteralFABC49B6267B8B2AF5A0C9BFA2FB0213BB749383);
		// private string completeString = "Mesh complete!";
		__this->___completeString_14 = _stringLiteral387F894C2A68334378B4AEF513520EDF7E7477F6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___completeString_14), (void*)_stringLiteral387F894C2A68334378B4AEF513520EDF7E7477F6);
		// private float scanProgress = 0f;
		__this->___scanProgress_15 = (0.0f);
		// private bool scanning = false;
		__this->___scanning_16 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LoakScanner/<EndScan>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndScanU3Ed__18__ctor_m03220494CA2D3D8851ED4975A513A08F973D71CF (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Loak.Unity.LoakScanner/<EndScan>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndScanU3Ed__18_System_IDisposable_Dispose_mC854E64EF799794FB2D3D176B0B57150A11FDBB6 (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Loak.Unity.LoakScanner/<EndScan>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndScanU3Ed__18_MoveNext_m8F878B4BFEFE6E1AB9B07AEF493988B1BA914896 (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0077;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fillBar.fillAmount = 1f;
		LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = L_3->___fillBar_11;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, (1.0f), NULL);
		// scanText.text = completeString;
		LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = L_5->___scanText_10;
		LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		String_t* L_8 = L_7->___completeString_14;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_8);
		// scanning = false;
		LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		L_9->___scanning_16 = (bool)0;
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// scanCanvas.SetActive(false);
		LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___scanCanvas_9;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// OnScanEnd.Invoke();
		LoakScanner_tF24B93F384C901FD45DF604D01D7AC4633FB0676* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = L_13->___OnScanEnd_8;
		NullCheck(L_14);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_14, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Loak.Unity.LoakScanner/<EndScan>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndScanU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB95DAE24D1B5D48C4E9A691DA045ADA65DD1A2DB (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Loak.Unity.LoakScanner/<EndScan>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndScanU3Ed__18_System_Collections_IEnumerator_Reset_m136D5983EE1B915EB30E446037048D4C5D234587 (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndScanU3Ed__18_System_Collections_IEnumerator_Reset_m136D5983EE1B915EB30E446037048D4C5D234587_RuntimeMethod_var)));
	}
}
// System.Object Loak.Unity.LoakScanner/<EndScan>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndScanU3Ed__18_System_Collections_IEnumerator_get_Current_m1B371F5F14B2841F3FC2EE594DE87DD16F038951 (U3CEndScanU3Ed__18_t76FA5A7234B0188E649C44EB8D174346A6273FB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Unity.LoakSessionManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_Awake_m43F7C223FFD85CDB196E546EB24027FA0FCA3703 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_Start_m231D9584DF81D1A4C3A578DA75BB6B845ADF5B80 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Initialize();
		LoakSessionManager_Initialize_mD0D255867F920FD99FE7173D867582D325E5A1FF(__this, NULL);
		// if (arOnStart)
		bool L_0 = __this->___arOnStart_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// configuration.IsSharedExperienceEnabled = false;
		RuntimeObject* L_2 = __this->___configuration_19;
		NullCheck(L_2);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration::set_IsSharedExperienceEnabled(System.Boolean) */, IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var, L_2, (bool)0);
		// arSession.Run(configuration);
		RuntimeObject* L_3 = __this->___arSession_17;
		RuntimeObject* L_4 = __this->___configuration_19;
		NullCheck(L_3);
		InterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(11 /* System.Void Niantic.ARDK.AR.IARSession::Run(Niantic.ARDK.AR.Configuration.IARConfiguration,Niantic.ARDK.AR.ARSessionRunOptions) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_3, L_4, 0);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_Initialize_mD0D255867F920FD99FE7173D867582D325E5A1FF (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARConfiguration_t63AD4587231BC6249D6ED8AB8BC140DCA79F6ABE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_OnConnected_mEED911EAB59047081C895BAE5C7F34D3D9C74FD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_OnPeerAdded_mD8B3999F0454540B9D428D2861952155A51A9E47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_OnPeerDataRecieved_mA404CACA2BD788E72FC946ECBA1111EC048D064C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_OnPeerRemoved_mCBC0D593CBD1370842818C8CBB83A503D95EF288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_OnPeerStateReceived_m64740FBE0E4AF687775BC5D63DA3AB53AD19EE23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B5_0 = NULL;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B4_0 = NULL;
	Guid_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B6_1 = NULL;
	{
		// sessionBegan = false;
		__this->___sessionBegan_14 = (bool)0;
		// if (networking == null)
		RuntimeObject* L_0 = __this->___networking_16;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c5;
		}
	}
	{
		// if (arNetworking != null)
		RuntimeObject* L_2 = __this->___arNetworking_18;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// arNetworking.Dispose();
		RuntimeObject* L_4 = __this->___arNetworking_18;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
		// arNetworking = null;
		__this->___arNetworking_18 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arNetworking_18), (void*)(RuntimeObject*)NULL);
	}

IL_003b:
	{
		// networking = MultipeerNetworkingFactory.Create(arSession == null ? default : arSession.StageIdentifier);
		RuntimeObject* L_5 = __this->___arSession_17;
		G_B4_0 = __this;
		if (!L_5)
		{
			G_B5_0 = __this;
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_6 = __this->___arSession_17;
		NullCheck(L_6);
		Guid_t L_7;
		L_7 = InterfaceFuncInvoker0< Guid_t >::Invoke(7 /* System.Guid Niantic.ARDK.AR.IARSession::get_StageIdentifier() */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_6);
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_005a;
	}

IL_0051:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Guid_t));
		Guid_t L_8 = V_2;
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
	}

IL_005a:
	{
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = MultipeerNetworkingFactory_Create_mE9B46C5208FD348199D7B5A090412D9C9795416A(G_B6_0, NULL);
		NullCheck(G_B6_1);
		G_B6_1->___networking_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___networking_16), (void*)L_9);
		// networking.Connected += OnConnected;
		RuntimeObject* L_10 = __this->___networking_16;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_11 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_11, __this, (intptr_t)((void*)LoakSessionManager_OnConnected_mEED911EAB59047081C895BAE5C7F34D3D9C74FD8_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(15 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_10, L_11);
		// networking.PeerAdded += OnPeerAdded;
		RuntimeObject* L_12 = __this->___networking_16;
		ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* L_13 = (ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0*)il2cpp_codegen_object_new(ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ArdkEventHandler_1__ctor_mDBC7185004EA5A9D4BF4362E157AB7C4C09B4D64(L_13, __this, (intptr_t)((void*)LoakSessionManager_OnPeerAdded_mD8B3999F0454540B9D428D2861952155A51A9E47_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< ArdkEventHandler_1_t604F9BF7754A0D56DE1F76312E2BCE4C7B87A1F0* >::Invoke(23 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerAdded(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_12, L_13);
		// networking.PeerRemoved += OnPeerRemoved;
		RuntimeObject* L_14 = __this->___networking_16;
		ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* L_15 = (ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1*)il2cpp_codegen_object_new(ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ArdkEventHandler_1__ctor_m3960432DA43C8F90602F149F911E45840225D6D1(L_15, __this, (intptr_t)((void*)LoakSessionManager_OnPeerRemoved_mCBC0D593CBD1370842818C8CBB83A503D95EF288_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< ArdkEventHandler_1_t446A8FE372BA5A8E4F80BDEFC50C9B2BA65103E1* >::Invoke(25 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerRemoved(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_14, L_15);
		// networking.PeerDataReceived += OnPeerDataRecieved;
		RuntimeObject* L_16 = __this->___networking_16;
		ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* L_17 = (ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ArdkEventHandler_1__ctor_m3BB4030170487D79DE001F30AC4B138AC3601A47(L_17, __this, (intptr_t)((void*)LoakSessionManager_OnPeerDataRecieved_mA404CACA2BD788E72FC946ECBA1111EC048D064C_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< ArdkEventHandler_1_t37C3835B1EC4E62869ACCEA705A0B35D56EB05AB* >::Invoke(21 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PeerDataReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_16, L_17);
	}

IL_00c5:
	{
		// if (arSession == null)
		RuntimeObject* L_18 = __this->___arSession_17;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_010e;
		}
	}
	{
		// if (arNetworking != null)
		RuntimeObject* L_20 = __this->___arNetworking_18;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00f7;
		}
	}
	{
		// arNetworking.Dispose();
		RuntimeObject* L_22 = __this->___arNetworking_18;
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
		// arNetworking = null;
		__this->___arNetworking_18 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arNetworking_18), (void*)(RuntimeObject*)NULL);
	}

IL_00f7:
	{
		// arSession = ARSessionFactory.Create(networking.StageIdentifier);
		RuntimeObject* L_23 = __this->___networking_16;
		NullCheck(L_23);
		Guid_t L_24;
		L_24 = InterfaceFuncInvoker0< Guid_t >::Invoke(1 /* System.Guid Niantic.ARDK.Networking.IMultipeerNetworking::get_StageIdentifier() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_23);
		il2cpp_codegen_runtime_class_init_inline(ARSessionFactory_t1D5BCA669C6345AF0C3971E4EB21DECD02227A5E_il2cpp_TypeInfo_var);
		RuntimeObject* L_25;
		L_25 = ARSessionFactory_Create_m24CC99F4E7C634039365DF1558EE2708C925A559(L_24, NULL);
		__this->___arSession_17 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arSession_17), (void*)L_25);
	}

IL_010e:
	{
		// if (arNetworking == null)
		RuntimeObject* L_26 = __this->___arNetworking_18;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_014e;
		}
	}
	{
		// arNetworking = ARNetworkingFactory.Create(arSession, networking);
		RuntimeObject* L_28 = __this->___arSession_17;
		RuntimeObject* L_29 = __this->___networking_16;
		il2cpp_codegen_runtime_class_init_inline(ARNetworkingFactory_t2DED7AA3152B0F4979B07BB5877DA1E7EB17007F_il2cpp_TypeInfo_var);
		RuntimeObject* L_30;
		L_30 = ARNetworkingFactory_Create_m3242C944C54252E30AAB26C7BC294B286D5D5FDB(L_28, L_29, NULL);
		__this->___arNetworking_18 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arNetworking_18), (void*)L_30);
		// arNetworking.PeerStateReceived += OnPeerStateReceived;
		RuntimeObject* L_31 = __this->___arNetworking_18;
		ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* L_32 = (ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7*)il2cpp_codegen_object_new(ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		ArdkEventHandler_1__ctor_m66D14E96ECDF48B3712D5919E856BEB2648B1336(L_32, __this, (intptr_t)((void*)LoakSessionManager_OnPeerStateReceived_m64740FBE0E4AF687775BC5D63DA3AB53AD19EE23_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< ArdkEventHandler_1_t44541BA106426545622E7E03A0B40218D592E8E7* >::Invoke(10 /* System.Void Niantic.ARDK.AR.Networking.IARNetworking::add_PeerStateReceived(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs>) */, IARNetworking_t1FF845EF46AA4DA798BB69CDE004B31DA7809D7D_il2cpp_TypeInfo_var, L_31, L_32);
	}

IL_014e:
	{
		// if (configuration == null)
		RuntimeObject* L_33 = __this->___configuration_19;
		V_6 = (bool)((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_0184;
		}
	}
	{
		// configuration = ARWorldTrackingConfigurationFactory.Create();
		RuntimeObject* L_35;
		L_35 = ARWorldTrackingConfigurationFactory_Create_m3ACFE8B7DEE0D1C1F58DF1900C6B893175E5B8FF(NULL);
		__this->___configuration_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_19), (void*)L_35);
		// configuration.IsAutoFocusEnabled = true;
		RuntimeObject* L_36 = __this->___configuration_19;
		NullCheck(L_36);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration::set_IsAutoFocusEnabled(System.Boolean) */, IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var, L_36, (bool)1);
		// configuration.IsLightEstimationEnabled = true;
		RuntimeObject* L_37 = __this->___configuration_19;
		NullCheck(L_37);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Niantic.ARDK.AR.Configuration.IARConfiguration::set_IsLightEstimationEnabled(System.Boolean) */, IARConfiguration_t63AD4587231BC6249D6ED8AB8BC140DCA79F6ABE_il2cpp_TypeInfo_var, L_37, (bool)1);
	}

IL_0184:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::JoinSession(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_JoinSession_m895459BCFA0B91799008C0DDFB3EC6B8792F52B7 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, String_t* ___sessionIdentifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.sessionIdentifier = sessionIdentifier;
		String_t* L_0 = ___sessionIdentifier0;
		__this->___sessionIdentifier_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionIdentifier_15), (void*)L_0);
		// networking.Join(Encoding.UTF8.GetBytes(sessionIdentifier));
		RuntimeObject* L_1 = __this->___networking_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___sessionIdentifier0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		NullCheck(L_1);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t >::Invoke(11 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Join(System.Byte[],System.Byte[],System.Int64) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1, L_4, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0));
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::OnConnected(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_OnConnected_mEED911EAB59047081C895BAE5C7F34D3D9C74FD8 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IsHost = args.IsHost;
		bool L_0;
		L_0 = ConnectedArgs_get_IsHost_mA2DF2037DBF198DE7B431749F764F04D3900E16E((&___args0), NULL);
		__this->___IsHost_12 = L_0;
		// me = networking.Self;
		RuntimeObject* L_1 = __this->___networking_16;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.IMultipeerNetworking::get_Self() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		__this->___me_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___me_13), (void*)L_2);
		// OnSessionJoined.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___OnSessionJoined_6;
		NullCheck(L_3);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_3, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::LeaveSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (networking.IsConnected)
		RuntimeObject* L_0 = __this->___networking_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// sessionIdentifier = null;
		__this->___sessionIdentifier_15 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionIdentifier_15), (void*)(String_t*)NULL);
		// networking.Leave();
		RuntimeObject* L_3 = __this->___networking_16;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Leave() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_3);
		// networking.Dispose();
		RuntimeObject* L_4 = __this->___networking_16;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
		// networking = null;
		__this->___networking_16 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___networking_16), (void*)(RuntimeObject*)NULL);
	}

IL_0038:
	{
		// if (arSession.State == ARSessionState.Running)
		RuntimeObject* L_5 = __this->___arSession_17;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* Niantic.ARDK.AR.ARSessionState Niantic.ARDK.AR.IARSession::get_State() */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_5);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// arSession.Dispose();
		RuntimeObject* L_8 = __this->___arSession_17;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
		// arSession = null;
		__this->___arSession_17 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arSession_17), (void*)(RuntimeObject*)NULL);
	}

IL_005f:
	{
		// Initialize();
		LoakSessionManager_Initialize_mD0D255867F920FD99FE7173D867582D325E5A1FF(__this, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::StartSoloSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_StartSoloSession_m681EA07211BE705B2ECDD92BB342EF2F6D79869B (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (networking.IsConnected)
		RuntimeObject* L_0 = __this->___networking_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// LeaveSession();
		LoakSessionManager_LeaveSession_mF7E1A0EB2DCF282D562951298909F7521103B494(__this, NULL);
	}

IL_0019:
	{
		// configuration.IsSharedExperienceEnabled = false;
		RuntimeObject* L_3 = __this->___configuration_19;
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration::set_IsSharedExperienceEnabled(System.Boolean) */, IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var, L_3, (bool)0);
		// arSession.Run(configuration);
		RuntimeObject* L_4 = __this->___arSession_17;
		RuntimeObject* L_5 = __this->___configuration_19;
		NullCheck(L_4);
		InterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(11 /* System.Void Niantic.ARDK.AR.IARSession::Run(Niantic.ARDK.AR.Configuration.IARConfiguration,Niantic.ARDK.AR.ARSessionRunOptions) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_4, L_5, 0);
		// OnSessionStarted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->___OnSessionStarted_7;
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::StartMultiplayerSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_StartMultiplayerSession_mA837C7658C31D9C63694CC5C6C5EBF26A17E429E (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!networking.IsConnected)
		RuntimeObject* L_0 = __this->___networking_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0087;
	}

IL_0015:
	{
		// if (arSession.State == ARSessionState.Running || arSession.State == ARSessionState.Paused)
		RuntimeObject* L_3 = __this->___arSession_17;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* Niantic.ARDK.AR.ARSessionState Niantic.ARDK.AR.IARSession::get_State() */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = __this->___arSession_17;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* Niantic.ARDK.AR.ARSessionState Niantic.ARDK.AR.IARSession::get_State() */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_5);
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// arSession.Dispose();
		RuntimeObject* L_8 = __this->___arSession_17;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
		// arSession = null;
		__this->___arSession_17 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arSession_17), (void*)(RuntimeObject*)NULL);
		// Initialize();
		LoakSessionManager_Initialize_mD0D255867F920FD99FE7173D867582D325E5A1FF(__this, NULL);
	}

IL_0054:
	{
		// configuration.IsSharedExperienceEnabled = true;
		RuntimeObject* L_9 = __this->___configuration_19;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Niantic.ARDK.AR.Configuration.IARWorldTrackingConfiguration::set_IsSharedExperienceEnabled(System.Boolean) */, IARWorldTrackingConfiguration_t1BD20E8DCF0F3856A22C9F35636A4FD97DEC1F0D_il2cpp_TypeInfo_var, L_9, (bool)1);
		// arSession.Run(configuration, ARSessionRunOptions.None);
		RuntimeObject* L_10 = __this->___arSession_17;
		RuntimeObject* L_11 = __this->___configuration_19;
		NullCheck(L_10);
		InterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(11 /* System.Void Niantic.ARDK.AR.IARSession::Run(Niantic.ARDK.AR.Configuration.IARConfiguration,Niantic.ARDK.AR.ARSessionRunOptions) */, IARSession_t947E93352FD1F546D1E829553A05C38814CD92B8_il2cpp_TypeInfo_var, L_10, L_11, 0);
		// OnSessionStarted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___OnSessionStarted_7;
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
		// sessionBegan = true;
		__this->___sessionBegan_14 = (bool)1;
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::OnPeerAdded(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerAddedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_OnPeerAdded_mD8B3999F0454540B9D428D2861952155A51A9E47 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnPeerJoined.Invoke(args.Peer);
		UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763* L_0 = __this->___OnPeerJoined_9;
		RuntimeObject* L_1;
		L_1 = PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline((&___args0), NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228(L_0, L_1, UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::OnPeerStateReceived(Niantic.ARDK.AR.Networking.ARNetworkingEventArgs.PeerStateReceivedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_OnPeerStateReceived_m64740FBE0E4AF687775BC5D63DA3AB53AD19EE23 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D ___args0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (args.Peer == me)
		RuntimeObject* L_0;
		L_0 = PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline((&___args0), NULL);
		RuntimeObject* L_1 = __this->___me_13;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// if (args.State == PeerState.Stable && (prevState == PeerState.WaitingForLocalizationData || prevState == PeerState.Localizing))
		int32_t L_3;
		L_3 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = __this->___prevState_20;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = __this->___prevState_20;
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		G_B7_0 = G_B5_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B7_0 = 0;
	}

IL_0037:
	{
		V_1 = (bool)G_B7_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// OnSessionLocalized.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = __this->___OnSessionLocalized_8;
		NullCheck(L_7);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_7, NULL);
	}

IL_0047:
	{
		// prevState = args.State;
		int32_t L_8;
		L_8 = PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline((&___args0), NULL);
		__this->___prevState_20 = L_8;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::OnPeerRemoved(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerRemovedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_OnPeerRemoved_mCBC0D593CBD1370842818C8CBB83A503D95EF288 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnPeerLeft.Invoke(args.Peer);
		UnityEvent_1_t53C5EDCB5811AA796E5B0325402C99C49DCFA763* L_0 = __this->___OnPeerLeft_10;
		RuntimeObject* L_1;
		L_1 = PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline((&___args0), NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228(L_0, L_1, UnityEvent_1_Invoke_mE7DF85CABD697BF5822BA704F74D40F5015FD228_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::SendToHost(System.UInt32,System.Object[],Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_SendToHost_m5A862A6E62F2C68946CE33BBBE00070F7FD44D26 (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, uint32_t ___tag0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs1, uint8_t ___tt2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_3 = NULL;
	{
		// if (!networking.IsConnected)
		RuntimeObject* L_0 = __this->___networking_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0072;
	}

IL_0015:
	{
		// var stream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_3, NULL);
		V_0 = L_3;
		// using (var serializer = new BinarySerializer(stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_5, L_4, NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_6 = V_3;
					if (!L_6)
					{
						goto IL_004f;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// serializer.Serialize(me.Identifier);
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_8 = V_3;
			RuntimeObject* L_9 = __this->___me_13;
			NullCheck(L_9);
			Guid_t L_10;
			L_10 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_9);
			Guid_t L_11 = L_10;
			RuntimeObject* L_12 = Box(Guid_t_il2cpp_TypeInfo_var, &L_11);
			NullCheck(L_8);
			BinarySerializer_Serialize_m72BE3A3553799FBC36EA7FA7D810CAEB74EB7886(L_8, L_12, NULL);
			// serializer.Serialize(objs);
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_3;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___objs1;
			NullCheck(L_13);
			BinarySerializer_Serialize_m72BE3A3553799FBC36EA7FA7D810CAEB74EB7886(L_13, (RuntimeObject*)L_14, NULL);
			goto IL_0050;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// byte[] data = stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_15);
		V_1 = L_16;
		// networking.SendDataToPeer(tag, data, networking.Host, tt);
		RuntimeObject* L_17 = __this->___networking_16;
		uint32_t L_18 = ___tag0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		RuntimeObject* L_20 = __this->___networking_16;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.IMultipeerNetworking::get_Host() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_20);
		uint8_t L_22 = ___tt2;
		NullCheck(L_17);
		InterfaceActionInvoker5< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, uint8_t, bool >::Invoke(7 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::SendDataToPeer(System.UInt32,System.Byte[],Niantic.ARDK.Networking.IPeer,Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_17, L_18, L_19, L_21, L_22, (bool)0);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::SendToAll(System.UInt32,System.Guid,System.Object[],Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_SendToAll_mE8F8D2359E9A01DF6B4683670B568ACB0BF93E4A (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, uint32_t ___tag0, Guid_t ___origin1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs2, uint8_t ___tt3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (!networking.IsConnected || !IsHost)
		RuntimeObject* L_0 = __this->___networking_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->___IsHost_12;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_0069;
	}

IL_0020:
	{
		// var stream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_4, NULL);
		V_0 = L_4;
		// using (var serializer = new BinarySerializer(stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_6 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_6, L_5, NULL);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_7 = V_3;
					if (!L_7)
					{
						goto IL_0050;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// serializer.Serialize(origin);
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = V_3;
			Guid_t L_10 = ___origin1;
			Guid_t L_11 = L_10;
			RuntimeObject* L_12 = Box(Guid_t_il2cpp_TypeInfo_var, &L_11);
			NullCheck(L_9);
			BinarySerializer_Serialize_m72BE3A3553799FBC36EA7FA7D810CAEB74EB7886(L_9, L_12, NULL);
			// serializer.Serialize(objs);
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_3;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___objs2;
			NullCheck(L_13);
			BinarySerializer_Serialize_m72BE3A3553799FBC36EA7FA7D810CAEB74EB7886(L_13, (RuntimeObject*)L_14, NULL);
			goto IL_0051;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// byte[] data = stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_15);
		V_1 = L_16;
		// networking.BroadcastData(tag, data, tt);
		RuntimeObject* L_17 = __this->___networking_16;
		uint32_t L_18 = ___tag0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		uint8_t L_20 = ___tt3;
		NullCheck(L_17);
		InterfaceActionInvoker4< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, bool >::Invoke(9 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::BroadcastData(System.UInt32,System.Byte[],Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_17, L_18, L_19, L_20, (bool)0);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::SendToPeer(System.UInt32,Niantic.ARDK.Networking.IPeer,System.Object[],Niantic.ARDK.Networking.TransportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_SendToPeer_m13D0788DFF015CE2EA973F6419EA9596ADC6793D (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, uint32_t ___tag0, RuntimeObject* ___target1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objs2, uint8_t ___tt3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (!networking.IsConnected || !IsHost)
		RuntimeObject* L_0 = __this->___networking_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->___IsHost_12;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_0074;
	}

IL_0020:
	{
		// var stream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_4, NULL);
		V_0 = L_4;
		// using (var serializer = new BinarySerializer(stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_6 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_6, L_5, NULL);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_7 = V_3;
					if (!L_7)
					{
						goto IL_005a;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_005a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// serializer.Serialize(me.Identifier);
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = V_3;
			RuntimeObject* L_10 = __this->___me_13;
			NullCheck(L_10);
			Guid_t L_11;
			L_11 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_10);
			Guid_t L_12 = L_11;
			RuntimeObject* L_13 = Box(Guid_t_il2cpp_TypeInfo_var, &L_12);
			NullCheck(L_9);
			BinarySerializer_Serialize_m72BE3A3553799FBC36EA7FA7D810CAEB74EB7886(L_9, L_13, NULL);
			// serializer.Serialize(objs);
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_14 = V_3;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = ___objs2;
			NullCheck(L_14);
			BinarySerializer_Serialize_m72BE3A3553799FBC36EA7FA7D810CAEB74EB7886(L_14, (RuntimeObject*)L_15, NULL);
			goto IL_005b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// byte[] data = stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = V_0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_16);
		V_1 = L_17;
		// networking.SendDataToPeer(tag, data, target, tt);
		RuntimeObject* L_18 = __this->___networking_16;
		uint32_t L_19 = ___tag0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		RuntimeObject* L_21 = ___target1;
		uint8_t L_22 = ___tt3;
		NullCheck(L_18);
		InterfaceActionInvoker5< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, uint8_t, bool >::Invoke(7 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::SendDataToPeer(System.UInt32,System.Byte[],Niantic.ARDK.Networking.IPeer,Niantic.ARDK.Networking.TransportType,System.Boolean) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_18, L_19, L_20, L_21, L_22, (bool)0);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::OnPeerDataRecieved(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PeerDataReceivedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager_OnPeerDataRecieved_mA404CACA2BD788E72FC946ECBA1111EC048D064C (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_mEC1DF4F74F3C4F73F7B307FEC742D3F0738A3627_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_3 = NULL;
	{
		// var stream = new MemoryStream(args.CopyData());
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = PeerDataReceivedArgs_CopyData_mD5E32ECFC23052C9667E55A0EBB17FC4F1951A5B((&___args0), NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
		// using (var deserializer = new BinaryDeserializer(stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_3 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_3, L_2, NULL);
		V_3 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_4 = V_3;
					if (!L_4)
					{
						goto IL_003b;
					}
				}
				{
					BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_5 = V_3;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// sender = (Guid)deserializer.Deserialize();
			BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_6 = V_3;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = BinaryDeserializer_Deserialize_mC0CC959618835E8E7A422B13502267F998949449(L_6, NULL);
			V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_7, Guid_t_il2cpp_TypeInfo_var))));
			// data = (object[])deserializer.Deserialize();
			BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_8 = V_3;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = BinaryDeserializer_Deserialize_mC0CC959618835E8E7A422B13502267F998949449(L_8, NULL);
			V_2 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_9, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// OnDataRecieved.Invoke(args.Tag, sender, data);
		UnityEvent_3_t1F9672EBEE1A8766C2B174829626913EB758A5DD* L_10 = __this->___OnDataRecieved_11;
		uint32_t L_11;
		L_11 = PeerDataReceivedArgs_get_Tag_m40BCD818739E964C1B6D0BC363D44A77155E9962_inline((&___args0), NULL);
		Guid_t L_12 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_2;
		NullCheck(L_10);
		UnityEvent_3_Invoke_mEC1DF4F74F3C4F73F7B307FEC742D3F0738A3627(L_10, L_11, L_12, L_13, UnityEvent_3_Invoke_mEC1DF4F74F3C4F73F7B307FEC742D3F0738A3627_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Loak.Unity.LoakSessionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoakSessionManager__ctor_m5BADAB4AE820EDAD9DC96E429CFED01D3A0C242D (LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* __this, const RuntimeMethod* method) 
{
	{
		// public bool arOnStart = false;
		__this->___arOnStart_5 = (bool)0;
		// [HideInInspector] public bool IsHost = false;
		__this->___IsHost_12 = (bool)0;
		// [HideInInspector] public bool sessionBegan = false;
		__this->___sessionBegan_14 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loak.Examples.SharedARExample::SendPlace(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedARExample_SendPlace_mA21178A2237FB8C9C46AB0579BBEBECFDAA73472 (SharedARExample_t2E097EC8DAD3F0EF86AE46A15C7747BD6988B1CF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B3_0 = NULL;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B4_1 = NULL;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B7_0 = NULL;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* G_B8_1 = NULL;
	{
		// if (LoakSessionManager.Instance.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_0 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___IsHost_12;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// LoakSessionManager.Instance.SendToAll(LoakTapPlace.Instance.allowMultiple ? (uint)4 : (uint)5, LoakSessionManager.Instance.me.Identifier, new object[] {obj.transform.position});
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_3 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* L_4 = ((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_4);
		bool L_5 = L_4->___allowMultiple_7;
		G_B2_0 = L_3;
		if (L_5)
		{
			G_B3_0 = L_3;
			goto IL_0023;
		}
	}
	{
		G_B4_0 = 5;
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 4;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_6 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___me_13;
		NullCheck(L_7);
		Guid_t L_8;
		L_8 = InterfaceFuncInvoker0< Guid_t >::Invoke(0 /* System.Guid Niantic.ARDK.Networking.IPeer::get_Identifier() */, IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81_il2cpp_TypeInfo_var, L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___obj0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_15);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		NullCheck(G_B4_1);
		LoakSessionManager_SendToAll_mE8F8D2359E9A01DF6B4683670B568ACB0BF93E4A(G_B4_1, G_B4_0, L_8, L_10, 1, NULL);
		goto IL_008a;
	}

IL_0055:
	{
		// LoakSessionManager.Instance.SendToHost(LoakTapPlace.Instance.allowMultiple ? (uint)4 : (uint)5, new object[] {obj.transform.position});
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_16 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* L_17 = ((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_17);
		bool L_18 = L_17->___allowMultiple_7;
		G_B6_0 = L_16;
		if (L_18)
		{
			G_B7_0 = L_16;
			goto IL_0069;
		}
	}
	{
		G_B8_0 = 5;
		G_B8_1 = G_B6_0;
		goto IL_006a;
	}

IL_0069:
	{
		G_B8_0 = 4;
		G_B8_1 = G_B7_0;
	}

IL_006a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___obj0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23;
		RuntimeObject* L_25 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_25);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		NullCheck(G_B8_1);
		LoakSessionManager_SendToHost_m5A862A6E62F2C68946CE33BBBE00070F7FD44D26(G_B8_1, G_B8_0, L_20, 1, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Loak.Examples.SharedARExample::OnDataRecieved(System.UInt32,System.Guid,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedARExample_OnDataRecieved_mE575FF12C60CF58168192F164253F35AD932632D (SharedARExample_t2E097EC8DAD3F0EF86AE46A15C7747BD6988B1CF* __this, uint32_t ___tag0, Guid_t ___sender1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6DF00FC5CE2FBB9A312E31C886649B1EDCFC3BBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4C3C0C48B0DC5EEFA287EB6AFE994C148EEEED4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// switch (tag)
		uint32_t L_0 = ___tag0;
		V_2 = L_0;
		uint32_t L_1 = V_2;
		V_1 = L_1;
		uint32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		uint32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0079;
		}
	}
	{
		goto IL_00df;
	}

IL_0014:
	{
		// peerObjects[sender] = Instantiate(LoakTapPlace.Instance.objectToPlace, (Vector3)data[0], Quaternion.identity, LoakTapPlace.Instance.objectParent);
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_4 = __this->___peerObjects_4;
		Guid_t L_5 = ___sender1;
		LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* L_6 = ((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___objectToPlace_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___data2;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* L_12 = ((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___objectParent_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_7, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), L_11, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		NullCheck(L_4);
		Dictionary_2_set_Item_m4C3C0C48B0DC5EEFA287EB6AFE994C148EEEED4E(L_4, L_5, L_14, Dictionary_2_set_Item_m4C3C0C48B0DC5EEFA287EB6AFE994C148EEEED4E_RuntimeMethod_var);
		// peerObjects[sender].SetActive(true);
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_15 = __this->___peerObjects_4;
		Guid_t L_16 = ___sender1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E(L_15, L_16, Dictionary_2_get_Item_mC50FB18EE62F19E61DAA045FA6C8A5BF641C430E_RuntimeMethod_var);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// if (LoakSessionManager.Instance.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_18 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_18);
		bool L_19 = L_18->___IsHost_12;
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0077;
		}
	}
	{
		// LoakSessionManager.Instance.SendToAll(4, sender, data);
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_21 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		Guid_t L_22 = ___sender1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = ___data2;
		NullCheck(L_21);
		LoakSessionManager_SendToAll_mE8F8D2359E9A01DF6B4683670B568ACB0BF93E4A(L_21, 4, L_22, L_23, 1, NULL);
	}

IL_0077:
	{
		// break;
		goto IL_00df;
	}

IL_0079:
	{
		// if (!peerObjects.TryGetValue(sender, out instance))
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_24 = __this->___peerObjects_4;
		Guid_t L_25 = ___sender1;
		NullCheck(L_24);
		bool L_26;
		L_26 = Dictionary_2_TryGetValue_m6DF00FC5CE2FBB9A312E31C886649B1EDCFC3BBA(L_24, L_25, (&V_0), Dictionary_2_TryGetValue_m6DF00FC5CE2FBB9A312E31C886649B1EDCFC3BBA_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_00aa;
		}
	}
	{
		// instance = Instantiate(LoakTapPlace.Instance.objectToPlace, LoakTapPlace.Instance.objectParent);
		LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* L_28 = ((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = L_28->___objectToPlace_5;
		LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1* L_30 = ((LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_StaticFields*)il2cpp_codegen_static_fields_for(LoakTapPlace_t41C1D6A77F39753CC91EADE204637D345F65CCF1_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = L_30->___objectParent_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_29, L_31, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_32;
	}

IL_00aa:
	{
		// instance.transform.position = (Vector3)data[0];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_0;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = ___data2;
		NullCheck(L_35);
		int32_t L_36 = 0;
		RuntimeObject* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_37, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		// if (LoakSessionManager.Instance.IsHost)
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_38 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_38);
		bool L_39 = L_38->___IsHost_12;
		V_5 = L_39;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_00dd;
		}
	}
	{
		// LoakSessionManager.Instance.SendToAll(5, sender, data);
		LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2* L_41 = ((LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_StaticFields*)il2cpp_codegen_static_fields_for(LoakSessionManager_t7C8611983B7FF7C8874434E5BA3048B7D480E9A2_il2cpp_TypeInfo_var))->___Instance_4;
		Guid_t L_42 = ___sender1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = ___data2;
		NullCheck(L_41);
		LoakSessionManager_SendToAll_mE8F8D2359E9A01DF6B4683670B568ACB0BF93E4A(L_41, 5, L_42, L_43, 1, NULL);
	}

IL_00dd:
	{
		// break;
		goto IL_00df;
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void Loak.Examples.SharedARExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedARExample__ctor_m0C06D74CB0FB6B31E81DAA088085F134E413C8E6 (SharedARExample_t2E097EC8DAD3F0EF86AE46A15C7747BD6988B1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<Guid, GameObject> peerObjects = new Dictionary<Guid, GameObject>();
		Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA* L_0 = (Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA*)il2cpp_codegen_object_new(Dictionary_2_tFAAD6F8F4160B63D9467092C4C3774F084BF62EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B(L_0, Dictionary_2__ctor_m668E6C07FCF9F9CD8D2B30942925A7923ED5316B_RuntimeMethod_var);
		__this->___peerObjects_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peerObjects_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoakRoomManagement_set_roomCode_m7FA5225328B0E347D605DC592E6DCC0F38793A46_inline (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string roomCode { get; private set; } = null; // Unique code for matching players to a room.
		String_t* L_0 = ___value0;
		__this->___U3CroomCodeU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CroomCodeU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoakRoomManagement_get_roomCode_m61BF335ED90705C4FF572C865D77D99A01545046_inline (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// public string roomCode { get; private set; } = null; // Unique code for matching players to a room.
		String_t* L_0 = __this->___U3CroomCodeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* LoakRoomManagement_get_connectedPlayers_m03DDCDD2F8BCC22493919E11F362ACE4F58F2C4F_inline (LoakRoomManagement_t9D241EC671F1D906720A64144CECBCC05A6FF98B* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<Guid, Player> connectedPlayers { get; private set; } = new Dictionary<Guid, Player>(); // Collection of all players currently in the room.
		Dictionary_2_t39FB32941F917BE64003F2C1B6DAA67B889DA698* L_0 = __this->___U3CconnectedPlayersU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerAddedArgs_get_Peer_mF04D06FAC3F681FA7E4EEA53D4727E1D4A20ACAC_inline (PeerAddedArgs_t1D6549A3DBAF0BBD1AF4D379F9F41B564312BF43* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerStateReceivedArgs_get_Peer_mE8CD905A84120698BDEB7B43E4410AA1050C0008_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PeerStateReceivedArgs_get_State_mE79951CD142633147CD62DDDE3BB3EB1A48ED77D_inline (PeerStateReceivedArgs_tA86062DFCE1020D4230FB6A3EF60C0A27A33849D* __this, const RuntimeMethod* method) 
{
	{
		// public PeerState State { get; private set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PeerRemovedArgs_get_Peer_mCC879C96B5FE8067214B3CBCA0271F75B2C9F5C1_inline (PeerRemovedArgs_t9AC6CDB92719B8A00CE551EBCB63AB42C8E697FF* __this, const RuntimeMethod* method) 
{
	{
		// public IPeer Peer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t PeerDataReceivedArgs_get_Tag_m40BCD818739E964C1B6D0BC363D44A77155E9962_inline (PeerDataReceivedArgs_tF80148A30A40606F3EAF1160FD2759426829B514* __this, const RuntimeMethod* method) 
{
	{
		// public uint Tag { get; private set; }
		uint32_t L_0 = __this->___U3CTagU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA2F21B18E75D600C0C62268B3CAE83FC76983567_gshared_inline (List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mF89061B27B4237E55D2FAA66133A1A5505799C4D_gshared_inline (Enumerator_tD3252BEE819DAE5D8CD86A47818ED60CABC8A2F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 Enumerator_get_Current_mCA547978C08237FB95FE2E694CAA1EE3BC9CBBBB_gshared_inline (Enumerator_t9FEF2496FA5DE5237C8DA17926FD4D968D685AB3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 L_0 = (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = (Guid_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m49CBD7A242C0282C62F56119C22847A2D74F47B5_gshared_inline (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* __this, Guid_t ___item0, const RuntimeMethod* method) 
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = V_0;
		int32_t L_7 = V_1;
		Guid_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Guid_t)L_8);
		return;
	}

IL_0034:
	{
		Guid_t L_9 = ___item0;
		((  void (*) (List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
